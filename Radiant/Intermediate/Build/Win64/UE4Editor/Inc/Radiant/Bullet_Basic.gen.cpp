// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Radiant/Public/Bullet_Basic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBullet_Basic() {}
// Cross Module References
	RADIANT_API UClass* Z_Construct_UClass_ABullet_Basic_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_ABullet_Basic();
	RADIANT_API UClass* Z_Construct_UClass_ABullet();
	UPackage* Z_Construct_UPackage__Script_Radiant();
// End Cross Module References
	void ABullet_Basic::StaticRegisterNativesABullet_Basic()
	{
	}
	UClass* Z_Construct_UClass_ABullet_Basic_NoRegister()
	{
		return ABullet_Basic::StaticClass();
	}
	struct Z_Construct_UClass_ABullet_Basic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABullet_Basic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABullet,
		(UObject* (*)())Z_Construct_UPackage__Script_Radiant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullet_Basic_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Bullet_Basic.h" },
		{ "ModuleRelativePath", "Public/Bullet_Basic.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABullet_Basic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABullet_Basic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABullet_Basic_Statics::ClassParams = {
		&ABullet_Basic::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABullet_Basic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Basic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABullet_Basic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABullet_Basic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABullet_Basic, 1432785133);
	template<> RADIANT_API UClass* StaticClass<ABullet_Basic>()
	{
		return ABullet_Basic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABullet_Basic(Z_Construct_UClass_ABullet_Basic, &ABullet_Basic::StaticClass, TEXT("/Script/Radiant"), TEXT("ABullet_Basic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABullet_Basic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
