// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "TimeTravelSaveGame.h"
#include "TimeTravelGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class TIMETRAVEL_API UTimeTravelGameInstance : public UGameInstance
{
	GENERATED_BODY()
	

public:
	UTimeTravelGameInstance();

	void InitSaveGameSlot();

	void Init() override;

	UFUNCTION(BlueprintCallable, Category = "Saved Game")
		bool LoadCustomInt(FString FieldName, int32& Value);

	UFUNCTION(BlueprintCallable, Category = "Saved Game")
		void SaveCustomInt(FString FieldName, int32 Value);

	UFUNCTION(BlueprintCallable, Category = "Saved Game")
		void ClearCustomInt(FString FieldName);

	UFUNCTION(BlueprintCallable, Category = "Saved Game")
		void SaveGame();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Score")
		int32 TestScore;

	UPROPERTY()
		class UTimeTravelSaveGame* InstanceGameData;

protected:
	FString DefaultSaveGameSlot;
};
