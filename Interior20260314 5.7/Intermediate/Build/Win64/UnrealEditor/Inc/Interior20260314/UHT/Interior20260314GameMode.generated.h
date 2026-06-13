// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMode/Interior20260314GameMode.h"

#ifdef INTERIOR20260314_Interior20260314GameMode_generated_h
#error "Interior20260314GameMode.generated.h already included, missing '#pragma once' in Interior20260314GameMode.h"
#endif
#define INTERIOR20260314_Interior20260314GameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AInterior20260314GameMode ************************************************
#define FID_Interior20260314_5_7_Source_Interior20260314_GameMode_Interior20260314GameMode_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPlayerDied); \
	DECLARE_FUNCTION(execOnBossKilled); \
	DECLARE_FUNCTION(execOnEnemyKilled);


struct Z_Construct_UClass_AInterior20260314GameMode_Statics;
INTERIOR20260314_API UClass* Z_Construct_UClass_AInterior20260314GameMode_NoRegister();

#define FID_Interior20260314_5_7_Source_Interior20260314_GameMode_Interior20260314GameMode_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInterior20260314GameMode(); \
	friend struct ::Z_Construct_UClass_AInterior20260314GameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERIOR20260314_API UClass* ::Z_Construct_UClass_AInterior20260314GameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AInterior20260314GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Interior20260314"), Z_Construct_UClass_AInterior20260314GameMode_NoRegister) \
	DECLARE_SERIALIZER(AInterior20260314GameMode)


#define FID_Interior20260314_5_7_Source_Interior20260314_GameMode_Interior20260314GameMode_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AInterior20260314GameMode(AInterior20260314GameMode&&) = delete; \
	AInterior20260314GameMode(const AInterior20260314GameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInterior20260314GameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInterior20260314GameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInterior20260314GameMode) \
	NO_API virtual ~AInterior20260314GameMode();


#define FID_Interior20260314_5_7_Source_Interior20260314_GameMode_Interior20260314GameMode_h_7_PROLOG
#define FID_Interior20260314_5_7_Source_Interior20260314_GameMode_Interior20260314GameMode_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Interior20260314_5_7_Source_Interior20260314_GameMode_Interior20260314GameMode_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Interior20260314_5_7_Source_Interior20260314_GameMode_Interior20260314GameMode_h_10_INCLASS_NO_PURE_DECLS \
	FID_Interior20260314_5_7_Source_Interior20260314_GameMode_Interior20260314GameMode_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AInterior20260314GameMode;

// ********** End Class AInterior20260314GameMode **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Interior20260314_5_7_Source_Interior20260314_GameMode_Interior20260314GameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
