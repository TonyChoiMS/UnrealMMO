// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TIMETRAVEL_TimeTravelSaveGame_generated_h
#error "TimeTravelSaveGame.generated.h already included, missing '#pragma once' in TimeTravelSaveGame.h"
#endif
#define TIMETRAVEL_TimeTravelSaveGame_generated_h

#define TimeTravel_Source_TimeTravel_TimeTravelSaveGame_h_15_RPC_WRAPPERS
#define TimeTravel_Source_TimeTravel_TimeTravelSaveGame_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TimeTravel_Source_TimeTravel_TimeTravelSaveGame_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimeTravelSaveGame(); \
	friend struct Z_Construct_UClass_UTimeTravelSaveGame_Statics; \
public: \
	DECLARE_CLASS(UTimeTravelSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeTravel"), NO_API) \
	DECLARE_SERIALIZER(UTimeTravelSaveGame)


#define TimeTravel_Source_TimeTravel_TimeTravelSaveGame_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTimeTravelSaveGame(); \
	friend struct Z_Construct_UClass_UTimeTravelSaveGame_Statics; \
public: \
	DECLARE_CLASS(UTimeTravelSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeTravel"), NO_API) \
	DECLARE_SERIALIZER(UTimeTravelSaveGame)


#define TimeTravel_Source_TimeTravel_TimeTravelSaveGame_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimeTravelSaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimeTravelSaveGame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimeTravelSaveGame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeTravelSaveGame); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTimeTravelSaveGame(UTimeTravelSaveGame&&); \
	NO_API UTimeTravelSaveGame(const UTimeTravelSaveGame&); \
public:


#define TimeTravel_Source_TimeTravel_TimeTravelSaveGame_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimeTravelSaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTimeTravelSaveGame(UTimeTravelSaveGame&&); \
	NO_API UTimeTravelSaveGame(const UTimeTravelSaveGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimeTravelSaveGame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeTravelSaveGame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimeTravelSaveGame)


#define TimeTravel_Source_TimeTravel_TimeTravelSaveGame_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TimeTravelData() { return STRUCT_OFFSET(UTimeTravelSaveGame, TimeTravelData); }


#define TimeTravel_Source_TimeTravel_TimeTravelSaveGame_h_12_PROLOG
#define TimeTravel_Source_TimeTravel_TimeTravelSaveGame_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TimeTravel_Source_TimeTravel_TimeTravelSaveGame_h_15_PRIVATE_PROPERTY_OFFSET \
	TimeTravel_Source_TimeTravel_TimeTravelSaveGame_h_15_RPC_WRAPPERS \
	TimeTravel_Source_TimeTravel_TimeTravelSaveGame_h_15_INCLASS \
	TimeTravel_Source_TimeTravel_TimeTravelSaveGame_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TimeTravel_Source_TimeTravel_TimeTravelSaveGame_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TimeTravel_Source_TimeTravel_TimeTravelSaveGame_h_15_PRIVATE_PROPERTY_OFFSET \
	TimeTravel_Source_TimeTravel_TimeTravelSaveGame_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TimeTravel_Source_TimeTravel_TimeTravelSaveGame_h_15_INCLASS_NO_PURE_DECLS \
	TimeTravel_Source_TimeTravel_TimeTravelSaveGame_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TimeTravel_Source_TimeTravel_TimeTravelSaveGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
