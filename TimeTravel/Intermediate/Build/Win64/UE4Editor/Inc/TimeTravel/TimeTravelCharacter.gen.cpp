// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeTravel/TimeTravelCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeTravelCharacter() {}
// Cross Module References
	TIMETRAVEL_API UClass* Z_Construct_UClass_ATimeTravelCharacter_NoRegister();
	TIMETRAVEL_API UClass* Z_Construct_UClass_ATimeTravelCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TimeTravel();
	TIMETRAVEL_API UFunction* Z_Construct_UFunction_ATimeTravelCharacter_BPLeftRight();
	TIMETRAVEL_API UFunction* Z_Construct_UFunction_ATimeTravelCharacter_BPUpDown();
	TIMETRAVEL_API UFunction* Z_Construct_UFunction_ATimeTravelCharacter_PutOnArmor();
	TIMETRAVEL_API UFunction* Z_Construct_UFunction_ATimeTravelCharacter_StartAttack();
	TIMETRAVEL_API UFunction* Z_Construct_UFunction_ATimeTravelCharacter_TakeOffArmor();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TIMETRAVEL_API UClass* Z_Construct_UClass_AArmor_NoRegister();
	TIMETRAVEL_API UClass* Z_Construct_UClass_ASword_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void ATimeTravelCharacter::StaticRegisterNativesATimeTravelCharacter()
	{
		UClass* Class = ATimeTravelCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BPLeftRight", &ATimeTravelCharacter::execBPLeftRight },
			{ "BPUpDown", &ATimeTravelCharacter::execBPUpDown },
			{ "PutOnArmor", &ATimeTravelCharacter::execPutOnArmor },
			{ "StartAttack", &ATimeTravelCharacter::execStartAttack },
			{ "TakeOffArmor", &ATimeTravelCharacter::execTakeOffArmor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATimeTravelCharacter_BPLeftRight_Statics
	{
		struct TimeTravelCharacter_eventBPLeftRight_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATimeTravelCharacter_BPLeftRight_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimeTravelCharacter_eventBPLeftRight_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimeTravelCharacter_BPLeftRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeTravelCharacter_BPLeftRight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeTravelCharacter_BPLeftRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "BPCalled" },
		{ "ModuleRelativePath", "TimeTravelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeTravelCharacter_BPLeftRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeTravelCharacter, "BPLeftRight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TimeTravelCharacter_eventBPLeftRight_Parms), Z_Construct_UFunction_ATimeTravelCharacter_BPLeftRight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATimeTravelCharacter_BPLeftRight_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimeTravelCharacter_BPLeftRight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATimeTravelCharacter_BPLeftRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimeTravelCharacter_BPLeftRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATimeTravelCharacter_BPLeftRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeTravelCharacter_BPUpDown_Statics
	{
		struct TimeTravelCharacter_eventBPUpDown_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATimeTravelCharacter_BPUpDown_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimeTravelCharacter_eventBPUpDown_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimeTravelCharacter_BPUpDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeTravelCharacter_BPUpDown_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeTravelCharacter_BPUpDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "BPCalled" },
		{ "ModuleRelativePath", "TimeTravelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeTravelCharacter_BPUpDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeTravelCharacter, "BPUpDown", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TimeTravelCharacter_eventBPUpDown_Parms), Z_Construct_UFunction_ATimeTravelCharacter_BPUpDown_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATimeTravelCharacter_BPUpDown_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimeTravelCharacter_BPUpDown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATimeTravelCharacter_BPUpDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimeTravelCharacter_BPUpDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATimeTravelCharacter_BPUpDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeTravelCharacter_PutOnArmor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeTravelCharacter_PutOnArmor_Statics::Function_MetaDataParams[] = {
		{ "Category", "BPCalled" },
		{ "ModuleRelativePath", "TimeTravelCharacter.h" },
		{ "ToolTip", "TSubclassOf ???\xc3\xb8??? ?????\xcf\xbf? AArmor?? ?\xc4\xbb? \xc5\xac?????? ?\xd2\xb4??? ?? ??????, ???????? ???\xd1\xbd?\xc5\xb3 ?? ?\xd6\xb4?." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeTravelCharacter_PutOnArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeTravelCharacter, "PutOnArmor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimeTravelCharacter_PutOnArmor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATimeTravelCharacter_PutOnArmor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimeTravelCharacter_PutOnArmor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATimeTravelCharacter_PutOnArmor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeTravelCharacter_StartAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeTravelCharacter_StartAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "BpCalled" },
		{ "ModuleRelativePath", "TimeTravelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeTravelCharacter_StartAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeTravelCharacter, "StartAttack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimeTravelCharacter_StartAttack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATimeTravelCharacter_StartAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimeTravelCharacter_StartAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATimeTravelCharacter_StartAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeTravelCharacter_TakeOffArmor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeTravelCharacter_TakeOffArmor_Statics::Function_MetaDataParams[] = {
		{ "Category", "BPCalled" },
		{ "ModuleRelativePath", "TimeTravelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeTravelCharacter_TakeOffArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeTravelCharacter, "TakeOffArmor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimeTravelCharacter_TakeOffArmor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATimeTravelCharacter_TakeOffArmor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimeTravelCharacter_TakeOffArmor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATimeTravelCharacter_TakeOffArmor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATimeTravelCharacter_NoRegister()
	{
		return ATimeTravelCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATimeTravelCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackFXComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackFXComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttackFX;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackFX_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackAnim4_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackAnim4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackAnim3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackAnim3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackAnim2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackAnim2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackAnim1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackAnim1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ArmorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwordClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SwordClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATimeTravelCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeTravel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATimeTravelCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATimeTravelCharacter_BPLeftRight, "BPLeftRight" }, // 1023435938
		{ &Z_Construct_UFunction_ATimeTravelCharacter_BPUpDown, "BPUpDown" }, // 1472585674
		{ &Z_Construct_UFunction_ATimeTravelCharacter_PutOnArmor, "PutOnArmor" }, // 2123885815
		{ &Z_Construct_UFunction_ATimeTravelCharacter_StartAttack, "StartAttack" }, // 2395476261
		{ &Z_Construct_UFunction_ATimeTravelCharacter_TakeOffArmor, "TakeOffArmor" }, // 1628419205
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeTravelCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TimeTravelCharacter.h" },
		{ "ModuleRelativePath", "TimeTravelCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackFXComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TimeTravelCharacter.h" },
		{ "ToolTip", "?\xd6\xb9\xdf\xbc?, ????\xc5\xa9?? ????, ?\xce\xb5????? ?\xca\xb0? ???\xd3\xb5??? ?\xca\xb4? ?\xc4\xbb??????? ????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackFXComp = { UE4CodeGen_Private::EPropertyClass::Object, "AttackFXComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000082008, 1, nullptr, STRUCT_OFFSET(ATimeTravelCharacter, AttackFXComp), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackFXComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackFXComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackFX_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "TimeTravelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackFX = { UE4CodeGen_Private::EPropertyClass::Array, "AttackFX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ATimeTravelCharacter, AttackFX), METADATA_PARAMS(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackFX_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackFX_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackFX_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AttackFX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_SoundAttack_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "TimeTravelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_SoundAttack = { UE4CodeGen_Private::EPropertyClass::Object, "SoundAttack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ATimeTravelCharacter, SoundAttack), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_SoundAttack_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_SoundAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackAnim4_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "TimeTravelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackAnim4 = { UE4CodeGen_Private::EPropertyClass::Object, "AttackAnim4", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ATimeTravelCharacter, AttackAnim4), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackAnim4_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackAnim4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackAnim3_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "TimeTravelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackAnim3 = { UE4CodeGen_Private::EPropertyClass::Object, "AttackAnim3", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ATimeTravelCharacter, AttackAnim3), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackAnim3_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackAnim3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackAnim2_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "TimeTravelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackAnim2 = { UE4CodeGen_Private::EPropertyClass::Object, "AttackAnim2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ATimeTravelCharacter, AttackAnim2), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackAnim2_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackAnim2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackAnim1_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "TimeTravelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackAnim1 = { UE4CodeGen_Private::EPropertyClass::Object, "AttackAnim1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ATimeTravelCharacter, AttackAnim1), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackAnim1_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackAnim1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_ArmorClass_MetaData[] = {
		{ "Category", "Armor" },
		{ "ModuleRelativePath", "TimeTravelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_ArmorClass = { UE4CodeGen_Private::EPropertyClass::Class, "ArmorClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(ATimeTravelCharacter, ArmorClass), Z_Construct_UClass_AArmor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_ArmorClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_ArmorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_MaxHP_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "TimeTravelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_MaxHP = { UE4CodeGen_Private::EPropertyClass::Float, "MaxHP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004005, 1, nullptr, STRUCT_OFFSET(ATimeTravelCharacter, MaxHP), METADATA_PARAMS(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_MaxHP_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_MaxHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_PlayerHP_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "TimeTravelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_PlayerHP = { UE4CodeGen_Private::EPropertyClass::Float, "PlayerHP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ATimeTravelCharacter, PlayerHP), METADATA_PARAMS(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_PlayerHP_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_PlayerHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_SwordClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "TimeTravelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_SwordClass = { UE4CodeGen_Private::EPropertyClass::Class, "SwordClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(ATimeTravelCharacter, SwordClass), Z_Construct_UClass_ASword_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_SwordClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_SwordClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "TimeTravelCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_BaseLookUpRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseLookUpRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(ATimeTravelCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "TimeTravelCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_BaseTurnRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseTurnRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(ATimeTravelCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TimeTravelCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_FollowCamera = { UE4CodeGen_Private::EPropertyClass::Object, "FollowCamera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATimeTravelCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_FollowCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TimeTravelCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_CameraBoom = { UE4CodeGen_Private::EPropertyClass::Object, "CameraBoom", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATimeTravelCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_CameraBoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_CameraBoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATimeTravelCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackFXComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackFX_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_SoundAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackAnim4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackAnim3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackAnim2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_AttackAnim1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_ArmorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_MaxHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_PlayerHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_SwordClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTravelCharacter_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATimeTravelCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimeTravelCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATimeTravelCharacter_Statics::ClassParams = {
		&ATimeTravelCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ATimeTravelCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATimeTravelCharacter_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATimeTravelCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATimeTravelCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATimeTravelCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATimeTravelCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATimeTravelCharacter, 3810388453);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATimeTravelCharacter(Z_Construct_UClass_ATimeTravelCharacter, &ATimeTravelCharacter::StaticClass, TEXT("/Script/TimeTravel"), TEXT("ATimeTravelCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimeTravelCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
