// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "TimeTravelSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class TIMETRAVEL_API UTimeTravelSaveGame : public USaveGame
{
	GENERATED_BODY()
	
public:
	bool LoadCustomInt(FString FieldName, int32& Value) const;

	void SaveCustomInt(FString FieldName, int32 Value);

	void ClearCustomInt(FString FieldName);

protected:
	UPROPERTY()
		TMap<FString, int32> TimeTravelData;
};
