// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TIMETRAVEL_PickupActor_generated_h
#error "PickupActor.generated.h already included, missing '#pragma once' in PickupActor.h"
#endif
#define TIMETRAVEL_PickupActor_generated_h

#define TimeTravel_Source_TimeTravel_PickupActor_h_12_RPC_WRAPPERS
#define TimeTravel_Source_TimeTravel_PickupActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TimeTravel_Source_TimeTravel_PickupActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickupActor(); \
	friend struct Z_Construct_UClass_APickupActor_Statics; \
public: \
	DECLARE_CLASS(APickupActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeTravel"), NO_API) \
	DECLARE_SERIALIZER(APickupActor)


#define TimeTravel_Source_TimeTravel_PickupActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPickupActor(); \
	friend struct Z_Construct_UClass_APickupActor_Statics; \
public: \
	DECLARE_CLASS(APickupActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeTravel"), NO_API) \
	DECLARE_SERIALIZER(APickupActor)


#define TimeTravel_Source_TimeTravel_PickupActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickupActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickupActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupActor(APickupActor&&); \
	NO_API APickupActor(const APickupActor&); \
public:


#define TimeTravel_Source_TimeTravel_PickupActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupActor(APickupActor&&); \
	NO_API APickupActor(const APickupActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickupActor)


#define TimeTravel_Source_TimeTravel_PickupActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(APickupActor, MeshComp); } \
	FORCEINLINE static uint32 __PPO__BoxCollisionComp() { return STRUCT_OFFSET(APickupActor, BoxCollisionComp); }


#define TimeTravel_Source_TimeTravel_PickupActor_h_9_PROLOG
#define TimeTravel_Source_TimeTravel_PickupActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TimeTravel_Source_TimeTravel_PickupActor_h_12_PRIVATE_PROPERTY_OFFSET \
	TimeTravel_Source_TimeTravel_PickupActor_h_12_RPC_WRAPPERS \
	TimeTravel_Source_TimeTravel_PickupActor_h_12_INCLASS \
	TimeTravel_Source_TimeTravel_PickupActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TimeTravel_Source_TimeTravel_PickupActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TimeTravel_Source_TimeTravel_PickupActor_h_12_PRIVATE_PROPERTY_OFFSET \
	TimeTravel_Source_TimeTravel_PickupActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TimeTravel_Source_TimeTravel_PickupActor_h_12_INCLASS_NO_PURE_DECLS \
	TimeTravel_Source_TimeTravel_PickupActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TimeTravel_Source_TimeTravel_PickupActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
