// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerCharacter.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePlayerCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
INTERIOR20260314_API UClass* Z_Construct_UClass_ABullet_NoRegister();
INTERIOR20260314_API UClass* Z_Construct_UClass_APlayerCharacter();
INTERIOR20260314_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Interior20260314();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlayerCharacter Function AddBullet **************************************
struct Z_Construct_UFunction_APlayerCharacter_AddBullet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddBullet constinit property declarations *****************************
// ********** End Function AddBullet constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_AddBullet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "AddBullet", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_AddBullet_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_AddBullet_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlayerCharacter_AddBullet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_AddBullet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execAddBullet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddBullet();
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function AddBullet ****************************************

// ********** Begin Class APlayerCharacter Function Fire *******************************************
struct Z_Construct_UFunction_APlayerCharacter_Fire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Fire constinit property declarations **********************************
// ********** End Function Fire constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Fire_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Fire", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Fire_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlayerCharacter_Fire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Fire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fire();
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function Fire *********************************************

// ********** Begin Class APlayerCharacter Function OnEnemyOverlap *********************************
struct Z_Construct_UFunction_APlayerCharacter_OnEnemyOverlap_Statics
{
	struct PlayerCharacter_eventOnEnemyOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnEnemyOverlap constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnEnemyOverlap constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnEnemyOverlap Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_OnEnemyOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnEnemyOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_OnEnemyOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnEnemyOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_OnEnemyOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnEnemyOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerCharacter_OnEnemyOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnEnemyOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerCharacter_OnEnemyOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((PlayerCharacter_eventOnEnemyOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCharacter_OnEnemyOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerCharacter_eventOnEnemyOverlap_Parms), &Z_Construct_UFunction_APlayerCharacter_OnEnemyOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCharacter_OnEnemyOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnEnemyOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_OnEnemyOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnEnemyOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnEnemyOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnEnemyOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnEnemyOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnEnemyOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnEnemyOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnEnemyOverlap_Statics::PropPointers) < 2048);
// ********** End Function OnEnemyOverlap Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_OnEnemyOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "OnEnemyOverlap", 	Z_Construct_UFunction_APlayerCharacter_OnEnemyOverlap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnEnemyOverlap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APlayerCharacter_OnEnemyOverlap_Statics::PlayerCharacter_eventOnEnemyOverlap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnEnemyOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_OnEnemyOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_OnEnemyOverlap_Statics::PlayerCharacter_eventOnEnemyOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_OnEnemyOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_OnEnemyOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execOnEnemyOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnemyOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function OnEnemyOverlap ***********************************

// ********** Begin Class APlayerCharacter *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APlayerCharacter;
UClass* APlayerCharacter::GetPrivateStaticClass()
{
	using TClass = APlayerCharacter;
	if (!Z_Registration_Info_UClass_APlayerCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PlayerCharacter"),
			Z_Registration_Info_UClass_APlayerCharacter.InnerSingleton,
			StaticRegisterNativesAPlayerCharacter,
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
	return Z_Registration_Info_UClass_APlayerCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_APlayerCharacter_NoRegister()
{
	return APlayerCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/PlayerCharacter.h" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletClass_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireCooldown_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletSpread_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvincibilityDuration_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class APlayerCharacter constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BulletClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletSpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InvincibilityDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class APlayerCharacter constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddBullet"), .Pointer = &APlayerCharacter::execAddBullet },
		{ .NameUTF8 = UTF8TEXT("Fire"), .Pointer = &APlayerCharacter::execFire },
		{ .NameUTF8 = UTF8TEXT("OnEnemyOverlap"), .Pointer = &APlayerCharacter::execOnEnemyOverlap },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerCharacter_AddBullet, "AddBullet" }, // 1794685957
		{ &Z_Construct_UFunction_APlayerCharacter_Fire, "Fire" }, // 2865965728
		{ &Z_Construct_UFunction_APlayerCharacter_OnEnemyOverlap, "OnEnemyOverlap" }, // 739378330
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APlayerCharacter_Statics

// ********** Begin Class APlayerCharacter Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CapsuleComp = { "CapsuleComp", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, CapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleComp_MetaData), NewProp_CapsuleComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, BulletClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_ABullet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletClass_MetaData), NewProp_BulletClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_FireCooldown = { "FireCooldown", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, FireCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireCooldown_MetaData), NewProp_FireCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_BulletSpread = { "BulletSpread", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, BulletSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletSpread_MetaData), NewProp_BulletSpread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_InvincibilityDuration = { "InvincibilityDuration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, InvincibilityDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvincibilityDuration_MetaData), NewProp_InvincibilityDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CapsuleComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_BulletClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_FireCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_BulletSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_InvincibilityDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers) < 2048);
// ********** End Class APlayerCharacter Property Definitions **************************************
UObject* (*const Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Interior20260314,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacter_Statics::ClassParams = {
	&APlayerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayerCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams)
};
void APlayerCharacter::StaticRegisterNativesAPlayerCharacter()
{
	UClass* Class = APlayerCharacter::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_APlayerCharacter_Statics::Funcs));
}
UClass* Z_Construct_UClass_APlayerCharacter()
{
	if (!Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton, Z_Construct_UClass_APlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APlayerCharacter);
APlayerCharacter::~APlayerCharacter() {}
// ********** End Class APlayerCharacter ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Player_PlayerCharacter_h__Script_Interior20260314_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharacter, APlayerCharacter::StaticClass, TEXT("APlayerCharacter"), &Z_Registration_Info_UClass_APlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacter), 3746290778U) },
	};
}; // Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Player_PlayerCharacter_h__Script_Interior20260314_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Player_PlayerCharacter_h__Script_Interior20260314_1503504119{
	TEXT("/Script/Interior20260314"),
	Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Player_PlayerCharacter_h__Script_Interior20260314_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Player_PlayerCharacter_h__Script_Interior20260314_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
