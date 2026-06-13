// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy/BossCharacter.h"

#ifdef INTERIOR20260314_BossCharacter_generated_h
#error "BossCharacter.generated.h already included, missing '#pragma once' in BossCharacter.h"
#endif
#define INTERIOR20260314_BossCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABossCharacter ***********************************************************
#define FID_Interior20260314_5_7_Source_Interior20260314_Enemy_BossCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHealthPercent);


struct Z_Construct_UClass_ABossCharacter_Statics;
INTERIOR20260314_API UClass* Z_Construct_UClass_ABossCharacter_NoRegister();

#define FID_Interior20260314_5_7_Source_Interior20260314_Enemy_BossCharacter_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABossCharacter(); \
	friend struct ::Z_Construct_UClass_ABossCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERIOR20260314_API UClass* ::Z_Construct_UClass_ABossCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ABossCharacter, AEnemyCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Interior20260314"), Z_Construct_UClass_ABossCharacter_NoRegister) \
	DECLARE_SERIALIZER(ABossCharacter)


#define FID_Interior20260314_5_7_Source_Interior20260314_Enemy_BossCharacter_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABossCharacter(ABossCharacter&&) = delete; \
	ABossCharacter(const ABossCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABossCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABossCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABossCharacter) \
	NO_API virtual ~ABossCharacter();


#define FID_Interior20260314_5_7_Source_Interior20260314_Enemy_BossCharacter_h_23_PROLOG
#define FID_Interior20260314_5_7_Source_Interior20260314_Enemy_BossCharacter_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Interior20260314_5_7_Source_Interior20260314_Enemy_BossCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Interior20260314_5_7_Source_Interior20260314_Enemy_BossCharacter_h_26_INCLASS_NO_PURE_DECLS \
	FID_Interior20260314_5_7_Source_Interior20260314_Enemy_BossCharacter_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABossCharacter;

// ********** End Class ABossCharacter *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Interior20260314_5_7_Source_Interior20260314_Enemy_BossCharacter_h

// ********** Begin Enum EBossState ****************************************************************
#define FOREACH_ENUM_EBOSSSTATE(op) \
	op(EBossState::SelectingPattern) \
	op(EBossState::Pattern1_ToPos1) \
	op(EBossState::Pattern1_AtPos1) \
	op(EBossState::Pattern1_ToPos2) \
	op(EBossState::Pattern1_AtPos2) \
	op(EBossState::Pattern1_Return) \
	op(EBossState::Pattern2_PreCharge) \
	op(EBossState::Pattern2_Charge1) \
	op(EBossState::Pattern2_BetweenCharges) \
	op(EBossState::Pattern2_Charge2) \
	op(EBossState::Dead) 

enum class EBossState : uint8;
template<> struct TIsUEnumClass<EBossState> { enum { Value = true }; };
template<> INTERIOR20260314_NON_ATTRIBUTED_API UEnum* StaticEnum<EBossState>();
// ********** End Enum EBossState ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
