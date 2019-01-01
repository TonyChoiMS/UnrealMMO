// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeTravel/RobotCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRobotCharacter() {}
// Cross Module References
	TIMETRAVEL_API UClass* Z_Construct_UClass_ARobotCharacter_NoRegister();
	TIMETRAVEL_API UClass* Z_Construct_UClass_ARobotCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TimeTravel();
// End Cross Module References
	void ARobotCharacter::StaticRegisterNativesARobotCharacter()
	{
	}
	UClass* Z_Construct_UClass_ARobotCharacter_NoRegister()
	{
		return ARobotCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ARobotCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RobotHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RobotHP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARobotCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeTravel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RobotCharacter.h" },
		{ "ModuleRelativePath", "RobotCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotCharacter_Statics::NewProp_RobotHP_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "RobotCharacter.h" },
		{ "ToolTip", "???? ?????? ?????? ??, ?????? \xc5\xb8??, ???????? ?????? ??\xc6\xae?\xd1\xb7?, ???????? ?\xd6\xb4? ????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARobotCharacter_Statics::NewProp_RobotHP = { UE4CodeGen_Private::EPropertyClass::Float, "RobotHP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ARobotCharacter, RobotHP), METADATA_PARAMS(Z_Construct_UClass_ARobotCharacter_Statics::NewProp_RobotHP_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobotCharacter_Statics::NewProp_RobotHP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARobotCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotCharacter_Statics::NewProp_RobotHP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARobotCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARobotCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARobotCharacter_Statics::ClassParams = {
		&ARobotCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ARobotCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ARobotCharacter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ARobotCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARobotCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARobotCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARobotCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARobotCharacter, 2074174110);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARobotCharacter(Z_Construct_UClass_ARobotCharacter, &ARobotCharacter::StaticClass, TEXT("/Script/TimeTravel"), TEXT("ARobotCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARobotCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
