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

	
	// # �Ӽ�

	//		# Ÿ�� ����
	UPROPERTY(VisibleAnywhere,Category = "Setting")
	bool canSelect = false;
	UPROPERTY(VisibleAnywhere, Category = "Setting")
	int selectedIdx = 0;

	//		# 

	// # ���

	//		# Ÿ�� ����
	bool CanTileSelect()
	{
		return canSelect;
	}

	void SetTileSelect(bool b)
	{
		canSelect = b;
	}

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
