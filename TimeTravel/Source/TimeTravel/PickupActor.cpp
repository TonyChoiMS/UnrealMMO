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
	BoxCollisionComp->InitBoxExtent(FVector(30.0f, 30.0f, 20.0f));			// 컴포넌트 사이즈
	BoxCollisionComp->SetCollisionResponseToAllChannels(ECR_Ignore);		// 컬리전이 모든 채널과 반응하지 않도록 무시로 설정
	BoxCollisionComp->SetCollisionResponseToChannel(ECC_GameTraceChannel1, ECR_Overlap);		// 컬리전이 플레이어만 오버랩 될 수 있도록 설정
	BoxCollisionComp->SetupAttachment(RootComponent);						// 박스 컴포넌트를 RootComponent에 추가
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

// 플레이어와 오버랩되면 매쉬 컴포넌트를 제거
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

// 오버랩이 끝나면 Box Collision Component를 제거
void APickupActor::NotifyActorEndOverlap(AActor* OtherActor)
{
	Super::NotifyActorEndOverlap(OtherActor);

	if (OtherActor->IsA(StaticClass()))
	{
		BoxCollisionComp->DestroyComponent();
	}
}

