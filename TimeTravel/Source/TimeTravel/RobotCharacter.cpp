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
	PrimaryActorTick.bCanEverTick = true;			// �� Ŭ�������� ƽ�Լ��� ����ϰڴٴ� �ǹ�. �̰��� ������ ƽ�Լ��� �����ص� ������ ����.

	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.f);

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> RobotModel(TEXT("SkeletalMesh'/Game/TimeTravel/Robot/Enemy_Model.Enemy_Model'"));		// ������ ���빰�� �����ö� ����Ѵ�.
	GetMesh()->SetSkeletalMesh(RobotModel.Object);

	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComp"));
	PawnSensingComp->SetPeripheralVisionAngle(80.0f);			// �þ߰� 80��
	PawnSensingComp->SightRadius = 800;							// �þ� ���� 8m

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

