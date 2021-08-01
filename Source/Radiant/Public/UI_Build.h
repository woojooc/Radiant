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
	//생성자   BP 내부의 Event Construct에서 얘를 호출한다.
	virtual void NativeConstruct() override;

	// # 컴포넌트 소유 액터 객체
	UPROPERTY()
		class ARadiantGameModeBase* gameModeBase;

	UFUNCTION()
		void OnDoneClicked();

	//UI 위젯 가져오기
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* Btn_Done;

	UFUNCTION(BlueprintCallable)
		void Done();
};
