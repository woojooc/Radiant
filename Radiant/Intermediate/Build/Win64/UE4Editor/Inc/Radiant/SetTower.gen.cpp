// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Radiant/Public/SetTower.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSetTower() {}
// Cross Module References
	RADIANT_API UClass* Z_Construct_UClass_USetTower_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_USetTower();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Radiant();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	RADIANT_API UClass* Z_Construct_UClass_ATower_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_ARadiantGameModeBase_NoRegister();
// End Cross Module References
	void USetTower::StaticRegisterNativesUSetTower()
	{
	}
	UClass* Z_Construct_UClass_USetTower_NoRegister()
	{
		return USetTower::StaticClass();
	}
	struct Z_Construct_UClass_USetTower_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_towerBasicFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_towerBasicFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_towerLaserFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_towerLaserFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_towerSlowFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_towerSlowFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameModeBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gameModeBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USetTower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Radiant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetTower_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SetTower.h" },
		{ "ModuleRelativePath", "Public/SetTower.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetTower_Statics::NewProp_towerBasicFactory_MetaData[] = {
		{ "Category", "TowerFactory" },
		{ "Comment", "// # Factory\n" },
		{ "ModuleRelativePath", "Public/SetTower.h" },
		{ "ToolTip", "# Factory" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USetTower_Statics::NewProp_towerBasicFactory = { "towerBasicFactory", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USetTower, towerBasicFactory), Z_Construct_UClass_ATower_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USetTower_Statics::NewProp_towerBasicFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetTower_Statics::NewProp_towerBasicFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetTower_Statics::NewProp_towerLaserFactory_MetaData[] = {
		{ "Category", "TowerFactory" },
		{ "ModuleRelativePath", "Public/SetTower.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USetTower_Statics::NewProp_towerLaserFactory = { "towerLaserFactory", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USetTower, towerLaserFactory), Z_Construct_UClass_ATower_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USetTower_Statics::NewProp_towerLaserFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetTower_Statics::NewProp_towerLaserFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetTower_Statics::NewProp_towerSlowFactory_MetaData[] = {
		{ "Category", "TowerFactory" },
		{ "ModuleRelativePath", "Public/SetTower.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USetTower_Statics::NewProp_towerSlowFactory = { "towerSlowFactory", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USetTower, towerSlowFactory), Z_Construct_UClass_ATower_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USetTower_Statics::NewProp_towerSlowFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetTower_Statics::NewProp_towerSlowFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetTower_Statics::NewProp_gameModeBase_MetaData[] = {
		{ "Comment", "// # ??????\xc6\xae ???? ???? ??\xc3\xbc\n" },
		{ "ModuleRelativePath", "Public/SetTower.h" },
		{ "ToolTip", "# ??????\xc6\xae ???? ???? ??\xc3\xbc" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USetTower_Statics::NewProp_gameModeBase = { "gameModeBase", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USetTower, gameModeBase), Z_Construct_UClass_ARadiantGameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USetTower_Statics::NewProp_gameModeBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetTower_Statics::NewProp_gameModeBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USetTower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetTower_Statics::NewProp_towerBasicFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetTower_Statics::NewProp_towerLaserFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetTower_Statics::NewProp_towerSlowFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetTower_Statics::NewProp_gameModeBase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USetTower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USetTower>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USetTower_Statics::ClassParams = {
		&USetTower::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USetTower_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USetTower_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USetTower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USetTower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USetTower()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USetTower_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USetTower, 163969498);
	template<> RADIANT_API UClass* StaticClass<USetTower>()
	{
		return USetTower::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USetTower(Z_Construct_UClass_USetTower, &USetTower::StaticClass, TEXT("/Script/Radiant"), TEXT("USetTower"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USetTower);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
