// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "TimeTravelGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class TIMETRAVEL_API UTimeTravelGameInstance : public UGameInstance
{
	GENERATED_BODY()
	

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Score")
		int32 TestScore;
};
