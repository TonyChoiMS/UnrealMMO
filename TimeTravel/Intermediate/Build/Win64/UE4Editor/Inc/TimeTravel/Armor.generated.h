// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TIMETRAVEL_Armor_generated_h
#error "Armor.generated.h already included, missing '#pragma once' in Armor.h"
#endif
#define TIMETRAVEL_Armor_generated_h

#define TimeTravel_Source_TimeTravel_Armor_h_12_RPC_WRAPPERS
#define TimeTravel_Source_TimeTravel_Armor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TimeTravel_Source_TimeTravel_Armor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArmor(); \
	friend struct Z_Construct_UClass_AArmor_Statics; \
public: \
	DECLARE_CLASS(AArmor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeTravel"), NO_API) \
	DECLARE_SERIALIZER(AArmor)


#define TimeTravel_Source_TimeTravel_Armor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAArmor(); \
	friend struct Z_Construct_UClass_AArmor_Statics; \
public: \
	DECLARE_CLASS(AArmor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeTravel"), NO_API) \
	DECLARE_SERIALIZER(AArmor)


#define TimeTravel_Source_TimeTravel_Armor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArmor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArmor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArmor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArmor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArmor(AArmor&&); \
	NO_API AArmor(const AArmor&); \
public:


#define TimeTravel_Source_TimeTravel_Armor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArmor(AArmor&&); \
	NO_API AArmor(const AArmor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArmor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArmor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArmor)


#define TimeTravel_Source_TimeTravel_Armor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ArmorMesh() { return STRUCT_OFFSET(AArmor, ArmorMesh); }


#define TimeTravel_Source_TimeTravel_Armor_h_9_PROLOG
#define TimeTravel_Source_TimeTravel_Armor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TimeTravel_Source_TimeTravel_Armor_h_12_PRIVATE_PROPERTY_OFFSET \
	TimeTravel_Source_TimeTravel_Armor_h_12_RPC_WRAPPERS \
	TimeTravel_Source_TimeTravel_Armor_h_12_INCLASS \
	TimeTravel_Source_TimeTravel_Armor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TimeTravel_Source_TimeTravel_Armor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TimeTravel_Source_TimeTravel_Armor_h_12_PRIVATE_PROPERTY_OFFSET \
	TimeTravel_Source_TimeTravel_Armor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TimeTravel_Source_TimeTravel_Armor_h_12_INCLASS_NO_PURE_DECLS \
	TimeTravel_Source_TimeTravel_Armor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TimeTravel_Source_TimeTravel_Armor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
