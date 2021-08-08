// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Radiant/Public/EnemyManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyManager() {}
// Cross Module References
	RADIANT_API UClass* Z_Construct_UClass_AEnemyManager_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_AEnemyManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Radiant();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	RADIANT_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
// End Cross Module References
	void AEnemyManager::StaticRegisterNativesAEnemyManager()
	{
	}
	UClass* Z_Construct_UClass_AEnemyManager_NoRegister()
	{
		return AEnemyManager::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemyFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_enemyFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_createTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_createTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currentTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Radiant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ?????\xc3\xb0??? ?\xd1\xb9??? ???? ?????? ?\xcd\xb4?.\n// 1. ???? ?????? ?\xcd\xb4?.\n// 2. ?????\xc3\xb0??? ??????\n// 3. ?\xc3\xb0??? ?\xea\xb7\xb6???\xcf\xb1?\n//?\xca\xbf??\xd3\xbc? : ??????, ?????\xc3\xb0?, ?????\xc3\xb0? \n" },
		{ "IncludePath", "EnemyManager.h" },
		{ "ModuleRelativePath", "Public/EnemyManager.h" },
		{ "ToolTip", "?????\xc3\xb0??? ?\xd1\xb9??? ???? ?????? ?\xcd\xb4?.\n1. ???? ?????? ?\xcd\xb4?.\n2. ?????\xc3\xb0??? ??????\n3. ?\xc3\xb0??? ?\xea\xb7\xb6???\xcf\xb1?\n?\xca\xbf??\xd3\xbc? : ??????, ?????\xc3\xb0?, ?????\xc3\xb0?" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyManager_Statics::NewProp_enemyFactory_MetaData[] = {
		{ "Category", "Enemy Factory" },
		{ "Comment", "//?\xca\xbf??\xd3\xbc? : ??????, ?????\xc3\xb0?, ?????\xc3\xb0? \n" },
		{ "ModuleRelativePath", "Public/EnemyManager.h" },
		{ "ToolTip", "?\xca\xbf??\xd3\xbc? : ??????, ?????\xc3\xb0?, ?????\xc3\xb0?" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_enemyFactory = { "enemyFactory", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyManager, enemyFactory), Z_Construct_UClass_AEnemy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEnemyManager_Statics::NewProp_enemyFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::NewProp_enemyFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyManager_Statics::NewProp_createTime_MetaData[] = {
		{ "Category", "Setting" },
		{ "ModuleRelativePath", "Public/EnemyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_createTime = { "createTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyManager, createTime), METADATA_PARAMS(Z_Construct_UClass_AEnemyManager_Statics::NewProp_createTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::NewProp_createTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyManager_Statics::NewProp_currentTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_currentTime = { "currentTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyManager, currentTime), METADATA_PARAMS(Z_Construct_UClass_AEnemyManager_Statics::NewProp_currentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::NewProp_currentTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_enemyFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_createTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_currentTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyManager_Statics::ClassParams = {
		&AEnemyManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyManager, 1817980089);
	template<> RADIANT_API UClass* StaticClass<AEnemyManager>()
	{
		return AEnemyManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyManager(Z_Construct_UClass_AEnemyManager, &AEnemyManager::StaticClass, TEXT("/Script/Radiant"), TEXT("AEnemyManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
