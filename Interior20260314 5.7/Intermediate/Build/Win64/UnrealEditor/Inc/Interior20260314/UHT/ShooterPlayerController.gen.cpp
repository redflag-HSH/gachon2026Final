// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeShooterPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
INTERIOR20260314_API UClass* Z_Construct_UClass_AShooterPlayerController();
INTERIOR20260314_API UClass* Z_Construct_UClass_AShooterPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Interior20260314();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AShooterPlayerController *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AShooterPlayerController;
UClass* AShooterPlayerController::GetPrivateStaticClass()
{
	using TClass = AShooterPlayerController;
	if (!Z_Registration_Info_UClass_AShooterPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ShooterPlayerController"),
			Z_Registration_Info_UClass_AShooterPlayerController.InnerSingleton,
			StaticRegisterNativesAShooterPlayerController,
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
	return Z_Registration_Info_UClass_AShooterPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AShooterPlayerController_NoRegister()
{
	return AShooterPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AShooterPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/ShooterPlayerController.h" },
		{ "ModuleRelativePath", "Player/ShooterPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IMC_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/ShooterPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveUpAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/ShooterPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveRightAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/ShooterPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/ShooterPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Player/ShooterPlayerController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AShooterPlayerController constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IMC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveUpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveRightAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AShooterPlayerController constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AShooterPlayerController_Statics

// ********** Begin Class AShooterPlayerController Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_IMC = { "IMC", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPlayerController, IMC), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IMC_MetaData), NewProp_IMC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_MoveUpAction = { "MoveUpAction", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPlayerController, MoveUpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveUpAction_MetaData), NewProp_MoveUpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_MoveRightAction = { "MoveRightAction", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPlayerController, MoveRightAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveRightAction_MetaData), NewProp_MoveRightAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_ShootAction = { "ShootAction", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPlayerController, ShootAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootAction_MetaData), NewProp_ShootAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPlayerController, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_IMC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_MoveUpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_MoveRightAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_ShootAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_MoveSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::PropPointers) < 2048);
// ********** End Class AShooterPlayerController Property Definitions ******************************
UObject* (*const Z_Construct_UClass_AShooterPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Interior20260314,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterPlayerController_Statics::ClassParams = {
	&AShooterPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AShooterPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterPlayerController_Statics::Class_MetaDataParams)
};
void AShooterPlayerController::StaticRegisterNativesAShooterPlayerController()
{
}
UClass* Z_Construct_UClass_AShooterPlayerController()
{
	if (!Z_Registration_Info_UClass_AShooterPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterPlayerController.OuterSingleton, Z_Construct_UClass_AShooterPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShooterPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AShooterPlayerController);
AShooterPlayerController::~AShooterPlayerController() {}
// ********** End Class AShooterPlayerController ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Player_ShooterPlayerController_h__Script_Interior20260314_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShooterPlayerController, AShooterPlayerController::StaticClass, TEXT("AShooterPlayerController"), &Z_Registration_Info_UClass_AShooterPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterPlayerController), 3792082631U) },
	};
}; // Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Player_ShooterPlayerController_h__Script_Interior20260314_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Player_ShooterPlayerController_h__Script_Interior20260314_2102704747{
	TEXT("/Script/Interior20260314"),
	Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Player_ShooterPlayerController_h__Script_Interior20260314_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Player_ShooterPlayerController_h__Script_Interior20260314_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
