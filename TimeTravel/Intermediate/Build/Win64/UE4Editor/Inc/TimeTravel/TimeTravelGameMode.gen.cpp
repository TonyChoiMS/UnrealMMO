// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeTravel/TimeTravelGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeTravelGameMode() {}
// Cross Module References
	TIMETRAVEL_API UClass* Z_Construct_UClass_ATimeTravelGameMode_NoRegister();
	TIMETRAVEL_API UClass* Z_Construct_UClass_ATimeTravelGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TimeTravel();
// End Cross Module References
	void ATimeTravelGameMode::StaticRegisterNativesATimeTravelGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATimeTravelGameMode_NoRegister()
	{
		return ATimeTravelGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATimeTravelGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATimeTravelGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeTravel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeTravelGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TimeTravelGameMode.h" },
		{ "ModuleRelativePath", "TimeTravelGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATimeTravelGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimeTravelGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATimeTravelGameMode_Statics::ClassParams = {
		&ATimeTravelGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATimeTravelGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATimeTravelGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATimeTravelGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATimeTravelGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATimeTravelGameMode, 1017245223);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATimeTravelGameMode(Z_Construct_UClass_ATimeTravelGameMode, &ATimeTravelGameMode::StaticClass, TEXT("/Script/TimeTravel"), TEXT("ATimeTravelGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimeTravelGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
