// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TimeTravelGameMode.h"
#include "TimeTravelCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine.h"

ATimeTravelGameMode::ATimeTravelGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TimeTravel/Blueprints/PlayerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	static ConstructorHelpers::FObjectFinder<USoundCue> SoundAmbient(TEXT("SoundCue'/Game/TimeTravel/Sounds/AmbientSoundCue.AmbientSoundCue'"));
	AmbientAudioComp = CreateDefaultSubobject<UAudioComponent>(TEXT("AmbientAudioComp"));
	AmbientAudioComp->SetupAttachment(RootComponent);
	AmbientAudioComp->SetRelativeLocation(FVector(0.0f, 0.0f, -60.f));

	if (SoundAmbient.Object->IsValidLowLevelFast())
	{
		AmbientAudioComp->SetSound(SoundAmbient.Object);
	}
}

void ATimeTravelGameMode::BeginPlay()
{
	Super::BeginPlay();

	AmbientAudioComp->Play();
}
