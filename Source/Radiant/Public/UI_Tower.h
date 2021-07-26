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

	//������ BP ������ Event Construct���� �긦 ȣ���Ѵ�.
	virtual void NativeConstruct() override;

	// Btn ��������
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
