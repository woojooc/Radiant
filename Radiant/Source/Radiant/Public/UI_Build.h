// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <Components/Button.h>
#include "UI_Build.generated.h"

/**
 * 
 */
UCLASS()
class RADIANT_API UUI_Build : public UUserWidget
{
	GENERATED_BODY()

public:
	//������   BP ������ Event Construct���� �긦 ȣ���Ѵ�.
	virtual void NativeConstruct() override;

	// # ������Ʈ ���� ���� ��ü
	UPROPERTY()
		class ARadiantGameModeBase* gameModeBase;

	UFUNCTION()
		void OnDoneClicked();

	//UI ���� ��������
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* Btn_Done;

	UFUNCTION(BlueprintCallable)
		void Done();
};
