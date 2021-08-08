// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Radiant.h"
#include "Components/ActorComponent.h"
#include "GameStateController.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RADIANT_API UGameStateController : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGameStateController();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// # ÄÄÆ÷³ÍÆ® ¼ÒÀ¯ ¾×ÅÍ °´Ã¼
	UPROPERTY()
	class ARadiantGameModeBase* gameModeBase;

	EGameState m_state;

	EGameState GetState()
	{
		return m_state;
	}
	void SetState(EGameState state);
};
