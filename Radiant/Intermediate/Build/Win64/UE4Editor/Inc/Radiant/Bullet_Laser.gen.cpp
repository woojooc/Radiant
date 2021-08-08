// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Radiant/Public/Bullet_Laser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBullet_Laser() {}
// Cross Module References
	RADIANT_API UClass* Z_Construct_UClass_ABullet_Laser_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_ABullet_Laser();
	RADIANT_API UClass* Z_Construct_UClass_ABullet();
	UPackage* Z_Construct_UPackage__Script_Radiant();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABullet_Laser::StaticRegisterNativesABullet_Laser()
	{
	}
	UClass* Z_Construct_UClass_ABullet_Laser_NoRegister()
	{
		return ABullet_Laser::StaticClass();
	}
	struct Z_Construct_UClass_ABullet_Laser_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bodyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bodyMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABullet_Laser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABullet,
		(UObject* (*)())Z_Construct_UPackage__Script_Radiant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullet_Laser_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Bullet_Laser.h" },
		{ "ModuleRelativePath", "Public/Bullet_Laser.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullet_Laser_Statics::NewProp_bodyMesh_MetaData[] = {
		{ "Category", "BodyMesh" },
		{ "Comment", "// # Component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Bullet_Laser.h" },
		{ "ToolTip", "# Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullet_Laser_Statics::NewProp_bodyMesh = { "bodyMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABullet_Laser, bodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABullet_Laser_Statics::NewProp_bodyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Laser_Statics::NewProp_bodyMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABullet_Laser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Laser_Statics::NewProp_bodyMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABullet_Laser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABullet_Laser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABullet_Laser_Statics::ClassParams = {
		&ABullet_Laser::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABullet_Laser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Laser_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABullet_Laser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Laser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABullet_Laser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABullet_Laser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABullet_Laser, 3621307079);
	template<> RADIANT_API UClass* StaticClass<ABullet_Laser>()
	{
		return ABullet_Laser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABullet_Laser(Z_Construct_UClass_ABullet_Laser, &ABullet_Laser::StaticClass, TEXT("/Script/Radiant"), TEXT("ABullet_Laser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABullet_Laser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
