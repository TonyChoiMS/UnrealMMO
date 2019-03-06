// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeTravel/Armor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmor() {}
// Cross Module References
	TIMETRAVEL_API UClass* Z_Construct_UClass_AArmor_NoRegister();
	TIMETRAVEL_API UClass* Z_Construct_UClass_AArmor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TimeTravel();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AArmor::StaticRegisterNativesAArmor()
	{
	}
	UClass* Z_Construct_UClass_AArmor_NoRegister()
	{
		return AArmor::StaticClass();
	}
	struct Z_Construct_UClass_AArmor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArmorMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeTravel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Armor.h" },
		{ "ModuleRelativePath", "Armor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmor_Statics::NewProp_ArmorMesh_MetaData[] = {
		{ "Category", "Armor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Armor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArmor_Statics::NewProp_ArmorMesh = { UE4CodeGen_Private::EPropertyClass::Object, "ArmorMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AArmor, ArmorMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArmor_Statics::NewProp_ArmorMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AArmor_Statics::NewProp_ArmorMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArmor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmor_Statics::NewProp_ArmorMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmor_Statics::ClassParams = {
		&AArmor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AArmor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AArmor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AArmor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AArmor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmor, 2267302312);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmor(Z_Construct_UClass_AArmor, &AArmor::StaticClass, TEXT("/Script/TimeTravel"), TEXT("AArmor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
