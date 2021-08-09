// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyIMG.generated.h"

UCLASS()
class RADIANT_API AEnemyIMG : public ACharacter
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyIMG();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// EnemyMove ÄÄÆ÷³ÍÆ®
	UPROPERTY(VisibleAnywhere, Category = "EnemyMove")
	class UEnemyMove* enemyMove;

};
