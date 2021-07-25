// Fill out your copyright notice in the Description page of Project Settings.

#include <Blueprint/UserWidget.h>
#include "WidgetController.h"
#include "RadiantGameModeBase.h"

// Sets default values for this component's properties
UWidgetController::UWidgetController()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWidgetController::BeginPlay()
{
	Super::BeginPlay();

	gameModeBase = Cast<ARadiantGameModeBase>(GetOwner());

	if (introUIFactory)
	{
		introUI = CreateWidget<UUserWidget>(GetWorld(), introUIFactory);
	}
	if (buildUIFactory)
	{
		buildUI = CreateWidget<UUserWidget>(GetWorld(), buildUIFactory);
	}
	if (towerUIFactory)
	{
		towerUI = CreateWidget<UUserWidget>(GetWorld(), towerUIFactory);
	}
	if (playingUIFactory)
	{
		playingUI = CreateWidget<UUserWidget>(GetWorld(), playingUIFactory);
	}
	if (gameoverUIFactory)
	{
		gameoverUI = CreateWidget<UUserWidget>(GetWorld(), gameoverUIFactory);
	}

	// TODO 추후 변경
	if (towerUI)
	{
		towerUI->AddToViewport();
	}
}


// Called every frame
void UWidgetController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UWidgetController::OpenUI()
{

}
void UWidgetController::CloseUI()
{

}

void UWidgetController::UpdateUI()
{

}