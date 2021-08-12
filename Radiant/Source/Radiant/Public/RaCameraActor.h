// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "RaCameraActor.generated.h"


UENUM(BlueprintType)
enum class ECameraState : uint8
{
	Idle,
	Targetting,
	Trace
};

UCLASS()
class RADIANT_API ARaCameraActor : public ACameraActor
{
	GENERATED_BODY()

public:
	ARaCameraActor();
protected:

	virtual void Tick( float DeltaSeconds ) override;

public:
	
	ECameraState m_state;

	UPROPERTY(VisibleAnywhere)
	class AActor* target;
	/*
	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* targetPos;
	*/
	UPROPERTY(EditAnywhere, Category = "Path")
	TArray<AActor*> pathActors;

	float targetDistance = 300;
	FVector targetOffset;

	bool isTargeting();
	void SetTarget(AActor* t);

	ECameraState GetCameraState()
	{
		return m_state;
	}
	void SetCameraState(ECameraState state)
	{
		m_state = state;
	}

	void Targetting();
	void Trace();


	float upTime = 1;
	float curTime = 0;
	bool bUp = true;

	float rad;
	float radius;
	float height;
};
