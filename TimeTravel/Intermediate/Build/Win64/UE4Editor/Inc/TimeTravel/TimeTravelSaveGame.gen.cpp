// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeTravel/TimeTravelSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeTravelSaveGame() {}
// Cross Module References
	TIMETRAVEL_API UClass* Z_Construct_UClass_UTimeTravelSaveGame_NoRegister();
	TIMETRAVEL_API UClass* Z_Construct_UClass_UTimeTravelSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_TimeTravel();
// End Cross Module References
	void UTimeTravelSaveGame::StaticRegisterNativesUTimeTravelSaveGame()
	{
	}
	UClass* Z_Construct_UClass_UTimeTravelSaveGame_NoRegister()
	{
		return UTimeTravelSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UTimeTravelSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeTravelData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TimeTravelData;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TimeTravelData_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeTravelData_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimeTravelSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeTravel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeTravelSaveGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TimeTravelSaveGame.h" },
		{ "ModuleRelativePath", "TimeTravelSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeTravelSaveGame_Statics::NewProp_TimeTravelData_MetaData[] = {
		{ "ModuleRelativePath", "TimeTravelSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTimeTravelSaveGame_Statics::NewProp_TimeTravelData = { UE4CodeGen_Private::EPropertyClass::Map, "TimeTravelData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UTimeTravelSaveGame, TimeTravelData), METADATA_PARAMS(Z_Construct_UClass_UTimeTravelSaveGame_Statics::NewProp_TimeTravelData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimeTravelSaveGame_Statics::NewProp_TimeTravelData_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTimeTravelSaveGame_Statics::NewProp_TimeTravelData_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "TimeTravelData_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTimeTravelSaveGame_Statics::NewProp_TimeTravelData_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "TimeTravelData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimeTravelSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeTravelSaveGame_Statics::NewProp_TimeTravelData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeTravelSaveGame_Statics::NewProp_TimeTravelData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeTravelSaveGame_Statics::NewProp_TimeTravelData_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimeTravelSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimeTravelSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTimeTravelSaveGame_Statics::ClassParams = {
		&UTimeTravelSaveGame::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UTimeTravelSaveGame_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UTimeTravelSaveGame_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTimeTravelSaveGame_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTimeTravelSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimeTravelSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTimeTravelSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTimeTravelSaveGame, 2061595218);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTimeTravelSaveGame(Z_Construct_UClass_UTimeTravelSaveGame, &UTimeTravelSaveGame::StaticClass, TEXT("/Script/TimeTravel"), TEXT("UTimeTravelSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimeTravelSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
