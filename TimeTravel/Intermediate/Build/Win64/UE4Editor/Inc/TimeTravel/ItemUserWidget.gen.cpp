// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeTravel/ItemUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemUserWidget() {}
// Cross Module References
	TIMETRAVEL_API UClass* Z_Construct_UClass_UItemUserWidget_NoRegister();
	TIMETRAVEL_API UClass* Z_Construct_UClass_UItemUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TimeTravel();
// End Cross Module References
	void UItemUserWidget::StaticRegisterNativesUItemUserWidget()
	{
	}
	UClass* Z_Construct_UClass_UItemUserWidget_NoRegister()
	{
		return UItemUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UItemUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeTravel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemUserWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ItemUserWidget.h" },
		{ "ModuleRelativePath", "ItemUserWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemUserWidget_Statics::ClassParams = {
		&UItemUserWidget::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UItemUserWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UItemUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemUserWidget, 4111660447);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemUserWidget(Z_Construct_UClass_UItemUserWidget, &UItemUserWidget::StaticClass, TEXT("/Script/TimeTravel"), TEXT("UItemUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
