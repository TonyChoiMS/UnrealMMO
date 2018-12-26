// Fill out your copyright notice in the Description page of Project Settings.

#include "Sword.h"
#include "Engine.h"

// Sets default values
ASword::ASword()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SwordMesh = CreateDefaultSubobject <USkeletalMeshComponent> (TEXT("SwordMesh"));
	RootComponent = SwordMesh;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_Blade_Gimmer(TEXT("SkeletalMesh'/Game/InfinityBladeWeapons/Weapons/Blade/Swords/Blade_Glimmer/SK_Blade_Glimmer.SK_Blade_Glimmer'"));
	SwordMesh->SetSkeletalMesh(SK_Blade_Gimmer.Object);
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

