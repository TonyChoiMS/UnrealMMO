// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TimeTravelCharacter.h"
#include "Sword.generated.h"

UCLASS()
class TIMETRAVEL_API ASword : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASword();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	class ATimeTravelCharacter* MyPawn;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleDefaultsOnly, Category = Weapon)
		class USkeletalMeshComponent* SwordMesh;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	void SetOwningPawn(ATimeTravelCharacter* NewOwner);

private:
	UPROPERTY(VisibleAnyWhere, Category = Weapon)
		class UCapsuleComponent* SwordCollision;
};
