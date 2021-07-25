// Copyright Epic Games, Inc. All Rights Reserved.


#include "RadiantGameModeBase.h"
#include "GameStateController.h"
#include "WidgetController.h"
#include "SetTower.h"
#include "StageInfo.h"

ARadiantGameModeBase::ARadiantGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;

	// # Component »ý¼º
	gameStateController = CreateDefaultSubobject<UGameStateController>(TEXT("GameStateController"));
	widgetController = CreateDefaultSubobject<UWidgetController>(TEXT("WidgetController"));
	stageInfoCompo = CreateDefaultSubobject<UStageInfo>(TEXT("StageInfo"));
	setTowerCompo = CreateDefaultSubobject<USetTower>(TEXT("SetTower"));


}

void ARadiantGameModeBase::BeginPlay()
{
	Super::BeginPlay();
}

void ARadiantGameModeBase::InitGameState()
{
	Super::InitGameState();
}

void ARadiantGameModeBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}