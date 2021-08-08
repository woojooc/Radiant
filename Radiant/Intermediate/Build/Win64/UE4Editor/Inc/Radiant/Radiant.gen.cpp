// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Radiant/Public/Radiant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadiant() {}
// Cross Module References
	RADIANT_API UEnum* Z_Construct_UEnum_Radiant_EGameState();
	UPackage* Z_Construct_UPackage__Script_Radiant();
	RADIANT_API UEnum* Z_Construct_UEnum_Radiant_ETowerType();
// End Cross Module References
	static UEnum* EGameState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Radiant_EGameState, Z_Construct_UPackage__Script_Radiant(), TEXT("EGameState"));
		}
		return Singleton;
	}
	template<> RADIANT_API UEnum* StaticEnum<EGameState>()
	{
		return EGameState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameState(EGameState_StaticEnum, TEXT("/Script/Radiant"), TEXT("EGameState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Radiant_EGameState_Hash() { return 1628212324U; }
	UEnum* Z_Construct_UEnum_Radiant_EGameState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Radiant();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameState"), 0, Get_Z_Construct_UEnum_Radiant_EGameState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameState::Intro", (int64)EGameState::Intro },
				{ "EGameState::Build", (int64)EGameState::Build },
				{ "EGameState::Tower", (int64)EGameState::Tower },
				{ "EGameState::Playing", (int64)EGameState::Playing },
				{ "EGameState::Gameover", (int64)EGameState::Gameover },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Build.Name", "EGameState::Build" },
				{ "Gameover.Name", "EGameState::Gameover" },
				{ "Intro.Name", "EGameState::Intro" },
				{ "ModuleRelativePath", "Public/Radiant.h" },
				{ "Playing.Name", "EGameState::Playing" },
				{ "Tower.Name", "EGameState::Tower" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Radiant,
				nullptr,
				"EGameState",
				"EGameState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETowerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Radiant_ETowerType, Z_Construct_UPackage__Script_Radiant(), TEXT("ETowerType"));
		}
		return Singleton;
	}
	template<> RADIANT_API UEnum* StaticEnum<ETowerType>()
	{
		return ETowerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETowerType(ETowerType_StaticEnum, TEXT("/Script/Radiant"), TEXT("ETowerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Radiant_ETowerType_Hash() { return 1182083923U; }
	UEnum* Z_Construct_UEnum_Radiant_ETowerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Radiant();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETowerType"), 0, Get_Z_Construct_UEnum_Radiant_ETowerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETowerType::Basic", (int64)ETowerType::Basic },
				{ "ETowerType::Laser", (int64)ETowerType::Laser },
				{ "ETowerType::Slow", (int64)ETowerType::Slow },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Basic.Name", "ETowerType::Basic" },
				{ "BlueprintType", "true" },
				{ "Laser.Name", "ETowerType::Laser" },
				{ "ModuleRelativePath", "Public/Radiant.h" },
				{ "Slow.Name", "ETowerType::Slow" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Radiant,
				nullptr,
				"ETowerType",
				"ETowerType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
