// Fill out your copyright notice in the Description page of Project Settings.

#include "TimeTravelSaveGame.h"

bool UTimeTravelSaveGame::LoadCustomInt(FString FieldName, int32& Value) const
{
	const int32* ValuePointer = TimeTravelData.Find(FieldName);

	if (ValuePointer != nullptr)
	{
		Value = *ValuePointer;
		return true;
	}

	return false;
}

void UTimeTravelSaveGame::SaveCustomInt(FString FieldName, int32 Value)
{
	TimeTravelData.FindOrAdd(FieldName) = Value;
}

void UTimeTravelSaveGame::ClearCustomInt(FString FieldName)
{
	TimeTravelData.Remove(FieldName);
}