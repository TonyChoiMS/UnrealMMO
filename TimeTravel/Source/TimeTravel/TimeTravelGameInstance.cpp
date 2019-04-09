// Fill out your copyright notice in the Description page of Project Settings.

#include "TimeTravelGameInstance.h"
#include "Kismet/GameplayStatics.h"

UTimeTravelGameInstance::UTimeTravelGameInstance()
{
	DefaultSaveGameSlot = TEXT("_TimeTravelGame");
}

void UTimeTravelGameInstance::InitSaveGameSlot()
{
	if (!UGameplayStatics::DoesSaveGameExist(DefaultSaveGameSlot, 0))
	{
		if (InstanceGameData == nullptr)
		{
			InstanceGameData = Cast<UTimeTravelSaveGame>(UGameplayStatics::CreateSaveGameObject(UTimeTravelSaveGame::StaticClass()));
		}
		UGameplayStatics::SaveGameToSlot(InstanceGameData, DefaultSaveGameSlot, 0);			// 두번째 인자인 0은 게임 플레이어의 인덱스를 의미
	}
	else
	{
		InstanceGameData = Cast<UTimeTravelSaveGame>(UGameplayStatics::LoadGameFromSlot(DefaultSaveGameSlot, 0));		// 이곳에서도 인자인 0은 게임 플레이어의 인덱스를 의미.
	}
}

void UTimeTravelGameInstance::Init()
{
	Super::Init();

	InitSaveGameSlot();
}

bool UTimeTravelGameInstance::LoadCustomInt(FString FieldName, int32 & Value)
{
	return InstanceGameData->LoadCustomInt(FieldName, Value);
}

void UTimeTravelGameInstance::SaveCustomInt(FString FieldName, int32 Value)
{
	InstanceGameData->SaveCustomInt(FieldName, Value);
}

void UTimeTravelGameInstance::ClearCustomInt(FString FieldName)
{
	InstanceGameData->ClearCustomInt(FieldName);
}

void UTimeTravelGameInstance::SaveGame()
{
	UGameplayStatics::SaveGameToSlot(InstanceGameData, DefaultSaveGameSlot, 0);
}
