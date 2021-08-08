// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Radiant/Public/Tower_Basic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTower_Basic() {}
// Cross Module References
	RADIANT_API UClass* Z_Construct_UClass_ATower_Basic_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_ATower_Basic();
	RADIANT_API UClass* Z_Construct_UClass_ATower();
	UPackage* Z_Construct_UPackage__Script_Radiant();
// End Cross Module References
	void ATower_Basic::StaticRegisterNativesATower_Basic()
	{
	}
	UClass* Z_Construct_UClass_ATower_Basic_NoRegister()
	{
		return ATower_Basic::StaticClass();
	}
	struct Z_Construct_UClass_ATower_Basic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATower_Basic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATower,
		(UObject* (*)())Z_Construct_UPackage__Script_Radiant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_Basic_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Tower_Basic.h" },
		{ "ModuleRelativePath", "Public/Tower_Basic.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATower_Basic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATower_Basic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATower_Basic_Statics::ClassParams = {
		&ATower_Basic::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATower_Basic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Basic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATower_Basic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATower_Basic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATower_Basic, 952456329);
	template<> RADIANT_API UClass* StaticClass<ATower_Basic>()
	{
		return ATower_Basic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATower_Basic(Z_Construct_UClass_ATower_Basic, &ATower_Basic::StaticClass, TEXT("/Script/Radiant"), TEXT("ATower_Basic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATower_Basic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
