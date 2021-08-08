// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Radiant/Public/ObjectPool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectPool() {}
// Cross Module References
	RADIANT_API UClass* Z_Construct_UClass_UObjectPool_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_UObjectPool();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Radiant();
	RADIANT_API UClass* Z_Construct_UClass_ARadiantGameModeBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	RADIANT_API UClass* Z_Construct_UClass_ATilemap_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_AWall_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_ABullet_Laser_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_ABullet_Slow_NoRegister();
// End Cross Module References
	void UObjectPool::StaticRegisterNativesUObjectPool()
	{
	}
	UClass* Z_Construct_UClass_UObjectPool_NoRegister()
	{
		return UObjectPool::StaticClass();
	}
	struct Z_Construct_UClass_UObjectPool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameModeBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gameModeBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tilemapFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_tilemapFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wallFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_wallFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletLaserPoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_bulletLaserPoolSize;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bulletLaserPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletLaserPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bulletLaserPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletLaserFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bulletLaserFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletSlowPoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_bulletSlowPoolSize;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bulletSlowPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletSlowPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bulletSlowPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletSlowFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bulletSlowFactory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectPool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Radiant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ObjectPool.h" },
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPool_Statics::NewProp_gameModeBase_MetaData[] = {
		{ "Comment", "// # ??????\xc6\xae ???? ???? ??\xc3\xbc\n" },
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
		{ "ToolTip", "# ??????\xc6\xae ???? ???? ??\xc3\xbc" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectPool_Statics::NewProp_gameModeBase = { "gameModeBase", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPool, gameModeBase), Z_Construct_UClass_ARadiantGameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UObjectPool_Statics::NewProp_gameModeBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPool_Statics::NewProp_gameModeBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPool_Statics::NewProp_tilemapFactory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Tilemap" },
		{ "Comment", "// # ????\n" },
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UObjectPool_Statics::NewProp_tilemapFactory = { "tilemapFactory", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPool, tilemapFactory), Z_Construct_UClass_ATilemap_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UObjectPool_Statics::NewProp_tilemapFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPool_Statics::NewProp_tilemapFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPool_Statics::NewProp_wallFactory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Wall" },
		{ "Comment", "// # ????\n" },
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UObjectPool_Statics::NewProp_wallFactory = { "wallFactory", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPool, wallFactory), Z_Construct_UClass_AWall_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UObjectPool_Statics::NewProp_wallFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPool_Statics::NewProp_wallFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletLaserPoolSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BulletLaser" },
		{ "Comment", "//\x09\x09\x09# BULLET_LASER\n" },
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
		{ "ToolTip", "# BULLET_LASER" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletLaserPoolSize = { "bulletLaserPoolSize", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPool, bulletLaserPoolSize), METADATA_PARAMS(Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletLaserPoolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletLaserPoolSize_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletLaserPool_Inner = { "bulletLaserPool", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABullet_Laser_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletLaserPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BulletLaser" },
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletLaserPool = { "bulletLaserPool", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPool, bulletLaserPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletLaserPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletLaserPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletLaserFactory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BulletLaser" },
		{ "Comment", "//\x09\x09\x09\x09????\n" },
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletLaserFactory = { "bulletLaserFactory", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPool, bulletLaserFactory), Z_Construct_UClass_ABullet_Laser_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletLaserFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletLaserFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletSlowPoolSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BulletSlow" },
		{ "Comment", "//\x09\x09\x09# BULLET_SLOW\n//\x09\x09\x09\x09?\xca\xbf??\xd3\xbc? : \xc5\xba\xc3\xa2\xc5\xa9??, \xc5\xba\xc3\xa2(??????\xc6\xae\xc7\xae), ?\xd1\xbe\xcb\xb0???\n" },
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
		{ "ToolTip", "# BULLET_SLOW\n       ?\xca\xbf??\xd3\xbc? : \xc5\xba\xc3\xa2\xc5\xa9??, \xc5\xba\xc3\xa2(??????\xc6\xae\xc7\xae), ?\xd1\xbe\xcb\xb0???" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletSlowPoolSize = { "bulletSlowPoolSize", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPool, bulletSlowPoolSize), METADATA_PARAMS(Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletSlowPoolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletSlowPoolSize_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletSlowPool_Inner = { "bulletSlowPool", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABullet_Slow_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletSlowPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BulletSlow" },
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletSlowPool = { "bulletSlowPool", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPool, bulletSlowPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletSlowPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletSlowPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletSlowFactory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BulletSlow" },
		{ "Comment", "//\x09\x09\x09\x09????\n" },
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletSlowFactory = { "bulletSlowFactory", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPool, bulletSlowFactory), Z_Construct_UClass_ABullet_Slow_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletSlowFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletSlowFactory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPool_Statics::NewProp_gameModeBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPool_Statics::NewProp_tilemapFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPool_Statics::NewProp_wallFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletLaserPoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletLaserPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletLaserPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletLaserFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletSlowPoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletSlowPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletSlowPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPool_Statics::NewProp_bulletSlowFactory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectPool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectPool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectPool_Statics::ClassParams = {
		&UObjectPool::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UObjectPool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPool_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectPool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectPool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjectPool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjectPool, 3684347181);
	template<> RADIANT_API UClass* StaticClass<UObjectPool>()
	{
		return UObjectPool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectPool(Z_Construct_UClass_UObjectPool, &UObjectPool::StaticClass, TEXT("/Script/Radiant"), TEXT("UObjectPool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectPool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
