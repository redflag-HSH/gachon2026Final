// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bullet.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBullet() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
INTERIOR20260314_API UClass* Z_Construct_UClass_ABullet();
INTERIOR20260314_API UClass* Z_Construct_UClass_ABullet_NoRegister();
UPackage* Z_Construct_UPackage__Script_Interior20260314();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABullet Function OnHit ***************************************************
struct Z_Construct_UFunction_ABullet_OnHit_Statics
{
	struct Bullet_eventOnHit_Parms
	{
		UPrimitiveComponent* HitComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gameplay/Bullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnHit constinit property declarations *********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnHit constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnHit Property Definitions ********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABullet_OnHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComp_MetaData), NewProp_HitComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABullet_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABullet_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABullet_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABullet_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABullet_OnHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OnHit_Statics::NewProp_HitComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OnHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OnHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OnHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OnHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABullet_OnHit_Statics::PropPointers) < 2048);
// ********** End Function OnHit Property Definitions **********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABullet_OnHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABullet, nullptr, "OnHit", 	Z_Construct_UFunction_ABullet_OnHit_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ABullet_OnHit_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ABullet_OnHit_Statics::Bullet_eventOnHit_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABullet_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABullet_OnHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABullet_OnHit_Statics::Bullet_eventOnHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABullet_OnHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABullet_OnHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABullet::execOnHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class ABullet Function OnHit *****************************************************

// ********** Begin Class ABullet Function OnOverlapBegin ******************************************
struct Z_Construct_UFunction_ABullet_OnOverlapBegin_Statics
{
	struct Bullet_eventOnOverlapBegin_Parms
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
		{ "ModuleRelativePath", "Gameplay/Bullet.h" },
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

// ********** Begin Function OnOverlapBegin constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnOverlapBegin constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnOverlapBegin Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABullet_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABullet_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABullet_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABullet_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ABullet_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Bullet_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABullet_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Bullet_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ABullet_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABullet_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABullet_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OnOverlapBegin_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABullet_OnOverlapBegin_Statics::PropPointers) < 2048);
// ********** End Function OnOverlapBegin Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABullet_OnOverlapBegin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABullet, nullptr, "OnOverlapBegin", 	Z_Construct_UFunction_ABullet_OnOverlapBegin_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ABullet_OnOverlapBegin_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ABullet_OnOverlapBegin_Statics::Bullet_eventOnOverlapBegin_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABullet_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABullet_OnOverlapBegin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABullet_OnOverlapBegin_Statics::Bullet_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABullet_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABullet_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABullet::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class ABullet Function OnOverlapBegin ********************************************

// ********** Begin Class ABullet ******************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ABullet;
UClass* ABullet::GetPrivateStaticClass()
{
	using TClass = ABullet;
	if (!Z_Registration_Info_UClass_ABullet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Bullet"),
			Z_Registration_Info_UClass_ABullet.InnerSingleton,
			StaticRegisterNativesABullet,
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
	return Z_Registration_Info_UClass_ABullet.InnerSingleton;
}
UClass* Z_Construct_UClass_ABullet_NoRegister()
{
	return ABullet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABullet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Gameplay/Bullet.h" },
		{ "ModuleRelativePath", "Gameplay/Bullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSphere_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gameplay/Bullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gameplay/Bullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gameplay/Bullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Gameplay/Bullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Gameplay/Bullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifeSpanSeconds_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Gameplay/Bullet.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ABullet constinit property declarations **********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeSpanSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ABullet constinit property declarations ************************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnHit"), .Pointer = &ABullet::execOnHit },
		{ .NameUTF8 = UTF8TEXT("OnOverlapBegin"), .Pointer = &ABullet::execOnOverlapBegin },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABullet_OnHit, "OnHit" }, // 2730825860
		{ &Z_Construct_UFunction_ABullet_OnOverlapBegin, "OnOverlapBegin" }, // 3798238939
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABullet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ABullet_Statics

// ********** Begin Class ABullet Property Definitions *********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_CollisionSphere = { "CollisionSphere", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullet, CollisionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSphere_MetaData), NewProp_CollisionSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_BulletMesh = { "BulletMesh", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullet, BulletMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletMesh_MetaData), NewProp_BulletMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullet, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovement_MetaData), NewProp_ProjectileMovement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullet, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullet, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_LifeSpanSeconds = { "LifeSpanSeconds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullet, LifeSpanSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifeSpanSeconds_MetaData), NewProp_LifeSpanSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABullet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_CollisionSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_BulletMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_ProjectileMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_LifeSpanSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::PropPointers) < 2048);
// ********** End Class ABullet Property Definitions ***********************************************
UObject* (*const Z_Construct_UClass_ABullet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Interior20260314,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABullet_Statics::ClassParams = {
	&ABullet::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABullet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::Class_MetaDataParams), Z_Construct_UClass_ABullet_Statics::Class_MetaDataParams)
};
void ABullet::StaticRegisterNativesABullet()
{
	UClass* Class = ABullet::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ABullet_Statics::Funcs));
}
UClass* Z_Construct_UClass_ABullet()
{
	if (!Z_Registration_Info_UClass_ABullet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABullet.OuterSingleton, Z_Construct_UClass_ABullet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABullet.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ABullet);
ABullet::~ABullet() {}
// ********** End Class ABullet ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Gameplay_Bullet_h__Script_Interior20260314_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABullet, ABullet::StaticClass, TEXT("ABullet"), &Z_Registration_Info_UClass_ABullet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABullet), 4158267477U) },
	};
}; // Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Gameplay_Bullet_h__Script_Interior20260314_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Gameplay_Bullet_h__Script_Interior20260314_1222781443{
	TEXT("/Script/Interior20260314"),
	Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Gameplay_Bullet_h__Script_Interior20260314_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Gameplay_Bullet_h__Script_Interior20260314_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
