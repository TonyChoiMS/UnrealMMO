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
		UGameplayStatics::SaveGameToSlot(InstanceGameData, DefaultSaveGameSlot, 0);			// �ι�° ������ 0�� ���� �÷��̾��� �ε����� �ǹ�
	}
	else
	{
		InstanceGameData = Cast<UTimeTravelSaveGame>(UGameplayStatics::LoadGameFromSlot(DefaultSaveGameSlot, 0));		// �̰������� ������ 0�� ���� �÷��̾��� �ε����� �ǹ�.
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
