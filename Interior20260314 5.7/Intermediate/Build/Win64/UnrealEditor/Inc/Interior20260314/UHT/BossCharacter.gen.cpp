// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BossCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBossCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
INTERIOR20260314_API UClass* Z_Construct_UClass_ABossCharacter();
INTERIOR20260314_API UClass* Z_Construct_UClass_ABossCharacter_NoRegister();
INTERIOR20260314_API UClass* Z_Construct_UClass_AEnemyCharacter();
INTERIOR20260314_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();
INTERIOR20260314_API UEnum* Z_Construct_UEnum_Interior20260314_EBossState();
UPackage* Z_Construct_UPackage__Script_Interior20260314();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EBossState ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBossState;
static UEnum* EBossState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBossState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBossState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Interior20260314_EBossState, (UObject*)Z_Construct_UPackage__Script_Interior20260314(), TEXT("EBossState"));
	}
	return Z_Registration_Info_UEnum_EBossState.OuterSingleton;
}
template<> INTERIOR20260314_NON_ATTRIBUTED_API UEnum* StaticEnum<EBossState>()
{
	return EBossState_StaticEnum();
}
struct Z_Construct_UEnum_Interior20260314_EBossState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dead.Name", "EBossState::Dead" },
		{ "ModuleRelativePath", "Enemy/BossCharacter.h" },
		{ "Pattern1_AtPos1.Name", "EBossState::Pattern1_AtPos1" },
		{ "Pattern1_AtPos2.Name", "EBossState::Pattern1_AtPos2" },
		{ "Pattern1_Return.Name", "EBossState::Pattern1_Return" },
		{ "Pattern1_ToPos1.Name", "EBossState::Pattern1_ToPos1" },
		{ "Pattern1_ToPos2.Name", "EBossState::Pattern1_ToPos2" },
		{ "Pattern2_BetweenCharges.Name", "EBossState::Pattern2_BetweenCharges" },
		{ "Pattern2_Charge1.Name", "EBossState::Pattern2_Charge1" },
		{ "Pattern2_Charge2.Name", "EBossState::Pattern2_Charge2" },
		{ "Pattern2_PreCharge.Name", "EBossState::Pattern2_PreCharge" },
		{ "SelectingPattern.Name", "EBossState::SelectingPattern" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBossState::SelectingPattern", (int64)EBossState::SelectingPattern },
		{ "EBossState::Pattern1_ToPos1", (int64)EBossState::Pattern1_ToPos1 },
		{ "EBossState::Pattern1_AtPos1", (int64)EBossState::Pattern1_AtPos1 },
		{ "EBossState::Pattern1_ToPos2", (int64)EBossState::Pattern1_ToPos2 },
		{ "EBossState::Pattern1_AtPos2", (int64)EBossState::Pattern1_AtPos2 },
		{ "EBossState::Pattern1_Return", (int64)EBossState::Pattern1_Return },
		{ "EBossState::Pattern2_PreCharge", (int64)EBossState::Pattern2_PreCharge },
		{ "EBossState::Pattern2_Charge1", (int64)EBossState::Pattern2_Charge1 },
		{ "EBossState::Pattern2_BetweenCharges", (int64)EBossState::Pattern2_BetweenCharges },
		{ "EBossState::Pattern2_Charge2", (int64)EBossState::Pattern2_Charge2 },
		{ "EBossState::Dead", (int64)EBossState::Dead },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_Interior20260314_EBossState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Interior20260314_EBossState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Interior20260314,
	nullptr,
	"EBossState",
	"EBossState",
	Z_Construct_UEnum_Interior20260314_EBossState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Interior20260314_EBossState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Interior20260314_EBossState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Interior20260314_EBossState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Interior20260314_EBossState()
{
	if (!Z_Registration_Info_UEnum_EBossState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBossState.InnerSingleton, Z_Construct_UEnum_Interior20260314_EBossState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBossState.InnerSingleton;
}
// ********** End Enum EBossState ******************************************************************

// ********** Begin Class ABossCharacter Function GetHealthPercent *********************************
struct Z_Construct_UFunction_ABossCharacter_GetHealthPercent_Statics
{
	struct BossCharacter_eventGetHealthPercent_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Boss|Stats" },
		{ "ModuleRelativePath", "Enemy/BossCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHealthPercent constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHealthPercent constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHealthPercent Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABossCharacter_GetHealthPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BossCharacter_eventGetHealthPercent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABossCharacter_GetHealthPercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABossCharacter_GetHealthPercent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_GetHealthPercent_Statics::PropPointers) < 2048);
// ********** End Function GetHealthPercent Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABossCharacter_GetHealthPercent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABossCharacter, nullptr, "GetHealthPercent", 	Z_Construct_UFunction_ABossCharacter_GetHealthPercent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_GetHealthPercent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ABossCharacter_GetHealthPercent_Statics::BossCharacter_eventGetHealthPercent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_GetHealthPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABossCharacter_GetHealthPercent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABossCharacter_GetHealthPercent_Statics::BossCharacter_eventGetHealthPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABossCharacter_GetHealthPercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABossCharacter_GetHealthPercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABossCharacter::execGetHealthPercent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealthPercent();
	P_NATIVE_END;
}
// ********** End Class ABossCharacter Function GetHealthPercent ***********************************

// ********** Begin Class ABossCharacter ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ABossCharacter;
UClass* ABossCharacter::GetPrivateStaticClass()
{
	using TClass = ABossCharacter;
	if (!Z_Registration_Info_UClass_ABossCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BossCharacter"),
			Z_Registration_Info_UClass_ABossCharacter.InnerSingleton,
			StaticRegisterNativesABossCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ABossCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ABossCharacter_NoRegister()
{
	return ABossCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABossCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy/BossCharacter.h" },
		{ "ModuleRelativePath", "Enemy/BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pattern1Offset1_MetaData[] = {
		{ "Category", "Boss|Pattern1" },
		{ "ModuleRelativePath", "Enemy/BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pattern1Offset2_MetaData[] = {
		{ "Category", "Boss|Pattern1" },
		{ "ModuleRelativePath", "Enemy/BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnEnemyClass_MetaData[] = {
		{ "Category", "Boss|Pattern1" },
		{ "ModuleRelativePath", "Enemy/BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MonsterSideOffset_MetaData[] = {
		{ "Category", "Boss|Pattern1" },
		{ "ModuleRelativePath", "Enemy/BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPauseDelay_MetaData[] = {
		{ "Category", "Boss|Pattern1" },
		{ "ModuleRelativePath", "Enemy/BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeSpeed_MetaData[] = {
		{ "Category", "Boss|Pattern2" },
		{ "ModuleRelativePath", "Enemy/BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeDuration_MetaData[] = {
		{ "Category", "Boss|Pattern2" },
		{ "ModuleRelativePath", "Enemy/BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreChargeDelay_MetaData[] = {
		{ "Category", "Boss|Pattern2" },
		{ "ModuleRelativePath", "Enemy/BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BetweenChargesDelay_MetaData[] = {
		{ "Category", "Boss|Pattern2" },
		{ "ModuleRelativePath", "Enemy/BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Boss|Stats" },
		{ "ModuleRelativePath", "Enemy/BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Boss|Stats" },
		{ "ModuleRelativePath", "Enemy/BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatternSelectDuration_MetaData[] = {
		{ "Category", "Boss" },
		{ "ModuleRelativePath", "Enemy/BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigationSpeed_MetaData[] = {
		{ "Category", "Boss" },
		{ "ModuleRelativePath", "Enemy/BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrivalThreshold_MetaData[] = {
		{ "Category", "Boss" },
		{ "ModuleRelativePath", "Enemy/BossCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ABossCharacter constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pattern1Offset1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pattern1Offset2;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SpawnEnemyClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MonsterSideOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnPauseDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChargeSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChargeDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreChargeDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BetweenChargesDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PatternSelectDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NavigationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArrivalThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ABossCharacter constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetHealthPercent"), .Pointer = &ABossCharacter::execGetHealthPercent },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABossCharacter_GetHealthPercent, "GetHealthPercent" }, // 2700489133
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABossCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ABossCharacter_Statics

// ********** Begin Class ABossCharacter Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_Pattern1Offset1 = { "Pattern1Offset1", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, Pattern1Offset1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pattern1Offset1_MetaData), NewProp_Pattern1Offset1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_Pattern1Offset2 = { "Pattern1Offset2", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, Pattern1Offset2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pattern1Offset2_MetaData), NewProp_Pattern1Offset2_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_SpawnEnemyClass = { "SpawnEnemyClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, SpawnEnemyClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AEnemyCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnEnemyClass_MetaData), NewProp_SpawnEnemyClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_MonsterSideOffset = { "MonsterSideOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, MonsterSideOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MonsterSideOffset_MetaData), NewProp_MonsterSideOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_SpawnPauseDelay = { "SpawnPauseDelay", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, SpawnPauseDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnPauseDelay_MetaData), NewProp_SpawnPauseDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_ChargeSpeed = { "ChargeSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, ChargeSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeSpeed_MetaData), NewProp_ChargeSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_ChargeDuration = { "ChargeDuration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, ChargeDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeDuration_MetaData), NewProp_ChargeDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_PreChargeDelay = { "PreChargeDelay", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, PreChargeDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreChargeDelay_MetaData), NewProp_PreChargeDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_BetweenChargesDelay = { "BetweenChargesDelay", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, BetweenChargesDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BetweenChargesDelay_MetaData), NewProp_BetweenChargesDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_PatternSelectDuration = { "PatternSelectDuration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, PatternSelectDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatternSelectDuration_MetaData), NewProp_PatternSelectDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_NavigationSpeed = { "NavigationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, NavigationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigationSpeed_MetaData), NewProp_NavigationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_ArrivalThreshold = { "ArrivalThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, ArrivalThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrivalThreshold_MetaData), NewProp_ArrivalThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABossCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_Pattern1Offset1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_Pattern1Offset2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_SpawnEnemyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_MonsterSideOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_SpawnPauseDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_ChargeSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_ChargeDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_PreChargeDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_BetweenChargesDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_PatternSelectDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_NavigationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_ArrivalThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABossCharacter_Statics::PropPointers) < 2048);
// ********** End Class ABossCharacter Property Definitions ****************************************
UObject* (*const Z_Construct_UClass_ABossCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemyCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Interior20260314,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABossCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABossCharacter_Statics::ClassParams = {
	&ABossCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABossCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABossCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABossCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABossCharacter_Statics::Class_MetaDataParams)
};
void ABossCharacter::StaticRegisterNativesABossCharacter()
{
	UClass* Class = ABossCharacter::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ABossCharacter_Statics::Funcs));
}
UClass* Z_Construct_UClass_ABossCharacter()
{
	if (!Z_Registration_Info_UClass_ABossCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABossCharacter.OuterSingleton, Z_Construct_UClass_ABossCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABossCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ABossCharacter);
ABossCharacter::~ABossCharacter() {}
// ********** End Class ABossCharacter *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Enemy_BossCharacter_h__Script_Interior20260314_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBossState_StaticEnum, TEXT("EBossState"), &Z_Registration_Info_UEnum_EBossState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3632970887U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABossCharacter, ABossCharacter::StaticClass, TEXT("ABossCharacter"), &Z_Registration_Info_UClass_ABossCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABossCharacter), 2835370094U) },
	};
}; // Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Enemy_BossCharacter_h__Script_Interior20260314_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Enemy_BossCharacter_h__Script_Interior20260314_914208823{
	TEXT("/Script/Interior20260314"),
	Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Enemy_BossCharacter_h__Script_Interior20260314_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Enemy_BossCharacter_h__Script_Interior20260314_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Enemy_BossCharacter_h__Script_Interior20260314_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Enemy_BossCharacter_h__Script_Interior20260314_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
