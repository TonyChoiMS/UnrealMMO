// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeTravel/TimeTravelGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeTravelGameModeBase() {}
// Cross Module References
	TIMETRAVEL_API UClass* Z_Construct_UClass_ATimeTravelGameModeBase_NoRegister();
	TIMETRAVEL_API UClass* Z_Construct_UClass_ATimeTravelGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TimeTravel();
// End Cross Module References
	void ATimeTravelGameModeBase::StaticRegisterNativesATimeTravelGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATimeTravelGameModeBase_NoRegister()
	{
		return ATimeTravelGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATimeTravelGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATimeTravelGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeTravel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeTravelGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TimeTravelGameModeBase.h" },
		{ "ModuleRelativePath", "TimeTravelGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATimeTravelGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimeTravelGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATimeTravelGameModeBase_Statics::ClassParams = {
		&ATimeTravelGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATimeTravelGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATimeTravelGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATimeTravelGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATimeTravelGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATimeTravelGameModeBase, 1292812124);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATimeTravelGameModeBase(Z_Construct_UClass_ATimeTravelGameModeBase, &ATimeTravelGameModeBase::StaticClass, TEXT("/Script/TimeTravel"), TEXT("ATimeTravelGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimeTravelGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
