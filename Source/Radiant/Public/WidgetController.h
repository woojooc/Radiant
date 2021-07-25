// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WidgetController.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RADIANT_API UWidgetController : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWidgetController();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:

	void OpenUI();
	void CloseUI();

	void UpdateUI();

private:
	// # ÄÄÆ÷³ÍÆ® ¼ÒÀ¯ ¾×ÅÍ °´Ã¼
	UPROPERTY()
	class ARadiantGameModeBase* gameModeBase;

	// # UI Factory
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "UI", meta = (AllowPrivateAccess = true))
	TSubclassOf<class UUserWidget> introUIFactory;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "UI", meta = (AllowPrivateAccess = true))
	TSubclassOf<class UUserWidget> buildUIFactory;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "UI", meta = (AllowPrivateAccess = true))
	TSubclassOf<class UUserWidget> towerUIFactory;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "UI", meta = (AllowPrivateAccess = true))
	TSubclassOf<class UUserWidget> playingUIFactory;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "UI", meta = (AllowPrivateAccess = true))
	TSubclassOf<class UUserWidget> gameoverUIFactory;

public:
	// # UI Cache
	UPROPERTY()
	class UUserWidget* introUI;

	UPROPERTY()
	class UUserWidget* buildUI;

	UPROPERTY()
	class UUserWidget* towerUI;

	UPROPERTY()
	class UUserWidget* playingUI;

	UPROPERTY()
	class UUserWidget* gameoverUI;

};
