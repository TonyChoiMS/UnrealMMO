// Fill out your copyright notice in the Description page of Project Settings.

#include "PickupActor.h"
#include "Engine.h"
#include "TimeTravelGameInstance.h"

// Sets default values
APickupActor::APickupActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;

	BoxCollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollisionComp"));
	BoxCollisionComp->InitBoxExtent(FVector(30.0f, 30.0f, 20.0f));			// ������Ʈ ������
	BoxCollisionComp->SetCollisionResponseToAllChannels(ECR_Ignore);		// �ø����� ��� ä�ΰ� �������� �ʵ��� ���÷� ����
	BoxCollisionComp->SetCollisionResponseToChannel(ECC_GameTraceChannel1, ECR_Overlap);		// �ø����� �÷��̾ ������ �� �� �ֵ��� ����
	BoxCollisionComp->SetupAttachment(RootComponent);						// �ڽ� ������Ʈ�� RootComponent�� �߰�
}

// Called when the game starts or when spawned
void APickupActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickupActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// �÷��̾�� �������Ǹ� �Ž� ������Ʈ�� ����
void APickupActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if (OtherActor->IsA(AActor::StaticClass()))
	{
		MeshComp->DestroyComponent();

		UTimeTravelGameInstance* GameInstance = Cast<UTimeTravelGameInstance>(UGameplayStatics::GetGameInstance(this));
		GameInstance->TestScore += 10;
	}
}

// �������� ������ Box Collision Component�� ����
void APickupActor::NotifyActorEndOverlap(AActor* OtherActor)
{
	Super::NotifyActorEndOverlap(OtherActor);

	if (OtherActor->IsA(StaticClass()))
	{
		BoxCollisionComp->DestroyComponent();
	}
}

