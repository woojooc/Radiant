// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Radiant/Public/RadiantGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadiantGameModeBase() {}
// Cross Module References
	RADIANT_API UClass* Z_Construct_UClass_ARadiantGameModeBase_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_ARadiantGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Radiant();
	RADIANT_API UClass* Z_Construct_UClass_UGameStateController_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_UWidgetController_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_USetTower_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_UObjectPool_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_UStageLoad_NoRegister();
// End Cross Module References
	void ARadiantGameModeBase::StaticRegisterNativesARadiantGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ARadiantGameModeBase_NoRegister()
	{
		return ARadiantGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARadiantGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameStateController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gameStateController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_widgetController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_widgetController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_setTowerCompo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_setTowerCompo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_objectPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_objectPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stageloadCompo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_stageloadCompo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canTileSelect_MetaData[];
#endif
		static void NewProp_canTileSelect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canTileSelect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_selectedIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canWallSelect_MetaData[];
#endif
		static void NewProp_canWallSelect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canWallSelect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARadiantGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Radiant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadiantGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RadiantGameModeBase.h" },
		{ "ModuleRelativePath", "Public/RadiantGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_gameStateController_MetaData[] = {
		{ "Category", "Component" },
		{ "Comment", "// # Component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RadiantGameModeBase.h" },
		{ "ToolTip", "# Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_gameStateController = { "gameStateController", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARadiantGameModeBase, gameStateController), Z_Construct_UClass_UGameStateController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_gameStateController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_gameStateController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_widgetController_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RadiantGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_widgetController = { "widgetController", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARadiantGameModeBase, widgetController), Z_Construct_UClass_UWidgetController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_widgetController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_widgetController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_setTowerCompo_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RadiantGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_setTowerCompo = { "setTowerCompo", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARadiantGameModeBase, setTowerCompo), Z_Construct_UClass_USetTower_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_setTowerCompo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_setTowerCompo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_objectPool_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RadiantGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_objectPool = { "objectPool", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARadiantGameModeBase, objectPool), Z_Construct_UClass_UObjectPool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_objectPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_objectPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_stageloadCompo_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RadiantGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_stageloadCompo = { "stageloadCompo", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARadiantGameModeBase, stageloadCompo), Z_Construct_UClass_UStageLoad_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_stageloadCompo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_stageloadCompo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_canTileSelect_MetaData[] = {
		{ "Category", "Generate" },
		{ "Comment", "//\x09\x09# \xc5\xb8?? ????\n" },
		{ "ModuleRelativePath", "Public/RadiantGameModeBase.h" },
		{ "ToolTip", "# \xc5\xb8?? ????" },
	};
#endif
	void Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_canTileSelect_SetBit(void* Obj)
	{
		((ARadiantGameModeBase*)Obj)->canTileSelect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_canTileSelect = { "canTileSelect", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARadiantGameModeBase), &Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_canTileSelect_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_canTileSelect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_canTileSelect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_selectedIdx_MetaData[] = {
		{ "Category", "Generate" },
		{ "ModuleRelativePath", "Public/RadiantGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_selectedIdx = { "selectedIdx", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARadiantGameModeBase, selectedIdx), METADATA_PARAMS(Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_selectedIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_selectedIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_canWallSelect_MetaData[] = {
		{ "Category", "Generate" },
		{ "Comment", "//\x09\x09# ?? ????\n" },
		{ "ModuleRelativePath", "Public/RadiantGameModeBase.h" },
	};
#endif
	void Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_canWallSelect_SetBit(void* Obj)
	{
		((ARadiantGameModeBase*)Obj)->canWallSelect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_canWallSelect = { "canWallSelect", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARadiantGameModeBase), &Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_canWallSelect_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_canWallSelect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_canWallSelect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARadiantGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_gameStateController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_widgetController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_setTowerCompo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_objectPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_stageloadCompo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_canTileSelect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_selectedIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARadiantGameModeBase_Statics::NewProp_canWallSelect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARadiantGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARadiantGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARadiantGameModeBase_Statics::ClassParams = {
		&ARadiantGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARadiantGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARadiantGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARadiantGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARadiantGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARadiantGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARadiantGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARadiantGameModeBase, 1602573020);
	template<> RADIANT_API UClass* StaticClass<ARadiantGameModeBase>()
	{
		return ARadiantGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARadiantGameModeBase(Z_Construct_UClass_ARadiantGameModeBase, &ARadiantGameModeBase::StaticClass, TEXT("/Script/Radiant"), TEXT("ARadiantGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARadiantGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
