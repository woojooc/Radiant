// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WallController.generated.h"

UENUM(BlueprintType)
enum class EWallState : uint8
{
	Idle,
	Shake,
	Falling,
	End
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RADIANT_API UWallController : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWallController();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	TArray<AActor*> walls;

	EWallState m_state;
	void SetWallState(EWallState state)
	{
		m_state = state;
	}
	EWallState GetWallState()
	{
		return m_state;
	}

	int idx;

	float shakeAmplitude = 0.8;
	float shakeTemp = 0.05;
	float curTemp;

	float fallingTemp = 0.4;
	float curTemp2;
	bool bGround = false;

	void Idle();
	void Shake();
	void Falling();
	void End();

	void SetRandLoc();
	void DestroyAll();
};
