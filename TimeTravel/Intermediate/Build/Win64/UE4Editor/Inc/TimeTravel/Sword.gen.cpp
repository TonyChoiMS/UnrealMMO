// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeTravel/Sword.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSword() {}
// Cross Module References
	TIMETRAVEL_API UClass* Z_Construct_UClass_ASword_NoRegister();
	TIMETRAVEL_API UClass* Z_Construct_UClass_ASword();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TimeTravel();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void ASword::StaticRegisterNativesASword()
	{
	}
	UClass* Z_Construct_UClass_ASword_NoRegister()
	{
		return ASword::StaticClass();
	}
	struct Z_Construct_UClass_ASword_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwordMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SwordMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASword_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeTravel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASword_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sword.h" },
		{ "ModuleRelativePath", "Sword.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASword_Statics::NewProp_SwordMesh_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Sword.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASword_Statics::NewProp_SwordMesh = { UE4CodeGen_Private::EPropertyClass::Object, "SwordMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000b0009, 1, nullptr, STRUCT_OFFSET(ASword, SwordMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASword_Statics::NewProp_SwordMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASword_Statics::NewProp_SwordMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASword_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASword_Statics::NewProp_SwordMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASword_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASword>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASword_Statics::ClassParams = {
		&ASword::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ASword_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ASword_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASword_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASword_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASword()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASword_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASword, 4007601773);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASword(Z_Construct_UClass_ASword, &ASword::StaticClass, TEXT("/Script/TimeTravel"), TEXT("ASword"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASword);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
