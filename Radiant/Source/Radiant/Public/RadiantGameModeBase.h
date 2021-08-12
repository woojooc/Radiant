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
	class USetTower* setTowerCompo;

	UPROPERTY(VisibleAnywhere, Category = "Component")
	class UObjectPool* objectPool;
	
	UPROPERTY(VisibleAnywhere, Category = "Component")
	class UStageLoad* stageloadCompo;

	UPROPERTY(VisibleAnywhere, Category = "Component")
	class UIntroComp* introComp;

	// # �Ӽ�

	//		# Ÿ�� ����
	UPROPERTY(VisibleAnywhere,Category = "Generate")
	bool canTileSelect = false;
	UPROPERTY(VisibleAnywhere, Category = "Generate")
	int selectedIdx = 0;

	//		# �� ����
	UPROPERTY(VisibleAnywhere, Category = "Generate")
	bool canWallSelect = false;

	// # ���

	//		# Ÿ�� ����
	bool CanTileSelect()
	{
		return canTileSelect;
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

	//		# �� ����
	bool CanWallSelect()
	{
		return canWallSelect;
	}

	void SetWallSelect(bool b);
};
