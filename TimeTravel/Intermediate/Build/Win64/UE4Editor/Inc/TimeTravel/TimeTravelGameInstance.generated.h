// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TIMETRAVEL_TimeTravelGameInstance_generated_h
#error "TimeTravelGameInstance.generated.h already included, missing '#pragma once' in TimeTravelGameInstance.h"
#endif
#define TIMETRAVEL_TimeTravelGameInstance_generated_h

#define TimeTravel_Source_TimeTravel_TimeTravelGameInstance_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearCustomInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearCustomInt(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveCustomInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveCustomInt(Z_Param_FieldName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadCustomInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LoadCustomInt(Z_Param_FieldName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	}


#define TimeTravel_Source_TimeTravel_TimeTravelGameInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearCustomInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearCustomInt(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveCustomInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveCustomInt(Z_Param_FieldName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadCustomInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LoadCustomInt(Z_Param_FieldName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	}


#define TimeTravel_Source_TimeTravel_TimeTravelGameInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimeTravelGameInstance(); \
	friend struct Z_Construct_UClass_UTimeTravelGameInstance_Statics; \
public: \
	DECLARE_CLASS(UTimeTravelGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TimeTravel"), NO_API) \
	DECLARE_SERIALIZER(UTimeTravelGameInstance)


#define TimeTravel_Source_TimeTravel_TimeTravelGameInstance_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTimeTravelGameInstance(); \
	friend struct Z_Construct_UClass_UTimeTravelGameInstance_Statics; \
public: \
	DECLARE_CLASS(UTimeTravelGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TimeTravel"), NO_API) \
	DECLARE_SERIALIZER(UTimeTravelGameInstance)


#define TimeTravel_Source_TimeTravel_TimeTravelGameInstance_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimeTravelGameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimeTravelGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimeTravelGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeTravelGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTimeTravelGameInstance(UTimeTravelGameInstance&&); \
	NO_API UTimeTravelGameInstance(const UTimeTravelGameInstance&); \
public:


#define TimeTravel_Source_TimeTravel_TimeTravelGameInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTimeTravelGameInstance(UTimeTravelGameInstance&&); \
	NO_API UTimeTravelGameInstance(const UTimeTravelGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimeTravelGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeTravelGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTimeTravelGameInstance)


#define TimeTravel_Source_TimeTravel_TimeTravelGameInstance_h_16_PRIVATE_PROPERTY_OFFSET
#define TimeTravel_Source_TimeTravel_TimeTravelGameInstance_h_13_PROLOG
#define TimeTravel_Source_TimeTravel_TimeTravelGameInstance_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TimeTravel_Source_TimeTravel_TimeTravelGameInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	TimeTravel_Source_TimeTravel_TimeTravelGameInstance_h_16_RPC_WRAPPERS \
	TimeTravel_Source_TimeTravel_TimeTravelGameInstance_h_16_INCLASS \
	TimeTravel_Source_TimeTravel_TimeTravelGameInstance_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TimeTravel_Source_TimeTravel_TimeTravelGameInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TimeTravel_Source_TimeTravel_TimeTravelGameInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	TimeTravel_Source_TimeTravel_TimeTravelGameInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TimeTravel_Source_TimeTravel_TimeTravelGameInstance_h_16_INCLASS_NO_PURE_DECLS \
	TimeTravel_Source_TimeTravel_TimeTravelGameInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TimeTravel_Source_TimeTravel_TimeTravelGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
