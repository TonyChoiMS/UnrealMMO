// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TIMETRAVEL_TimeTravelCharacter_generated_h
#error "TimeTravelCharacter.generated.h already included, missing '#pragma once' in TimeTravelCharacter.h"
#endif
#define TIMETRAVEL_TimeTravelCharacter_generated_h

#define TimeTravel_Source_TimeTravel_TimeTravelCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBPLeftRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPLeftRight(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBPUpDown) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPUpDown(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartAttack(); \
		P_NATIVE_END; \
	}


#define TimeTravel_Source_TimeTravel_TimeTravelCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBPLeftRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPLeftRight(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBPUpDown) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPUpDown(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartAttack(); \
		P_NATIVE_END; \
	}


#define TimeTravel_Source_TimeTravel_TimeTravelCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATimeTravelCharacter(); \
	friend struct Z_Construct_UClass_ATimeTravelCharacter_Statics; \
public: \
	DECLARE_CLASS(ATimeTravelCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TimeTravel"), NO_API) \
	DECLARE_SERIALIZER(ATimeTravelCharacter)


#define TimeTravel_Source_TimeTravel_TimeTravelCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATimeTravelCharacter(); \
	friend struct Z_Construct_UClass_ATimeTravelCharacter_Statics; \
public: \
	DECLARE_CLASS(ATimeTravelCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TimeTravel"), NO_API) \
	DECLARE_SERIALIZER(ATimeTravelCharacter)


#define TimeTravel_Source_TimeTravel_TimeTravelCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATimeTravelCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATimeTravelCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATimeTravelCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATimeTravelCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATimeTravelCharacter(ATimeTravelCharacter&&); \
	NO_API ATimeTravelCharacter(const ATimeTravelCharacter&); \
public:


#define TimeTravel_Source_TimeTravel_TimeTravelCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATimeTravelCharacter(ATimeTravelCharacter&&); \
	NO_API ATimeTravelCharacter(const ATimeTravelCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATimeTravelCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATimeTravelCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATimeTravelCharacter)


#define TimeTravel_Source_TimeTravel_TimeTravelCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATimeTravelCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ATimeTravelCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__AttackAnim1() { return STRUCT_OFFSET(ATimeTravelCharacter, AttackAnim1); } \
	FORCEINLINE static uint32 __PPO__AttackAnim2() { return STRUCT_OFFSET(ATimeTravelCharacter, AttackAnim2); } \
	FORCEINLINE static uint32 __PPO__AttackAnim3() { return STRUCT_OFFSET(ATimeTravelCharacter, AttackAnim3); } \
	FORCEINLINE static uint32 __PPO__AttackAnim4() { return STRUCT_OFFSET(ATimeTravelCharacter, AttackAnim4); } \
	FORCEINLINE static uint32 __PPO__SoundAttack() { return STRUCT_OFFSET(ATimeTravelCharacter, SoundAttack); } \
	FORCEINLINE static uint32 __PPO__AttackFX() { return STRUCT_OFFSET(ATimeTravelCharacter, AttackFX); } \
	FORCEINLINE static uint32 __PPO__AttackFXComp() { return STRUCT_OFFSET(ATimeTravelCharacter, AttackFXComp); }


#define TimeTravel_Source_TimeTravel_TimeTravelCharacter_h_9_PROLOG
#define TimeTravel_Source_TimeTravel_TimeTravelCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TimeTravel_Source_TimeTravel_TimeTravelCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TimeTravel_Source_TimeTravel_TimeTravelCharacter_h_12_RPC_WRAPPERS \
	TimeTravel_Source_TimeTravel_TimeTravelCharacter_h_12_INCLASS \
	TimeTravel_Source_TimeTravel_TimeTravelCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TimeTravel_Source_TimeTravel_TimeTravelCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TimeTravel_Source_TimeTravel_TimeTravelCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TimeTravel_Source_TimeTravel_TimeTravelCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TimeTravel_Source_TimeTravel_TimeTravelCharacter_h_12_INCLASS_NO_PURE_DECLS \
	TimeTravel_Source_TimeTravel_TimeTravelCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TimeTravel_Source_TimeTravel_TimeTravelCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
