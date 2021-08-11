// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EnemyhpBar.generated.h"

/**
 * 
 */
UCLASS()
class RADIANT_API UEnemyhpBar : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(meta = (BindWidget))
	class UProgressBar* HealthBar;

// 	UPROPERTY(meta = (BindWidget))
// 	class UTextBlock* CurrentHealthLabel;
// 
// 	UPROPERTY(meta = (BindWidget))
// 	class UTextBlock* MaxHealthLabel;

};
