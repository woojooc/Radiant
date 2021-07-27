// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "RadiantGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class RADIANT_API ARadiantGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	ARadiantGameModeBase();

	virtual void BeginPlay() override;

	virtual void InitGameState() override;

	virtual void Tick(float DeltaSeconds) override;


	// # Component
	UPROPERTY(VisibleAnywhere, Category = "Component")
	class UGameStateController* gameStateController;

	UPROPERTY(VisibleAnywhere, Category = "Component")
	class UWidgetController* widgetController;

	UPROPERTY(VisibleAnywhere, Category = "Component")
	class UStageInfo* stageInfoCompo;

	UPROPERTY(VisibleAnywhere, Category = "Component")
	class USetTower* setTowerCompo;

	UPROPERTY(VisibleAnywhere, Category = "Component")
	class UObjectPool* objectPool;
	
	// # 加己

	//		# 鸥况 积己
	UPROPERTY(VisibleAnywhere,Category = "Setting")
	bool canSelect = false;
	UPROPERTY(VisibleAnywhere, Category = "Setting")
	int selectedIdx = 0;

	//		# 

	// # 扁瓷

	//		# 鸥况 积己
	bool CanTileSelect()
	{
		return canSelect;
	}

	void SetTileSelect(bool b);

	void SetSelectedIdx(int value)
	{
		selectedIdx = value;
	}

	int GetSelectedIdx()
	{
		return selectedIdx;
	}

	//		#
};
