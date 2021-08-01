// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Radiant.h"
#include "Blueprint/UserWidget.h"
#include <Components/Button.h>
#include "UI_Intro.generated.h"

/**
 * 
 */
UCLASS()
class RADIANT_API UUI_Intro : public UUserWidget
{
	GENERATED_BODY()
	
public:
	//������   BP ������ Event Construct���� �긦 ȣ���Ѵ�.
	virtual void NativeConstruct() override;

	// # ������Ʈ ���� ���� ��ü
	UPROPERTY()
	class ARadiantGameModeBase* gameModeBase;

	UFUNCTION()
		void OnStartClicked();

	//UI ���� ��������
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* Btn_Start;

	UFUNCTION(BlueprintCallable)
		void Start();
};
