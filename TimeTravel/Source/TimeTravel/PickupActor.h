// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include  "Components/WidgetComponent.h"
#include "ItemUserWidget.h"
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
		FString Name;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleDefaultsOnly, Category = "Mesh")
		UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, Category = "Collision")
		class UBoxComponent* BoxCollisionComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WidgetComp")
		class UWidgetComponent* WidgetComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
