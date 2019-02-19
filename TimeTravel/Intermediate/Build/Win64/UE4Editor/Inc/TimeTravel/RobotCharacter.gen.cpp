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
	TIMETRAVEL_API UFunction* Z_Construct_UFunction_ARobotCharacter_ExecuteMeleeDamage();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TIMETRAVEL_API UFunction* Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	TIMETRAVEL_API UFunction* Z_Construct_UFunction_ARobotCharacter_OnSeePlayer();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	TIMETRAVEL_API UFunction* Z_Construct_UFunction_ARobotCharacter_UpdateHealthbar();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	static FName NAME_ARobotCharacter_UpdateHealthbar = FName(TEXT("UpdateHealthbar"));
	void ARobotCharacter::UpdateHealthbar()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARobotCharacter_UpdateHealthbar),NULL);
	}
	void ARobotCharacter::StaticRegisterNativesARobotCharacter()
	{
		UClass* Class = ARobotCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteMeleeDamage", &ARobotCharacter::execExecuteMeleeDamage },
			{ "OnMeleeCompBeginOverlap", &ARobotCharacter::execOnMeleeCompBeginOverlap },
			{ "OnSeePlayer", &ARobotCharacter::execOnSeePlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARobotCharacter_ExecuteMeleeDamage_Statics
	{
		struct RobotCharacter_eventExecuteMeleeDamage_Parms
		{
			AActor* HitActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobotCharacter_ExecuteMeleeDamage_Statics::NewProp_HitActor = { UE4CodeGen_Private::EPropertyClass::Object, "HitActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RobotCharacter_eventExecuteMeleeDamage_Parms, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobotCharacter_ExecuteMeleeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotCharacter_ExecuteMeleeDamage_Statics::NewProp_HitActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotCharacter_ExecuteMeleeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "RobotCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotCharacter_ExecuteMeleeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotCharacter, "ExecuteMeleeDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(RobotCharacter_eventExecuteMeleeDamage_Parms), Z_Construct_UFunction_ARobotCharacter_ExecuteMeleeDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobotCharacter_ExecuteMeleeDamage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotCharacter_ExecuteMeleeDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotCharacter_ExecuteMeleeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotCharacter_ExecuteMeleeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotCharacter_ExecuteMeleeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics
	{
		struct RobotCharacter_eventOnMeleeCompBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(RobotCharacter_eventOnMeleeCompBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((RobotCharacter_eventOnMeleeCompBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(RobotCharacter_eventOnMeleeCompBeginOverlap_Parms), &Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RobotCharacter_eventOnMeleeCompBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(RobotCharacter_eventOnMeleeCompBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RobotCharacter_eventOnMeleeCompBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(RobotCharacter_eventOnMeleeCompBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RobotCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotCharacter, "OnMeleeCompBeginOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00480401, sizeof(RobotCharacter_eventOnMeleeCompBeginOverlap_Parms), Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotCharacter_OnSeePlayer_Statics
	{
		struct RobotCharacter_eventOnSeePlayer_Parms
		{
			APawn* Pawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobotCharacter_OnSeePlayer_Statics::NewProp_Pawn = { UE4CodeGen_Private::EPropertyClass::Object, "Pawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RobotCharacter_eventOnSeePlayer_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobotCharacter_OnSeePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotCharacter_OnSeePlayer_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotCharacter_OnSeePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RobotCharacter.h" },
		{ "ToolTip", "?????\xd4\xbc??? UFUNCTION ??\xc5\xa9?\xce\xb7? ???????????\xd1\xb4?.\n?\xc3\xb7??\xcc\xbe\xee\xb8\xa6 ?????? ???????? ???? ?\xc4\xb6????\xcd\xbf? ???? ????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotCharacter_OnSeePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotCharacter, "OnSeePlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(RobotCharacter_eventOnSeePlayer_Parms), Z_Construct_UFunction_ARobotCharacter_OnSeePlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobotCharacter_OnSeePlayer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotCharacter_OnSeePlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotCharacter_OnSeePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotCharacter_OnSeePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotCharacter_OnSeePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotCharacter_UpdateHealthbar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotCharacter_UpdateHealthbar_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "RobotCharacter.h" },
		{ "ToolTip", "BlueprintImplementableEvent : ????????\xc6\xae???? ???\xee\xbe\xb2?? ?????? ?\xd4\xbc?(????)?? ????." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotCharacter_UpdateHealthbar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotCharacter, "UpdateHealthbar", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotCharacter_UpdateHealthbar_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotCharacter_UpdateHealthbar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotCharacter_UpdateHealthbar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotCharacter_UpdateHealthbar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARobotCharacter_NoRegister()
	{
		return ARobotCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ARobotCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeCollisionComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeleeCollisionComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TakeHitAnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TakeHitAnimMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeAnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeleeAnimMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BotBehavior;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RobotHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RobotHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeathFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TakeHitFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TakeHitFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundMelee_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundMelee;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundDeath_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundDeath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundTakeHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundTakeHit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARobotCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeTravel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARobotCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARobotCharacter_ExecuteMeleeDamage, "ExecuteMeleeDamage" }, // 1079889009
		{ &Z_Construct_UFunction_ARobotCharacter_OnMeleeCompBeginOverlap, "OnMeleeCompBeginOverlap" }, // 137603945
		{ &Z_Construct_UFunction_ARobotCharacter_OnSeePlayer, "OnSeePlayer" }, // 376142459
		{ &Z_Construct_UFunction_ARobotCharacter_UpdateHealthbar, "UpdateHealthbar" }, // 4224599295
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RobotCharacter.h" },
		{ "ModuleRelativePath", "RobotCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotCharacter_Statics::NewProp_MeleeCollisionComp_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RobotCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobotCharacter_Statics::NewProp_MeleeCollisionComp = { UE4CodeGen_Private::EPropertyClass::Object, "MeleeCollisionComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ARobotCharacter, MeleeCollisionComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARobotCharacter_Statics::NewProp_MeleeCollisionComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobotCharacter_Statics::NewProp_MeleeCollisionComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotCharacter_Statics::NewProp_TakeHitAnimMontage_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "RobotCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobotCharacter_Statics::NewProp_TakeHitAnimMontage = { UE4CodeGen_Private::EPropertyClass::Object, "TakeHitAnimMontage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(ARobotCharacter, TakeHitAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARobotCharacter_Statics::NewProp_TakeHitAnimMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobotCharacter_Statics::NewProp_TakeHitAnimMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotCharacter_Statics::NewProp_MeleeAnimMontage_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "RobotCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobotCharacter_Statics::NewProp_MeleeAnimMontage = { UE4CodeGen_Private::EPropertyClass::Object, "MeleeAnimMontage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(ARobotCharacter, MeleeAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARobotCharacter_Statics::NewProp_MeleeAnimMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobotCharacter_Statics::NewProp_MeleeAnimMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotCharacter_Statics::NewProp_PawnSensingComp_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RobotCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobotCharacter_Statics::NewProp_PawnSensingComp = { UE4CodeGen_Private::EPropertyClass::Object, "PawnSensingComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ARobotCharacter, PawnSensingComp), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARobotCharacter_Statics::NewProp_PawnSensingComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobotCharacter_Statics::NewProp_PawnSensingComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotCharacter_Statics::NewProp_BotBehavior_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "RobotCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobotCharacter_Statics::NewProp_BotBehavior = { UE4CodeGen_Private::EPropertyClass::Object, "BotBehavior", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(ARobotCharacter, BotBehavior), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARobotCharacter_Statics::NewProp_BotBehavior_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobotCharacter_Statics::NewProp_BotBehavior_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotCharacter_Statics::NewProp_RobotHP_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "RobotCharacter.h" },
		{ "ToolTip", "???? ?????? ?????? ??, ?????? \xc5\xb8??, ???????? ?????? ??\xc6\xae?\xd1\xb7?, ???????? ?\xd6\xb4? ????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARobotCharacter_Statics::NewProp_RobotHP = { UE4CodeGen_Private::EPropertyClass::Float, "RobotHP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ARobotCharacter, RobotHP), METADATA_PARAMS(Z_Construct_UClass_ARobotCharacter_Statics::NewProp_RobotHP_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobotCharacter_Statics::NewProp_RobotHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotCharacter_Statics::NewProp_DeathFX_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "RobotCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobotCharacter_Statics::NewProp_DeathFX = { UE4CodeGen_Private::EPropertyClass::Object, "DeathFX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ARobotCharacter, DeathFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARobotCharacter_Statics::NewProp_DeathFX_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobotCharacter_Statics::NewProp_DeathFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotCharacter_Statics::NewProp_TakeHitFX_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "RobotCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobotCharacter_Statics::NewProp_TakeHitFX = { UE4CodeGen_Private::EPropertyClass::Object, "TakeHitFX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ARobotCharacter, TakeHitFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARobotCharacter_Statics::NewProp_TakeHitFX_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobotCharacter_Statics::NewProp_TakeHitFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotCharacter_Statics::NewProp_SoundMelee_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "RobotCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobotCharacter_Statics::NewProp_SoundMelee = { UE4CodeGen_Private::EPropertyClass::Object, "SoundMelee", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ARobotCharacter, SoundMelee), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARobotCharacter_Statics::NewProp_SoundMelee_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobotCharacter_Statics::NewProp_SoundMelee_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotCharacter_Statics::NewProp_SoundDeath_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "RobotCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobotCharacter_Statics::NewProp_SoundDeath = { UE4CodeGen_Private::EPropertyClass::Object, "SoundDeath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ARobotCharacter, SoundDeath), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARobotCharacter_Statics::NewProp_SoundDeath_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobotCharacter_Statics::NewProp_SoundDeath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotCharacter_Statics::NewProp_SoundTakeHit_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "RobotCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobotCharacter_Statics::NewProp_SoundTakeHit = { UE4CodeGen_Private::EPropertyClass::Object, "SoundTakeHit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ARobotCharacter, SoundTakeHit), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARobotCharacter_Statics::NewProp_SoundTakeHit_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobotCharacter_Statics::NewProp_SoundTakeHit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARobotCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotCharacter_Statics::NewProp_MeleeCollisionComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotCharacter_Statics::NewProp_TakeHitAnimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotCharacter_Statics::NewProp_MeleeAnimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotCharacter_Statics::NewProp_PawnSensingComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotCharacter_Statics::NewProp_BotBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotCharacter_Statics::NewProp_RobotHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotCharacter_Statics::NewProp_DeathFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotCharacter_Statics::NewProp_TakeHitFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotCharacter_Statics::NewProp_SoundMelee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotCharacter_Statics::NewProp_SoundDeath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotCharacter_Statics::NewProp_SoundTakeHit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARobotCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARobotCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARobotCharacter_Statics::ClassParams = {
		&ARobotCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ARobotCharacter, 1876939120);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARobotCharacter(Z_Construct_UClass_ARobotCharacter, &ARobotCharacter::StaticClass, TEXT("/Script/TimeTravel"), TEXT("ARobotCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARobotCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
