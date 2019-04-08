// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TIMETRAVEL_ItemUserWidget_generated_h
#error "ItemUserWidget.generated.h already included, missing '#pragma once' in ItemUserWidget.h"
#endif
#define TIMETRAVEL_ItemUserWidget_generated_h

#define TimeTravel_Source_TimeTravel_ItemUserWidget_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetName(Z_Param_Name); \
		P_NATIVE_END; \
	}


#define TimeTravel_Source_TimeTravel_ItemUserWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetName(Z_Param_Name); \
		P_NATIVE_END; \
	}


#define TimeTravel_Source_TimeTravel_ItemUserWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemUserWidget(); \
	friend struct Z_Construct_UClass_UItemUserWidget_Statics; \
public: \
	DECLARE_CLASS(UItemUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeTravel"), NO_API) \
	DECLARE_SERIALIZER(UItemUserWidget)


#define TimeTravel_Source_TimeTravel_ItemUserWidget_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUItemUserWidget(); \
	friend struct Z_Construct_UClass_UItemUserWidget_Statics; \
public: \
	DECLARE_CLASS(UItemUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeTravel"), NO_API) \
	DECLARE_SERIALIZER(UItemUserWidget)


#define TimeTravel_Source_TimeTravel_ItemUserWidget_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemUserWidget(UItemUserWidget&&); \
	NO_API UItemUserWidget(const UItemUserWidget&); \
public:


#define TimeTravel_Source_TimeTravel_ItemUserWidget_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemUserWidget(UItemUserWidget&&); \
	NO_API UItemUserWidget(const UItemUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemUserWidget)


#define TimeTravel_Source_TimeTravel_ItemUserWidget_h_20_PRIVATE_PROPERTY_OFFSET
#define TimeTravel_Source_TimeTravel_ItemUserWidget_h_17_PROLOG
#define TimeTravel_Source_TimeTravel_ItemUserWidget_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TimeTravel_Source_TimeTravel_ItemUserWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	TimeTravel_Source_TimeTravel_ItemUserWidget_h_20_RPC_WRAPPERS \
	TimeTravel_Source_TimeTravel_ItemUserWidget_h_20_INCLASS \
	TimeTravel_Source_TimeTravel_ItemUserWidget_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TimeTravel_Source_TimeTravel_ItemUserWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TimeTravel_Source_TimeTravel_ItemUserWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	TimeTravel_Source_TimeTravel_ItemUserWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	TimeTravel_Source_TimeTravel_ItemUserWidget_h_20_INCLASS_NO_PURE_DECLS \
	TimeTravel_Source_TimeTravel_ItemUserWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TimeTravel_Source_TimeTravel_ItemUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
