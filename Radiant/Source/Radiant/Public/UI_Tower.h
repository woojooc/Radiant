// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Radiant.h"
#include "Blueprint/UserWidget.h"
#include <Components/Button.h>
#include "UI_Tower.generated.h"

/**
 * 
 */
UCLASS()
class RADIANT_API UUI_Tower : public UUserWidget
{
	GENERATED_BODY()
	
public:

	//생성자 BP 내부의 Event Construct에서 얘를 호출한다.
	virtual void NativeConstruct() override;

	// Btn 가져오기
	UPROPERTY(BlueprintReadWrite)//, meta = (BindWidget))
	TArray<UButton*> btnArr;

	UFUNCTION()
	void OnBtnClicked();

	UFUNCTION()
	void OnBtn00Clicked();
	UFUNCTION()
	void OnBtn01Clicked();
	UFUNCTION()
	void OnBtn02Clicked();

	// gamemodebase cache
	UPROPERTY()
	class ARadiantGameModeBase* gameModeBase;
};
