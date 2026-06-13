// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Item.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeItem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
INTERIOR20260314_API UClass* Z_Construct_UClass_AItem();
INTERIOR20260314_API UClass* Z_Construct_UClass_AItem_NoRegister();
INTERIOR20260314_API UEnum* Z_Construct_UEnum_Interior20260314_EItemType();
UPackage* Z_Construct_UPackage__Script_Interior20260314();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EItemType *****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
static UEnum* EItemType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Interior20260314_EItemType, (UObject*)Z_Construct_UPackage__Script_Interior20260314(), TEXT("EItemType"));
	}
	return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
}
template<> INTERIOR20260314_NON_ATTRIBUTED_API UEnum* StaticEnum<EItemType>()
{
	return EItemType_StaticEnum();
}
struct Z_Construct_UEnum_Interior20260314_EItemType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Gameplay/Item.h" },
		{ "MultiShot.DisplayName", "MultiShot" },
		{ "MultiShot.Name", "EItemType::MultiShot" },
		{ "Score.DisplayName", "Score" },
		{ "Score.Name", "EItemType::Score" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemType::Score", (int64)EItemType::Score },
		{ "EItemType::MultiShot", (int64)EItemType::MultiShot },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_Interior20260314_EItemType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Interior20260314_EItemType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Interior20260314,
	nullptr,
	"EItemType",
	"EItemType",
	Z_Construct_UEnum_Interior20260314_EItemType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Interior20260314_EItemType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Interior20260314_EItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Interior20260314_EItemType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Interior20260314_EItemType()
{
	if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_Interior20260314_EItemType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
}
// ********** End Enum EItemType *******************************************************************

// ********** Begin Class AItem Function OnOverlapBegin ********************************************
struct Z_Construct_UFunction_AItem_OnOverlapBegin_Statics
{
	struct Item_eventOnOverlapBegin_Parms
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
		{ "ModuleRelativePath", "Gameplay/Item.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AItem_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AItem_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Item_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AItem_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Item_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AItem_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AItem_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnOverlapBegin_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_OnOverlapBegin_Statics::PropPointers) < 2048);
// ********** End Function OnOverlapBegin Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_OnOverlapBegin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "OnOverlapBegin", 	Z_Construct_UFunction_AItem_OnOverlapBegin_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_OnOverlapBegin_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AItem_OnOverlapBegin_Statics::Item_eventOnOverlapBegin_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItem_OnOverlapBegin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AItem_OnOverlapBegin_Statics::Item_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItem_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItem_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItem::execOnOverlapBegin)
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
// ********** End Class AItem Function OnOverlapBegin **********************************************

// ********** Begin Class AItem Function SetItemType ***********************************************
struct Z_Construct_UFunction_AItem_SetItemType_Statics
{
	struct Item_eventSetItemType_Parms
	{
		EItemType NewType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Gameplay/Item.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetItemType constinit property declarations ***************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetItemType constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetItemType Property Definitions **************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AItem_SetItemType_Statics::NewProp_NewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AItem_SetItemType_Statics::NewProp_NewType = { "NewType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventSetItemType_Parms, NewType), Z_Construct_UEnum_Interior20260314_EItemType, METADATA_PARAMS(0, nullptr) }; // 1765522045
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_SetItemType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_SetItemType_Statics::NewProp_NewType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_SetItemType_Statics::NewProp_NewType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_SetItemType_Statics::PropPointers) < 2048);
// ********** End Function SetItemType Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_SetItemType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "SetItemType", 	Z_Construct_UFunction_AItem_SetItemType_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_SetItemType_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AItem_SetItemType_Statics::Item_eventSetItemType_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_SetItemType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItem_SetItemType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AItem_SetItemType_Statics::Item_eventSetItemType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItem_SetItemType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItem_SetItemType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItem::execSetItemType)
{
	P_GET_ENUM(EItemType,Z_Param_NewType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetItemType(EItemType(Z_Param_NewType));
	P_NATIVE_END;
}
// ********** End Class AItem Function SetItemType *************************************************

// ********** Begin Class AItem ********************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AItem;
UClass* AItem::GetPrivateStaticClass()
{
	using TClass = AItem;
	if (!Z_Registration_Info_UClass_AItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Item"),
			Z_Registration_Info_UClass_AItem.InnerSingleton,
			StaticRegisterNativesAItem,
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
	return Z_Registration_Info_UClass_AItem.InnerSingleton;
}
UClass* Z_Construct_UClass_AItem_NoRegister()
{
	return AItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Gameplay/Item.h" },
		{ "ModuleRelativePath", "Gameplay/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupSphere_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gameplay/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gameplay/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Gameplay/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemValue_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Gameplay/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallSpeed_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Gameplay/Item.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AItem constinit property declarations ************************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FallSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AItem constinit property declarations **************************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnOverlapBegin"), .Pointer = &AItem::execOnOverlapBegin },
		{ .NameUTF8 = UTF8TEXT("SetItemType"), .Pointer = &AItem::execSetItemType },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AItem_OnOverlapBegin, "OnOverlapBegin" }, // 4195523243
		{ &Z_Construct_UFunction_AItem_SetItemType, "SetItemType" }, // 2724636202
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AItem_Statics

// ********** Begin Class AItem Property Definitions ***********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_PickupSphere = { "PickupSphere", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItem, PickupSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupSphere_MetaData), NewProp_PickupSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItem, ItemMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMesh_MetaData), NewProp_ItemMesh_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AItem_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItem, ItemType), Z_Construct_UEnum_Interior20260314_EItemType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) }; // 1765522045
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_ItemValue = { "ItemValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItem, ItemValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemValue_MetaData), NewProp_ItemValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_FallSpeed = { "FallSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItem, FallSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallSpeed_MetaData), NewProp_FallSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_PickupSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_ItemMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_ItemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_ItemValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_FallSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::PropPointers) < 2048);
// ********** End Class AItem Property Definitions *************************************************
UObject* (*const Z_Construct_UClass_AItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Interior20260314,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItem_Statics::ClassParams = {
	&AItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AItem_Statics::Class_MetaDataParams)
};
void AItem::StaticRegisterNativesAItem()
{
	UClass* Class = AItem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AItem_Statics::Funcs));
}
UClass* Z_Construct_UClass_AItem()
{
	if (!Z_Registration_Info_UClass_AItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItem.OuterSingleton, Z_Construct_UClass_AItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AItem);
AItem::~AItem() {}
// ********** End Class AItem **********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Gameplay_Item_h__Script_Interior20260314_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1765522045U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItem, AItem::StaticClass, TEXT("AItem"), &Z_Registration_Info_UClass_AItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItem), 318824404U) },
	};
}; // Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Gameplay_Item_h__Script_Interior20260314_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Gameplay_Item_h__Script_Interior20260314_1860846976{
	TEXT("/Script/Interior20260314"),
	Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Gameplay_Item_h__Script_Interior20260314_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Gameplay_Item_h__Script_Interior20260314_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Gameplay_Item_h__Script_Interior20260314_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Interior20260314_5_7_Source_Interior20260314_Gameplay_Item_h__Script_Interior20260314_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
