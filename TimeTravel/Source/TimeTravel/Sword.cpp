// Fill out your copyright notice in the Description page of Project Settings.

#include "Sword.h"
#include "Engine.h"
#include "RobotCharacter.h"

// Sets default values
ASword::ASword()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SwordMesh = CreateDefaultSubobject <USkeletalMeshComponent> (TEXT("SwordMesh"));
	RootComponent = SwordMesh;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_Blade_Gimmer(TEXT("SkeletalMesh'/Game/InfinityBladeWeapons/Weapons/Blade/Swords/Blade_Glimmer/SK_Blade_Glimmer.SK_Blade_Glimmer'"));
	SwordMesh->SetSkeletalMesh(SK_Blade_Gimmer.Object);

	SwordCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("SwordCollision"));

	SwordCollision->InitCapsuleSize(30.0f, 50.0f);

	SwordCollision->AttachToComponent(SwordMesh, FAttachmentTransformRules::KeepRelativeTransform, "CapsuleSocket");
}

// Called when the game starts or when spawned
void ASword::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASword::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASword::SetOwningPawn(ATimeTravelCharacter* NewOwner)
{
	if (MyPawn != NewOwner)
	{
		MyPawn = NewOwner;
	}
}

void ASword::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if (OtherActor->IsA(AActor::StaticClass()))
	{
		// �ش� �ִϸ��̼��� �������̸� 1, �ִϸ��̼��� ���������� �ʴٸ� 0
		if (MyPawn->IsAction1 == 1 || MyPawn->IsAction2 == 1 || MyPawn->IsAction3 == 1 || MyPawn->IsAction4 == 1)
		{
			UGameplayStatics::ApplyDamage(OtherActor, 10.0f, NULL, this, UDamageType::StaticClass());		// �������� ������ ���, �������� ��, �������� ������ ��Ʈ�ѷ�, �������� �� ����, ������ Ÿ��
		}
		
		ARobotCharacter* Bot = Cast<ARobotCharacter>(OtherActor);

		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::FromInt(Bot->RobotHP));
	}
}

void ASword::OnUpEquip()
{
	SwordMesh->DetachFromComponent(FDetachmentTransformRules::KeepRelativeTransform);
	SwordMesh->SetHiddenInGame(true);
}