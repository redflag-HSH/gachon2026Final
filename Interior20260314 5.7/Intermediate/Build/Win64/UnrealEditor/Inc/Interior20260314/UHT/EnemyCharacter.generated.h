// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy/EnemyCharacter.h"

#ifdef INTERIOR20260314_EnemyCharacter_generated_h
#error "EnemyCharacter.generated.h already included, missing '#pragma once' in EnemyCharacter.h"
#endif
#define INTERIOR20260314_EnemyCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AEnemyCharacter **********************************************************
#define FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyCharacter_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTakeDamage_Custom);


struct Z_Construct_UClass_AEnemyCharacter_Statics;
INTERIOR20260314_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();

#define FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyCharacter_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend struct ::Z_Construct_UClass_AEnemyCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERIOR20260314_API UClass* ::Z_Construct_UClass_AEnemyCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AEnemyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Interior20260314"), Z_Construct_UClass_AEnemyCharacter_NoRegister) \
	DECLARE_SERIALIZER(AEnemyCharacter)


#define FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyCharacter_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEnemyCharacter(AEnemyCharacter&&) = delete; \
	AEnemyCharacter(const AEnemyCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyCharacter) \
	NO_API virtual ~AEnemyCharacter();


#define FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyCharacter_h_8_PROLOG
#define FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyCharacter_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyCharacter_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyCharacter_h_11_INCLASS_NO_PURE_DECLS \
	FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyCharacter_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEnemyCharacter;

// ********** End Class AEnemyCharacter ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
