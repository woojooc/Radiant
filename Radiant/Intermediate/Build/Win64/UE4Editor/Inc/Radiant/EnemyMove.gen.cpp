// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Radiant/Public/EnemyMove.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyMove() {}
// Cross Module References
	RADIANT_API UClass* Z_Construct_UClass_UEnemyMove_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_UEnemyMove();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Radiant();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UEnemyMove::StaticRegisterNativesUEnemyMove()
	{
	}
	UClass* Z_Construct_UClass_UEnemyMove_NoRegister()
	{
		return UEnemyMove::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyMove_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyMove_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Radiant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyMove_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "// ?\xc6\xb7??? ???? ?\xcc\xb5??\xcf\xb0? ?\xcd\xb4?.\n// ?\xca\xbf??\xd3\xbc? : ?\xcc\xbc?\n" },
		{ "IncludePath", "EnemyMove.h" },
		{ "ModuleRelativePath", "Public/EnemyMove.h" },
		{ "ToolTip", "?\xc6\xb7??? ???? ?\xcc\xb5??\xcf\xb0? ?\xcd\xb4?.\n?\xca\xbf??\xd3\xbc? : ?\xcc\xbc?" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyMove_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "Setting" },
		{ "Comment", "// ?\xcc\xbc?\n" },
		{ "ModuleRelativePath", "Public/EnemyMove.h" },
		{ "ToolTip", "?\xcc\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyMove_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyMove, speed), METADATA_PARAMS(Z_Construct_UClass_UEnemyMove_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyMove_Statics::NewProp_speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyMove_Statics::NewProp_target_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "// Target\n" },
		{ "ModuleRelativePath", "Public/EnemyMove.h" },
		{ "ToolTip", "Target" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyMove_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyMove, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyMove_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyMove_Statics::NewProp_target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyMove_Statics::NewProp_speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyMove_Statics::NewProp_target,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyMove_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyMove>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemyMove_Statics::ClassParams = {
		&UEnemyMove::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnemyMove_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyMove_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyMove_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyMove_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyMove()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemyMove_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemyMove, 1007992160);
	template<> RADIANT_API UClass* StaticClass<UEnemyMove>()
	{
		return UEnemyMove::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemyMove(Z_Construct_UClass_UEnemyMove, &UEnemyMove::StaticClass, TEXT("/Script/Radiant"), TEXT("UEnemyMove"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyMove);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
