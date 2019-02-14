// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
class APawn;
#ifdef TIMETRAVEL_RobotCharacter_generated_h
#error "RobotCharacter.generated.h already included, missing '#pragma once' in RobotCharacter.h"
#endif
#define TIMETRAVEL_RobotCharacter_generated_h

#define TimeTravel_Source_TimeTravel_RobotCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExecuteMeleeDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_HitActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExecuteMeleeDamage(Z_Param_HitActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnMeleeCompBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMeleeCompBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSeePlayer) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSeePlayer(Z_Param_Pawn); \
		P_NATIVE_END; \
	}


#define TimeTravel_Source_TimeTravel_RobotCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExecuteMeleeDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_HitActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExecuteMeleeDamage(Z_Param_HitActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnMeleeCompBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMeleeCompBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSeePlayer) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSeePlayer(Z_Param_Pawn); \
		P_NATIVE_END; \
	}


#define TimeTravel_Source_TimeTravel_RobotCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARobotCharacter(); \
	friend struct Z_Construct_UClass_ARobotCharacter_Statics; \
public: \
	DECLARE_CLASS(ARobotCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeTravel"), NO_API) \
	DECLARE_SERIALIZER(ARobotCharacter)


#define TimeTravel_Source_TimeTravel_RobotCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARobotCharacter(); \
	friend struct Z_Construct_UClass_ARobotCharacter_Statics; \
public: \
	DECLARE_CLASS(ARobotCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeTravel"), NO_API) \
	DECLARE_SERIALIZER(ARobotCharacter)


#define TimeTravel_Source_TimeTravel_RobotCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARobotCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARobotCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARobotCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARobotCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARobotCharacter(ARobotCharacter&&); \
	NO_API ARobotCharacter(const ARobotCharacter&); \
public:


#define TimeTravel_Source_TimeTravel_RobotCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARobotCharacter(ARobotCharacter&&); \
	NO_API ARobotCharacter(const ARobotCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARobotCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARobotCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARobotCharacter)


#define TimeTravel_Source_TimeTravel_RobotCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SoundTakeHit() { return STRUCT_OFFSET(ARobotCharacter, SoundTakeHit); } \
	FORCEINLINE static uint32 __PPO__SoundDeath() { return STRUCT_OFFSET(ARobotCharacter, SoundDeath); } \
	FORCEINLINE static uint32 __PPO__SoundMelee() { return STRUCT_OFFSET(ARobotCharacter, SoundMelee); }


#define TimeTravel_Source_TimeTravel_RobotCharacter_h_9_PROLOG
#define TimeTravel_Source_TimeTravel_RobotCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TimeTravel_Source_TimeTravel_RobotCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TimeTravel_Source_TimeTravel_RobotCharacter_h_12_RPC_WRAPPERS \
	TimeTravel_Source_TimeTravel_RobotCharacter_h_12_INCLASS \
	TimeTravel_Source_TimeTravel_RobotCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TimeTravel_Source_TimeTravel_RobotCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TimeTravel_Source_TimeTravel_RobotCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TimeTravel_Source_TimeTravel_RobotCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TimeTravel_Source_TimeTravel_RobotCharacter_h_12_INCLASS_NO_PURE_DECLS \
	TimeTravel_Source_TimeTravel_RobotCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TimeTravel_Source_TimeTravel_RobotCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
