// Fill out your copyright notice in the Description page of Project Settings.

#include <Blueprint/UserWidget.h>
#include "WidgetController.h"
#include "RadiantGameModeBase.h"
#include "GameStateController.h"
#include "UI_Playing.h"

// Sets default values for this component's properties
UWidgetController::UWidgetController()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

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
		playingUI = CreateWidget<UUI_Playing>(GetWorld(), playingUIFactory);
	}
	if (gameoverUIFactory)
	{
		gameoverUI = CreateWidget<UUserWidget>(GetWorld(), gameoverUIFactory);
	}

	auto curState = gameModeBase->gameStateController->GetState();
	OpenUI(curState);
	CloseUI(curState);

}


// Called every frame
void UWidgetController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UWidgetController::OpenUI(EGameState state)
{
	if (state == EGameState::Intro)
	{
		if (introUI && introUI->IsInViewport() == false)
		{
			introUI->AddToViewport();
		}
	}
	else if (state == EGameState::Build)
	{
		if (buildUI && buildUI->IsInViewport() == false)
		{
			buildUI->AddToViewport();
		}

		if (playingUI && playingUI->IsInViewport() == false)
		{
			playingUI->AddToViewport();
		}
	}
	else if (state == EGameState::Tower)
	{
		if (towerUI && towerUI->IsInViewport() == false)
		{
			towerUI->AddToViewport();
		}
	}
	else if (state == EGameState::Playing)
	{
	
	}
	else if (state == EGameState::Gameover)
	{
		if (gameoverUI && gameoverUI->IsInViewport() == false)
		{
			gameoverUI->AddToViewport();
		}
	}
}
void UWidgetController::CloseUI(EGameState state)
{
	if (state == EGameState::Intro)
	{
		if (gameoverUI)
		{
			gameoverUI->RemoveFromViewport();
		}

		if (playingUI && playingUI->IsInViewport())
		{
			playingUI->RemoveFromViewport();
		}
	}
	else if (state == EGameState::Build)
	{
		if (introUI && introUI->IsInViewport())
		{
			introUI->RemoveFromViewport();
		}
	}
	else if (state == EGameState::Tower)
	{
		if (buildUI && buildUI->IsInViewport())
		{
			buildUI->RemoveFromViewport();
		}
	}
	else if (state == EGameState::Playing)
	{
		
	}
	else if (state == EGameState::Gameover)
	{
		
	}
}

void UWidgetController::UpdateUI()
{
	playingUI->PrintPoint(1);
	playingUI->PrintCoin(1);
	playingUI->PrintBuild(1);
	playingUI->PrintLife(1);
	playingUI->PrintEnemy(1,1);
}