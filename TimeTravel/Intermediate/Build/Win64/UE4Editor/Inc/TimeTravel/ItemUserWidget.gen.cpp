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
	TIMETRAVEL_API UFunction* Z_Construct_UFunction_UItemUserWidget_SetName();
// End Cross Module References
	void UItemUserWidget::StaticRegisterNativesUItemUserWidget()
	{
		UClass* Class = UItemUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetName", &UItemUserWidget::execSetName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemUserWidget_SetName_Statics
	{
		struct ItemUserWidget_eventSetName_Parms
		{
			FString Name;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UItemUserWidget_SetName_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ItemUserWidget_eventSetName_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemUserWidget_SetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemUserWidget_SetName_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemUserWidget_SetName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemUserWidget_SetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemUserWidget, "SetName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(ItemUserWidget_eventSetName_Parms), Z_Construct_UFunction_UItemUserWidget_SetName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UItemUserWidget_SetName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemUserWidget_SetName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UItemUserWidget_SetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemUserWidget_SetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemUserWidget_SetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UItemUserWidget_NoRegister()
	{
		return UItemUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UItemUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemUserWidget_SetName, "SetName" }, // 1147168331
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
		FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UItemUserWidget, 4113797077);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemUserWidget(Z_Construct_UClass_UItemUserWidget, &UItemUserWidget::StaticClass, TEXT("/Script/TimeTravel"), TEXT("UItemUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
