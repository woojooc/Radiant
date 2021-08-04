// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <Components/Button.h>
#include "Blueprint/UserWidget.h"
#include "UI_Playing.generated.h"

/**
 * 
 */
UCLASS()
class RADIANT_API UUI_Playing : public UUserWidget
{
	GENERATED_BODY()

public:
	//생성자   BP 내부의 Event Construct에서 얘를 호출한다.
	virtual void NativeConstruct() override;

	// # 컴포넌트 소유 액터 객체
	UPROPERTY()
		class ARadiantGameModeBase* gameModeBase;

	UFUNCTION()
		void OnStartClicked();

	//UI 위젯 가져오기
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* Btn_Start;

	UFUNCTION(BlueprintCallable)
		void Start();

	// Playing ui 리소스 가져오기
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* img_playing;
	//UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	//	class UTextBlock* txt_start;


	void SetBtnActive(bool active);


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* txt_point;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* txt_coin;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* txt_build;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* txt_life;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* txt_enemy;

	void PrintPoint(int point);
	void PrintCoin(int coin);
	void PrintBuild(int build);
	void PrintLife(int life);
	void PrintEnemy(int cur, int total);

};
