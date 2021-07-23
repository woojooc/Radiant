// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tower.h"
#include "Tower_Slow.generated.h"

UCLASS()
class RADIANT_API ATower_Slow : public ATower
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATower_Slow();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	// # ¼Ó¼º
	// Å¸°Ù
	
	// ÃÑ¾Ë °øÀå
	UPROPERTY(EditDefaultsOnly, Category = "BulletFactory")
	TSubclassOf<class ABullet> bulletFactory;


};
