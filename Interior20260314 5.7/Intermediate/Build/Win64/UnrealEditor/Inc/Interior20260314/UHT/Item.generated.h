// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/Item.h"

#ifdef INTERIOR20260314_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define INTERIOR20260314_Item_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
enum class EItemType : uint8;
struct FHitResult;

// ********** Begin Class AItem ********************************************************************
#define FID_Interior20260314_5_7_Source_Interior20260314_Gameplay_Item_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execSetItemType);


struct Z_Construct_UClass_AItem_Statics;
INTERIOR20260314_API UClass* Z_Construct_UClass_AItem_NoRegister();

#define FID_Interior20260314_5_7_Source_Interior20260314_Gameplay_Item_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct ::Z_Construct_UClass_AItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERIOR20260314_API UClass* ::Z_Construct_UClass_AItem_NoRegister(); \
public: \
	DECLARE_CLASS2(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Interior20260314"), Z_Construct_UClass_AItem_NoRegister) \
	DECLARE_SERIALIZER(AItem)


#define FID_Interior20260314_5_7_Source_Interior20260314_Gameplay_Item_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AItem(AItem&&) = delete; \
	AItem(const AItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem) \
	NO_API virtual ~AItem();


#define FID_Interior20260314_5_7_Source_Interior20260314_Gameplay_Item_h_17_PROLOG
#define FID_Interior20260314_5_7_Source_Interior20260314_Gameplay_Item_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Interior20260314_5_7_Source_Interior20260314_Gameplay_Item_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Interior20260314_5_7_Source_Interior20260314_Gameplay_Item_h_20_INCLASS_NO_PURE_DECLS \
	FID_Interior20260314_5_7_Source_Interior20260314_Gameplay_Item_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AItem;

// ********** End Class AItem **********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Interior20260314_5_7_Source_Interior20260314_Gameplay_Item_h

// ********** Begin Enum EItemType *****************************************************************
#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::Score) \
	op(EItemType::MultiShot) 

enum class EItemType : uint8;
template<> struct TIsUEnumClass<EItemType> { enum { Value = true }; };
template<> INTERIOR20260314_NON_ATTRIBUTED_API UEnum* StaticEnum<EItemType>();
// ********** End Enum EItemType *******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
