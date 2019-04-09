// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeTravel/TimeTravelGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeTravelGameInstance() {}
// Cross Module References
	TIMETRAVEL_API UClass* Z_Construct_UClass_UTimeTravelGameInstance_NoRegister();
	TIMETRAVEL_API UClass* Z_Construct_UClass_UTimeTravelGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_TimeTravel();
	TIMETRAVEL_API UFunction* Z_Construct_UFunction_UTimeTravelGameInstance_ClearCustomInt();
	TIMETRAVEL_API UFunction* Z_Construct_UFunction_UTimeTravelGameInstance_LoadCustomInt();
	TIMETRAVEL_API UFunction* Z_Construct_UFunction_UTimeTravelGameInstance_SaveCustomInt();
	TIMETRAVEL_API UFunction* Z_Construct_UFunction_UTimeTravelGameInstance_SaveGame();
	TIMETRAVEL_API UClass* Z_Construct_UClass_UTimeTravelSaveGame_NoRegister();
// End Cross Module References
	void UTimeTravelGameInstance::StaticRegisterNativesUTimeTravelGameInstance()
	{
		UClass* Class = UTimeTravelGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearCustomInt", &UTimeTravelGameInstance::execClearCustomInt },
			{ "LoadCustomInt", &UTimeTravelGameInstance::execLoadCustomInt },
			{ "SaveCustomInt", &UTimeTravelGameInstance::execSaveCustomInt },
			{ "SaveGame", &UTimeTravelGameInstance::execSaveGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTimeTravelGameInstance_ClearCustomInt_Statics
	{
		struct TimeTravelGameInstance_eventClearCustomInt_Parms
		{
			FString FieldName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTimeTravelGameInstance_ClearCustomInt_Statics::NewProp_FieldName = { UE4CodeGen_Private::EPropertyClass::Str, "FieldName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimeTravelGameInstance_eventClearCustomInt_Parms, FieldName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeTravelGameInstance_ClearCustomInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeTravelGameInstance_ClearCustomInt_Statics::NewProp_FieldName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeTravelGameInstance_ClearCustomInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Saved Game" },
		{ "ModuleRelativePath", "TimeTravelGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeTravelGameInstance_ClearCustomInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeTravelGameInstance, "ClearCustomInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TimeTravelGameInstance_eventClearCustomInt_Parms), Z_Construct_UFunction_UTimeTravelGameInstance_ClearCustomInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimeTravelGameInstance_ClearCustomInt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeTravelGameInstance_ClearCustomInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimeTravelGameInstance_ClearCustomInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeTravelGameInstance_ClearCustomInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeTravelGameInstance_ClearCustomInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeTravelGameInstance_LoadCustomInt_Statics
	{
		struct TimeTravelGameInstance_eventLoadCustomInt_Parms
		{
			FString FieldName;
			int32 Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTimeTravelGameInstance_LoadCustomInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimeTravelGameInstance_eventLoadCustomInt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimeTravelGameInstance_LoadCustomInt_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TimeTravelGameInstance_eventLoadCustomInt_Parms), &Z_Construct_UFunction_UTimeTravelGameInstance_LoadCustomInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTimeTravelGameInstance_LoadCustomInt_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Int, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TimeTravelGameInstance_eventLoadCustomInt_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTimeTravelGameInstance_LoadCustomInt_Statics::NewProp_FieldName = { UE4CodeGen_Private::EPropertyClass::Str, "FieldName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimeTravelGameInstance_eventLoadCustomInt_Parms, FieldName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeTravelGameInstance_LoadCustomInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeTravelGameInstance_LoadCustomInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeTravelGameInstance_LoadCustomInt_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeTravelGameInstance_LoadCustomInt_Statics::NewProp_FieldName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeTravelGameInstance_LoadCustomInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Saved Game" },
		{ "ModuleRelativePath", "TimeTravelGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeTravelGameInstance_LoadCustomInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeTravelGameInstance, "LoadCustomInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(TimeTravelGameInstance_eventLoadCustomInt_Parms), Z_Construct_UFunction_UTimeTravelGameInstance_LoadCustomInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimeTravelGameInstance_LoadCustomInt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeTravelGameInstance_LoadCustomInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimeTravelGameInstance_LoadCustomInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeTravelGameInstance_LoadCustomInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeTravelGameInstance_LoadCustomInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeTravelGameInstance_SaveCustomInt_Statics
	{
		struct TimeTravelGameInstance_eventSaveCustomInt_Parms
		{
			FString FieldName;
			int32 Value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTimeTravelGameInstance_SaveCustomInt_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Int, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimeTravelGameInstance_eventSaveCustomInt_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTimeTravelGameInstance_SaveCustomInt_Statics::NewProp_FieldName = { UE4CodeGen_Private::EPropertyClass::Str, "FieldName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimeTravelGameInstance_eventSaveCustomInt_Parms, FieldName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeTravelGameInstance_SaveCustomInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeTravelGameInstance_SaveCustomInt_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeTravelGameInstance_SaveCustomInt_Statics::NewProp_FieldName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeTravelGameInstance_SaveCustomInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Saved Game" },
		{ "ModuleRelativePath", "TimeTravelGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeTravelGameInstance_SaveCustomInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeTravelGameInstance, "SaveCustomInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TimeTravelGameInstance_eventSaveCustomInt_Parms), Z_Construct_UFunction_UTimeTravelGameInstance_SaveCustomInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimeTravelGameInstance_SaveCustomInt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeTravelGameInstance_SaveCustomInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimeTravelGameInstance_SaveCustomInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeTravelGameInstance_SaveCustomInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeTravelGameInstance_SaveCustomInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeTravelGameInstance_SaveGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeTravelGameInstance_SaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Saved Game" },
		{ "ModuleRelativePath", "TimeTravelGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeTravelGameInstance_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeTravelGameInstance, "SaveGame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeTravelGameInstance_SaveGame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimeTravelGameInstance_SaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeTravelGameInstance_SaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeTravelGameInstance_SaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTimeTravelGameInstance_NoRegister()
	{
		return UTimeTravelGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTimeTravelGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceGameData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstanceGameData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TestScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimeTravelGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeTravel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTimeTravelGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimeTravelGameInstance_ClearCustomInt, "ClearCustomInt" }, // 1990301637
		{ &Z_Construct_UFunction_UTimeTravelGameInstance_LoadCustomInt, "LoadCustomInt" }, // 632317448
		{ &Z_Construct_UFunction_UTimeTravelGameInstance_SaveCustomInt, "SaveCustomInt" }, // 3160982692
		{ &Z_Construct_UFunction_UTimeTravelGameInstance_SaveGame, "SaveGame" }, // 3538608365
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeTravelGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TimeTravelGameInstance.h" },
		{ "ModuleRelativePath", "TimeTravelGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeTravelGameInstance_Statics::NewProp_InstanceGameData_MetaData[] = {
		{ "ModuleRelativePath", "TimeTravelGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTimeTravelGameInstance_Statics::NewProp_InstanceGameData = { UE4CodeGen_Private::EPropertyClass::Object, "InstanceGameData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UTimeTravelGameInstance, InstanceGameData), Z_Construct_UClass_UTimeTravelSaveGame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTimeTravelGameInstance_Statics::NewProp_InstanceGameData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimeTravelGameInstance_Statics::NewProp_InstanceGameData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeTravelGameInstance_Statics::NewProp_TestScore_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "TimeTravelGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTimeTravelGameInstance_Statics::NewProp_TestScore = { UE4CodeGen_Private::EPropertyClass::Int, "TestScore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UTimeTravelGameInstance, TestScore), METADATA_PARAMS(Z_Construct_UClass_UTimeTravelGameInstance_Statics::NewProp_TestScore_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimeTravelGameInstance_Statics::NewProp_TestScore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimeTravelGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeTravelGameInstance_Statics::NewProp_InstanceGameData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeTravelGameInstance_Statics::NewProp_TestScore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimeTravelGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimeTravelGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTimeTravelGameInstance_Statics::ClassParams = {
		&UTimeTravelGameInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UTimeTravelGameInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UTimeTravelGameInstance_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTimeTravelGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTimeTravelGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimeTravelGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTimeTravelGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTimeTravelGameInstance, 345925125);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTimeTravelGameInstance(Z_Construct_UClass_UTimeTravelGameInstance, &UTimeTravelGameInstance::StaticClass, TEXT("/Script/TimeTravel"), TEXT("UTimeTravelGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimeTravelGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
