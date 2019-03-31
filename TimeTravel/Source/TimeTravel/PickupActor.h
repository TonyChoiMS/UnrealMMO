// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickupActor.generated.h"

UCLASS()
class TIMETRAVEL_API APickupActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickupActor();

	virtual void NotifyActorBeginOverlap(AActor* OtherActor);			// 액터가 오버랩 됬을때 호출되는 함수
	virtual void NotifyActorEndOverlap(AActor* OtherActor);				// 오버랩이 끝났을 때 호출되는 함수 OtherActor는 충돌되는 Actor를 의미함.

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleDefaultsOnly, Category = "Mesh")
		UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, Category = "Collision")
		class UBoxComponent* BoxCollisionComp;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
