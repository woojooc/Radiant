// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Radiant/Public/Bullet_Slow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBullet_Slow() {}
// Cross Module References
	RADIANT_API UClass* Z_Construct_UClass_ABullet_Slow_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_ABullet_Slow();
	RADIANT_API UClass* Z_Construct_UClass_ABullet();
	UPackage* Z_Construct_UPackage__Script_Radiant();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABullet_Slow::StaticRegisterNativesABullet_Slow()
	{
	}
	UClass* Z_Construct_UClass_ABullet_Slow_NoRegister()
	{
		return ABullet_Slow::StaticClass();
	}
	struct Z_Construct_UClass_ABullet_Slow_Statics
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
	UObject* (*const Z_Construct_UClass_ABullet_Slow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABullet,
		(UObject* (*)())Z_Construct_UPackage__Script_Radiant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullet_Slow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Bullet_Slow.h" },
		{ "ModuleRelativePath", "Public/Bullet_Slow.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullet_Slow_Statics::NewProp_bodyMesh_MetaData[] = {
		{ "Category", "BodyMesh" },
		{ "Comment", "// # Component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Bullet_Slow.h" },
		{ "ToolTip", "# Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullet_Slow_Statics::NewProp_bodyMesh = { "bodyMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABullet_Slow, bodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABullet_Slow_Statics::NewProp_bodyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Slow_Statics::NewProp_bodyMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABullet_Slow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Slow_Statics::NewProp_bodyMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABullet_Slow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABullet_Slow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABullet_Slow_Statics::ClassParams = {
		&ABullet_Slow::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABullet_Slow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Slow_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABullet_Slow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Slow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABullet_Slow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABullet_Slow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABullet_Slow, 2009714805);
	template<> RADIANT_API UClass* StaticClass<ABullet_Slow>()
	{
		return ABullet_Slow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABullet_Slow(Z_Construct_UClass_ABullet_Slow, &ABullet_Slow::StaticClass, TEXT("/Script/Radiant"), TEXT("ABullet_Slow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABullet_Slow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
