// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Radiant.h"
#include "Components/ActorComponent.h"
#include "SetTower.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RADIANT_API USetTower : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USetTower();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	// # Factory
	UPROPERTY(EditDefaultsOnly, Category = "TowerFactory")
	TSubclassOf<class ATower> towerBasicFactory;

	UPROPERTY(EditDefaultsOnly, Category = "TowerFactory")
	TSubclassOf<class ATower> towerLaserFactory;

	UPROPERTY(EditDefaultsOnly, Category = "TowerFactory")
	TSubclassOf<class ATower> towerSlowFactory;

	// # 컴포넌트 소유 액터 객체
	UPROPERTY()
	class ARadiantGameModeBase* gameModeBase;

	// # 타워 생성
	void SpawnTower(FVector loc);
		
};