// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TimeTravelGameMode.generated.h"

UCLASS(minimalapi)
class ATimeTravelGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ATimeTravelGameMode();

	UPROPERTY(EditDefaultsOnly, Category = "Sound")
		class UAudioComponent* AmbientAudioComp;

protected:
	virtual void BeginPlay() override;
};



