// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Radiant/Public/WidgetController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetController() {}
// Cross Module References
	RADIANT_API UClass* Z_Construct_UClass_UWidgetController_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_UWidgetController();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Radiant();
	RADIANT_API UClass* Z_Construct_UClass_ARadiantGameModeBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_UUI_Playing_NoRegister();
// End Cross Module References
	void UWidgetController::StaticRegisterNativesUWidgetController()
	{
	}
	UClass* Z_Construct_UClass_UWidgetController_NoRegister()
	{
		return UWidgetController::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetController_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_introUIFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_introUIFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buildUIFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_buildUIFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_towerUIFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_towerUIFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playingUIFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_playingUIFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameoverUIFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_gameoverUIFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_introUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_introUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buildUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_buildUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_towerUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_towerUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playingUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playingUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameoverUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gameoverUI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Radiant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WidgetController.h" },
		{ "ModuleRelativePath", "Public/WidgetController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetController_Statics::NewProp_gameModeBase_MetaData[] = {
		{ "Comment", "// # ??????\xc6\xae ???? ???? ??\xc3\xbc\n" },
		{ "ModuleRelativePath", "Public/WidgetController.h" },
		{ "ToolTip", "# ??????\xc6\xae ???? ???? ??\xc3\xbc" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetController_Statics::NewProp_gameModeBase = { "gameModeBase", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetController, gameModeBase), Z_Construct_UClass_ARadiantGameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetController_Statics::NewProp_gameModeBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetController_Statics::NewProp_gameModeBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetController_Statics::NewProp_introUIFactory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UI" },
		{ "Comment", "// # UI Factory\n" },
		{ "ModuleRelativePath", "Public/WidgetController.h" },
		{ "ToolTip", "# UI Factory" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWidgetController_Statics::NewProp_introUIFactory = { "introUIFactory", nullptr, (EPropertyFlags)0x0044000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetController, introUIFactory), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWidgetController_Statics::NewProp_introUIFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetController_Statics::NewProp_introUIFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetController_Statics::NewProp_buildUIFactory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/WidgetController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWidgetController_Statics::NewProp_buildUIFactory = { "buildUIFactory", nullptr, (EPropertyFlags)0x0044000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetController, buildUIFactory), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWidgetController_Statics::NewProp_buildUIFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetController_Statics::NewProp_buildUIFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetController_Statics::NewProp_towerUIFactory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/WidgetController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWidgetController_Statics::NewProp_towerUIFactory = { "towerUIFactory", nullptr, (EPropertyFlags)0x0044000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetController, towerUIFactory), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWidgetController_Statics::NewProp_towerUIFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetController_Statics::NewProp_towerUIFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetController_Statics::NewProp_playingUIFactory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/WidgetController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWidgetController_Statics::NewProp_playingUIFactory = { "playingUIFactory", nullptr, (EPropertyFlags)0x0044000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetController, playingUIFactory), Z_Construct_UClass_UUI_Playing_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWidgetController_Statics::NewProp_playingUIFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetController_Statics::NewProp_playingUIFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetController_Statics::NewProp_gameoverUIFactory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/WidgetController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWidgetController_Statics::NewProp_gameoverUIFactory = { "gameoverUIFactory", nullptr, (EPropertyFlags)0x0044000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetController, gameoverUIFactory), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWidgetController_Statics::NewProp_gameoverUIFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetController_Statics::NewProp_gameoverUIFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetController_Statics::NewProp_introUI_MetaData[] = {
		{ "Comment", "// # UI Cache\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WidgetController.h" },
		{ "ToolTip", "# UI Cache" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetController_Statics::NewProp_introUI = { "introUI", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetController, introUI), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetController_Statics::NewProp_introUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetController_Statics::NewProp_introUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetController_Statics::NewProp_buildUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WidgetController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetController_Statics::NewProp_buildUI = { "buildUI", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetController, buildUI), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetController_Statics::NewProp_buildUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetController_Statics::NewProp_buildUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetController_Statics::NewProp_towerUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WidgetController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetController_Statics::NewProp_towerUI = { "towerUI", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetController, towerUI), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetController_Statics::NewProp_towerUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetController_Statics::NewProp_towerUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetController_Statics::NewProp_playingUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WidgetController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetController_Statics::NewProp_playingUI = { "playingUI", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetController, playingUI), Z_Construct_UClass_UUI_Playing_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetController_Statics::NewProp_playingUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetController_Statics::NewProp_playingUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetController_Statics::NewProp_gameoverUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WidgetController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetController_Statics::NewProp_gameoverUI = { "gameoverUI", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetController, gameoverUI), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetController_Statics::NewProp_gameoverUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetController_Statics::NewProp_gameoverUI_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetController_Statics::NewProp_gameModeBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetController_Statics::NewProp_introUIFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetController_Statics::NewProp_buildUIFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetController_Statics::NewProp_towerUIFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetController_Statics::NewProp_playingUIFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetController_Statics::NewProp_gameoverUIFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetController_Statics::NewProp_introUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetController_Statics::NewProp_buildUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetController_Statics::NewProp_towerUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetController_Statics::NewProp_playingUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetController_Statics::NewProp_gameoverUI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetController_Statics::ClassParams = {
		&UWidgetController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWidgetController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetController_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetController, 3821092597);
	template<> RADIANT_API UClass* StaticClass<UWidgetController>()
	{
		return UWidgetController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetController(Z_Construct_UClass_UWidgetController, &UWidgetController::StaticClass, TEXT("/Script/Radiant"), TEXT("UWidgetController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
