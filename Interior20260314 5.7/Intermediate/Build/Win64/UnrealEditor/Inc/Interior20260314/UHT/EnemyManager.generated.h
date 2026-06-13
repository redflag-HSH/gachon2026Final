// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy/EnemyManager.h"

#ifdef INTERIOR20260314_EnemyManager_generated_h
#error "EnemyManager.generated.h already included, missing '#pragma once' in EnemyManager.h"
#endif
#define INTERIOR20260314_EnemyManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AEnemyManager ************************************************************
#define FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnEnemyDied);


struct Z_Construct_UClass_AEnemyManager_Statics;
INTERIOR20260314_API UClass* Z_Construct_UClass_AEnemyManager_NoRegister();

#define FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyManager(); \
	friend struct ::Z_Construct_UClass_AEnemyManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERIOR20260314_API UClass* ::Z_Construct_UClass_AEnemyManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AEnemyManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Interior20260314"), Z_Construct_UClass_AEnemyManager_NoRegister) \
	DECLARE_SERIALIZER(AEnemyManager)


#define FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyManager_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEnemyManager(AEnemyManager&&) = delete; \
	AEnemyManager(const AEnemyManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyManager) \
	NO_API virtual ~AEnemyManager();


#define FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyManager_h_10_PROLOG
#define FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyManager_h_13_INCLASS_NO_PURE_DECLS \
	FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEnemyManager;

// ********** End Class AEnemyManager **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
