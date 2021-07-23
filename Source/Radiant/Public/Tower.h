// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tower.generated.h"

UCLASS()
class RADIANT_API ATower : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATower();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// # 속성
	// 타워 번호 0 기본, 1 레이저, 2 슬로우
	int idx;

	// 사거리	
	float range;

public:

	// 사거리 값을 가져온다.  -> 타워 배치 시 ui에서 정보가 필요하다.
	float GetRange()
	{
		return range;
	}
};
