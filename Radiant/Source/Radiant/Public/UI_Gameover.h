// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <Kismet/GameplayStatics.h>
#include <Components/Button.h>
#include "UI_Gameover.generated.h"

/**
 * 
 */
UCLASS()
class RADIANT_API UUI_Gameover : public UUserWidget
{
	GENERATED_BODY()
	
public:
	//������   BP ������ Event Construct���� �긦 ȣ���Ѵ�.
	virtual void NativeConstruct() override;

	UFUNCTION()
		void OnRetryClicked();
	UFUNCTION()
		void OnQuitClicked();

	//UI ���� ��������
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* Btn_Retry;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* Btn_Quit;

	UFUNCTION(BlueprintCallable)
		void Retry();

	UFUNCTION(BlueprintCallable)
		void Quit();
};
