// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Radiant.h"
#include "Components/ActorComponent.h"
#include "MoveToPoint.generated.h"

UENUM(BlueprintType)
enum class EMoveState :uint8
{
	Idle,
	Moving,
	Attached,
	Turn,
	NoWay
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RADIANT_API UMoveToPoint : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMoveToPoint();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	EMoveState m_state = EMoveState::Moving;

	UPROPERTY()
	class AActor* me;

	UPROPERTY(EditAnywhere, Category = "Path")
	TArray<AActor*> pathActors;
	int pathIdx=0;

	FVector toLoc;

	// Idle
	float idleDelayTime = 2;
	float curTime = 2;

	// Move
	float velocity = 100;

	void Move();
	void SetPath(TArray<AActor*> path);

	void Idle();
	void Moving();
	void Attached();
	void Turn();
	void NoWay();
};
