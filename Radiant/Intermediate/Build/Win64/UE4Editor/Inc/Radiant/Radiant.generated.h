// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RADIANT_Radiant_generated_h
#error "Radiant.generated.h already included, missing '#pragma once' in Radiant.h"
#endif
#define RADIANT_Radiant_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Radiant_Source_Radiant_Public_Radiant_h


#define FOREACH_ENUM_EGAMESTATE(op) \
	op(EGameState::Intro) \
	op(EGameState::Build) \
	op(EGameState::Tower) \
	op(EGameState::Playing) \
	op(EGameState::Gameover) 

enum class EGameState : uint8;
template<> RADIANT_API UEnum* StaticEnum<EGameState>();

#define FOREACH_ENUM_ETOWERTYPE(op) \
	op(ETowerType::Basic) \
	op(ETowerType::Laser) \
	op(ETowerType::Slow) 

enum class ETowerType : uint8;
template<> RADIANT_API UEnum* StaticEnum<ETowerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
