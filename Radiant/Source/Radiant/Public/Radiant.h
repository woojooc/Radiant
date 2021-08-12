// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

//Log Castegory 추가하고 싶다.
DECLARE_LOG_CATEGORY_EXTERN(Radiant, Log, All);

#define APPINFO (FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__) + TEXT(")"))
#define CALLINFO() UE_LOG(Radiant, Warning, TEXT("%s"), *APPINFO);
#define PRINTLOG(fmt, ... ) UE_LOG(Radiant, Warning, TEXT("%s %s"), *APPINFO, *FString::Printf(fmt, ##__VA_ARGS__)) 

UENUM(BlueprintType)
enum class ETowerType : uint8
{
	Basic,
	Laser,
	Slow
};

UENUM(BlueprintType)
enum class EGameState : uint8
{
	Menu,
	Intro,
	Build,
	Tower,
	Playing,
	Gameover
};