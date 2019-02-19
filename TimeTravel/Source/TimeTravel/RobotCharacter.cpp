// Fill out your copyright notice in the Description page of Project Settings.

#include "RobotCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Engine.h"
#include "Perception/PawnSensingComponent.h"
#include "RobotAIController.h"
#include "TimeTravelCharacter.h"

// Sets default values
ARobotCharacter::ARobotCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;			// 이 클래스에서 틱함수를 사용하겠다는 의미. 이것이 없으면 틱함수를 정의해도 사용되지 않음.

	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.f);

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> RobotModel(TEXT("SkeletalMesh'/Game/TimeTravel/Robot/Enemy_Model.Enemy_Model'"));		// 에셋의 내용물을 가져올때 사용한다.
	GetMesh()->SetSkeletalMesh(RobotModel.Object);

	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComp"));
	PawnSensingComp->SetPeripheralVisionAngle(80.0f);			// 시야각 80도
	PawnSensingComp->SightRadius = 800;							// 시야 범위 8m

	MeleeCollisionComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("MeleeCollision"));
	MeleeCollisionComp->SetRelativeLocation(FVector(45, 0, 25));
	MeleeCollisionComp->InitCapsuleSize(30.f, 70.f);
	MeleeCollisionComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	MeleeCollisionComp->SetCollisionResponseToChannel(ECC_GameTraceChannel1, ECR_Overlap);
	MeleeCollisionComp->SetupAttachment(GetCapsuleComponent());

	RobotHP = 100;
}

// Called when the game starts or when spawned
void ARobotCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (PawnSensingComp)
	{
		PawnSensingComp->OnSeePawn.AddDynamic(this, &ARobotCharacter::OnSeePlayer);
	}

	if (MeleeCollisionComp)
	{
		MeleeCollisionComp->OnComponentBeginOverlap.AddDynamic(this, &ARobotCharacter::OnMeleeCompBeginOverlap);
	}
}

// Called every frame
void ARobotCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bSensedTarget && (GetWorld()->TimeSeconds - LastSeenTime > 2.5f))
	{
		ARobotAIController* AIController = Cast<ARobotAIController>(GetController());

		if (AIController)
		{
			bSensedTarget = false;
			AIController->SetEnemy(nullptr); 
		}
	}
}

// Called to bind functionality to input
void ARobotCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

float ARobotCharacter::TakeDamage(float flDamage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	const float ActualDamage = Super::TakeDamage(flDamage, DamageEvent, EventInstigator, DamageCauser);

	if (ActualDamage > 0.f)
	{
		RobotHP -= ActualDamage;

		UpdateHealthbar();

		if (RobotHP <= 0)
		{
			Die(ActualDamage, DamageEvent, EventInstigator, DamageCauser);
		}
		else
		{
			OnHit(ActualDamage, DamageEvent, EventInstigator ? EventInstigator->GetPawn() : NULL, DamageCauser);
		}
	}

	if (RobotHP <= 0.f)
	{
		return 0.f;
	}


	return ActualDamage;
}

void ARobotCharacter::OnSeePlayer(APawn* Pawn)
{
	ARobotAIController* AIController = Cast<ARobotAIController>(GetController());
	ATimeTravelCharacter* SensedPawn = Cast<ATimeTravelCharacter>(Pawn);

	LastSeenTime = GetWorld()->GetTimeSeconds();
	bSensedTarget = true;

	if (AIController && SensedPawn->PlayerHP > 0)
	{
		AIController->SetEnemy(SensedPawn);
	}
}

void ARobotCharacter::LookingForOverlapActor()
{
	TArray<AActor*> Overlaps;

	MeleeCollisionComp->GetOverlappingActors(Overlaps, ATimeTravelCharacter::StaticClass());

	for (int32 i = 0; i < Overlaps.Num(); i++)
	{
		ATimeTravelCharacter* OverlappingPawn = Cast<ATimeTravelCharacter>(Overlaps[i]);

		if (OverlappingPawn)
		{
			ExecuteMeleeDamage(OverlappingPawn);
		}
	}
}

void ARobotCharacter::OnMeleeCompBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	ExecuteMeleeDamage(OtherActor);

	FTimerHandle TimerHandle_MeleeAttack;
	GetWorldTimerManager().SetTimer(TimerHandle_MeleeAttack, this, &ARobotCharacter::LookingForOverlapActor, 2.f, true);
}

void ARobotCharacter::ExecuteMeleeDamage(AActor* HitActor)
{
	ATimeTravelCharacter* PlayerPawn = Cast<ATimeTravelCharacter>(HitActor);

	if (HitActor && HitActor != this && PlayerPawn->PlayerHP > 0)
	{
		if (PlayerPawn && RobotHP > 0)
		{
			PlayAnimMontage(MeleeAnimMontage);

			if (SoundMelee)
			{
				UGameplayStatics::SpawnSoundAttached(SoundMelee, GetRootComponent());
			}

			float bMeleeDuring = GetMesh()->AnimScriptInstance->Montage_GetPlayRate(MeleeAnimMontage);

			if (bMeleeDuring)
			{
				FPointDamageEvent DmgEvent;

				HitActor->TakeDamage(10, DmgEvent, GetController(), this);
			}
		}
	}
}

void ARobotCharacter::OnHit(float DamageTaken, struct FDamageEvent const& DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser)
{
	float bMeleeDuring = GetMesh()->AnimScriptInstance->Montage_GetPlayRate(MeleeAnimMontage);

	if (bMeleeDuring == 0)
	{
		PlayAnimMontage(TakeHitAnimMontage);

		if (DamageTaken > 0.f)
		{
			ApplyDamageMomentum(DamageTaken, DamageEvent, PawnInstigator, DamageCauser);
		}

		if (SoundTakeHit)
		{
			UGameplayStatics::SpawnSoundAttached(SoundTakeHit, RootComponent, NAME_None, FVector::ZeroVector, EAttachLocation::SnapToTarget, true);
		}

		if (TakeHitFX)
		{
			UGameplayStatics::SpawnEmitterAtLocation(this, TakeHitFX, GetActorLocation(), GetActorRotation());
		}
	}
}

void ARobotCharacter::Die(float KillingDamage, struct FDamageEvent const& DamageEvent, AController* Killer, AActor* DamageCauser)
{
	GetWorldTimerManager().ClearAllTimersForObject(this);

	if (GetCapsuleComponent())
	{
		GetCapsuleComponent()->BodyInstance.SetCollisionEnabled(ECollisionEnabled::NoCollision);
		GetCapsuleComponent()->SetCollisionResponseToAllChannels(ECR_Ignore);
	}

	if (GetCharacterMovement())
	{
		GetCharacterMovement()->StopMovementImmediately();
		GetCharacterMovement()->DisableMovement();
	}

	if (Controller != NULL)
	{
		Controller->UnPossess();
	}

	PlayAnimMontage(TakeHitAnimMontage);

	SetRagdollPhysics();
}

void ARobotCharacter::SetRagdollPhysics()
{
	GetMesh()->SetAllBodiesSimulatePhysics(true);
	GetMesh()->SetSimulatePhysics(true);
	GetMesh()->WakeAllRigidBodies();
	GetMesh()->bBlendPhysics = true;

	if (SoundDeath)
	{
		UGameplayStatics::SpawnSoundAttached(SoundDeath, RootComponent, NAME_None, FVector::ZeroVector, EAttachLocation::SnapToTarget, true);
	}

	if (DeathFX)
	{
		UGameplayStatics::SpawnEmitterAtLocation(this, DeathFX, GetActorLocation(), GetActorRotation());
	}
	SetLifeSpan(3.5f);
}