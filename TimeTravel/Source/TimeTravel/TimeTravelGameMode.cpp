// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TimeTravelGameMode.h"
#include "TimeTravelCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATimeTravelGameMode::ATimeTravelGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TimeTravel/Blueprints/PlayerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
