// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnemyCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEnemyCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
INTERIOR20260314_API UClass* Z_Construct_UClass_AEnemyCharacter();
INTERIOR20260314_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();
INTERIOR20260314_API UClass* Z_Construct_UClass_AItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Interior20260314();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEnemyCharacter Function TakeDamage_Custom *******************************
struct Z_Construct_UFunction_AEnemyCharacter_TakeDamage_Custom_Statics
{
	struct EnemyCharacter_eventTakeDamage_Custom_Parms
	{
		float DamageAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Enemy/EnemyCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function TakeDamage_Custom constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TakeDamage_Custom constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TakeDamage_Custom Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEnemyCharacter_TakeDamage_Custom_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyCharacter_eventTakeDamage_Custom_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyCharacter_TakeDamage_Custom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_TakeDamage_Custom_Statics::NewProp_DamageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_TakeDamage_Custom_Statics::PropPointers) < 2048);
// ********** End Function TakeDamage_Custom Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_TakeDamage_Custom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter, nullptr, "TakeDamage_Custom", 	Z_Construct_UFunction_AEnemyCharacter_TakeDamage_Custom_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_TakeDamage_Custom_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AEnemyCharacter_TakeDamage_Custom_Statics::EnemyCharacter_eventTakeDamage_Custom_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_TakeDamage_Custom_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyCharacter_TakeDamage_Custom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyCharacter_TakeDamage_Custom_Statics::EnemyCharacter_eventTakeDamage_Custom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyCharacter_TakeDamage_Custom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_TakeDamage_Custom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyCharacter::execTakeDamage_Custom)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeDamage_Custom(Z_Param_DamageAmount);
	P_NATIVE_END;
}
// ********** End Class AEnemyCharacter Function TakeDamage_Custom *********************************

// ********** Begin Class AEnemyCharacter **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AEnemyCharacter;
UClass* AEnemyCharacter::GetPrivateStaticClass()
{
	using TClass = AEnemyCharacter;
	if (!Z_Registration_Info_UClass_AEnemyCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EnemyCharacter"),
			Z_Registration_Info_UClass_AEnemyCharacter.InnerSingleton,
			StaticRegisterNativesAEnemyCharacter,
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
	return Z_Registration_Info_UClass_AEnemyCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister()
{
	return AEnemyCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEnemyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy/EnemyCharacter.h" },
		{ "ModuleRelativePath", "Enemy/EnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionRange_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Enemy/EnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChaseSpeed_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Enemy/EnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerTarget_MetaData[] = {
		{ "ModuleRelativePath", "Enemy/EnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropItemClass_MetaData[] = {
		{ "Category", "Drop" },
		{ "ModuleRelativePath", "Enemy/EnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropChance_MetaData[] = {
		{ "Category", "Drop" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Enemy/EnemyCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AEnemyCharacter constinit property declarations **************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectionRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChaseSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerTarget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DropItemClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DropChance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AEnemyCharacter constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("TakeDamage_Custom"), .Pointer = &AEnemyCharacter::execTakeDamage_Custom },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyCharacter_TakeDamage_Custom, "TakeDamage_Custom" }, // 452671624
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AEnemyCharacter_Statics

// ********** Begin Class AEnemyCharacter Property Definitions *************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DetectionRange = { "DetectionRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter, DetectionRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionRange_MetaData), NewProp_DetectionRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_ChaseSpeed = { "ChaseSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter, ChaseSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChaseSpeed_MetaData), NewProp_ChaseSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_PlayerTarget = { "PlayerTarget", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter, PlayerTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerTarget_MetaData), NewProp_PlayerTarget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DropItemClass = { "DropItemClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter, DropItemClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropItemClass_MetaData), NewProp_DropItemClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DropChance = { "DropChance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter, DropChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropChance_MetaData), NewProp_DropChance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DetectionRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_ChaseSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_PlayerTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DropItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DropChance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers) < 2048);
// ********** End Class AEnemyCharacter Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_AEnemyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Interior20260314,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyCharacter_Statics::ClassParams = {
	&AEnemyCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams)
};
void AEnemyCharacter::StaticRegisterNativesAEnemyCharacter()
{
	UClass* Class = AEnemyCharacter::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AEnemyCharacter_Statics::Funcs));
}
UClass* Z_Construct_UClass_AEnemyCharacter()
{
	if (!Z_Registration_Info_UClass_AEnemyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyCharacter.OuterSingleton, Z_Construct_UClass_AEnemyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AEnemyCharacter);
AEnemyCharacter::~AEnemyCharacter() {}
// ********** End Class AEnemyCharacter ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyCharacter_h__Script_Interior20260314_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyCharacter, AEnemyCharacter::StaticClass, TEXT("AEnemyCharacter"), &Z_Registration_Info_UClass_AEnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyCharacter), 1972018730U) },
	};
}; // Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyCharacter_h__Script_Interior20260314_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyCharacter_h__Script_Interior20260314_3496847838{
	TEXT("/Script/Interior20260314"),
	Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyCharacter_h__Script_Interior20260314_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyCharacter_h__Script_Interior20260314_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
