// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnemyManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEnemyManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
INTERIOR20260314_API UClass* Z_Construct_UClass_ABossCharacter_NoRegister();
INTERIOR20260314_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();
INTERIOR20260314_API UClass* Z_Construct_UClass_AEnemyManager();
INTERIOR20260314_API UClass* Z_Construct_UClass_AEnemyManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_Interior20260314();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEnemyManager Function OnEnemyDied ***************************************
struct Z_Construct_UFunction_AEnemyManager_OnEnemyDied_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Enemy/EnemyManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnEnemyDied constinit property declarations ***************************
// ********** End Function OnEnemyDied constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyManager_OnEnemyDied_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyManager, nullptr, "OnEnemyDied", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyManager_OnEnemyDied_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyManager_OnEnemyDied_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AEnemyManager_OnEnemyDied()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyManager_OnEnemyDied_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyManager::execOnEnemyDied)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnemyDied();
	P_NATIVE_END;
}
// ********** End Class AEnemyManager Function OnEnemyDied *****************************************

// ********** Begin Class AEnemyManager ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AEnemyManager;
UClass* AEnemyManager::GetPrivateStaticClass()
{
	using TClass = AEnemyManager;
	if (!Z_Registration_Info_UClass_AEnemyManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EnemyManager"),
			Z_Registration_Info_UClass_AEnemyManager.InnerSingleton,
			StaticRegisterNativesAEnemyManager,
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
	return Z_Registration_Info_UClass_AEnemyManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AEnemyManager_NoRegister()
{
	return AEnemyManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEnemyManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy/EnemyManager.h" },
		{ "ModuleRelativePath", "Enemy/EnemyManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyClass_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Enemy/EnemyManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BossClass_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Enemy/EnemyManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocations_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Enemy/EnemyManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemiesPerWave_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Enemy/EnemyManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalWaves_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Enemy/EnemyManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveDelay_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Enemy/EnemyManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWave_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Enemy/EnemyManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AliveEnemies_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Enemy/EnemyManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AEnemyManager constinit property declarations ****************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BossClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnLocations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EnemiesPerWave;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalWaves;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaveDelay;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentWave;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AliveEnemies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AEnemyManager constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnEnemyDied"), .Pointer = &AEnemyManager::execOnEnemyDied },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyManager_OnEnemyDied, "OnEnemyDied" }, // 407911797
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AEnemyManager_Statics

// ********** Begin Class AEnemyManager Property Definitions ***************************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyManager, EnemyClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AEnemyCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyClass_MetaData), NewProp_EnemyClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_BossClass = { "BossClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyManager, BossClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_ABossCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BossClass_MetaData), NewProp_BossClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_SpawnLocations_Inner = { "SpawnLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_SpawnLocations = { "SpawnLocations", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyManager, SpawnLocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocations_MetaData), NewProp_SpawnLocations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_EnemiesPerWave = { "EnemiesPerWave", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyManager, EnemiesPerWave), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemiesPerWave_MetaData), NewProp_EnemiesPerWave_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_TotalWaves = { "TotalWaves", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyManager, TotalWaves), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalWaves_MetaData), NewProp_TotalWaves_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_WaveDelay = { "WaveDelay", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyManager, WaveDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveDelay_MetaData), NewProp_WaveDelay_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_CurrentWave = { "CurrentWave", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyManager, CurrentWave), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWave_MetaData), NewProp_CurrentWave_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_AliveEnemies = { "AliveEnemies", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyManager, AliveEnemies), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AliveEnemies_MetaData), NewProp_AliveEnemies_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_EnemyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_BossClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_SpawnLocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_SpawnLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_EnemiesPerWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_TotalWaves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_WaveDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_CurrentWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_AliveEnemies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::PropPointers) < 2048);
// ********** End Class AEnemyManager Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_AEnemyManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Interior20260314,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyManager_Statics::ClassParams = {
	&AEnemyManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemyManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyManager_Statics::Class_MetaDataParams)
};
void AEnemyManager::StaticRegisterNativesAEnemyManager()
{
	UClass* Class = AEnemyManager::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AEnemyManager_Statics::Funcs));
}
UClass* Z_Construct_UClass_AEnemyManager()
{
	if (!Z_Registration_Info_UClass_AEnemyManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyManager.OuterSingleton, Z_Construct_UClass_AEnemyManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AEnemyManager);
AEnemyManager::~AEnemyManager() {}
// ********** End Class AEnemyManager **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyManager_h__Script_Interior20260314_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyManager, AEnemyManager::StaticClass, TEXT("AEnemyManager"), &Z_Registration_Info_UClass_AEnemyManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyManager), 1567299968U) },
	};
}; // Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyManager_h__Script_Interior20260314_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyManager_h__Script_Interior20260314_4061294415{
	TEXT("/Script/Interior20260314"),
	Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyManager_h__Script_Interior20260314_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Enemy_EnemyManager_h__Script_Interior20260314_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
