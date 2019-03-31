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

	virtual void NotifyActorBeginOverlap(AActor* OtherActor);			// ���Ͱ� ������ ������ ȣ��Ǵ� �Լ�
	virtual void NotifyActorEndOverlap(AActor* OtherActor);				// �������� ������ �� ȣ��Ǵ� �Լ� OtherActor�� �浹�Ǵ� Actor�� �ǹ���.

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
