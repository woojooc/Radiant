// Fill out your copyright notice in the Description page of Project Settings.


#include "UI_Build.h"
#include "RadiantGameModeBase.h"
#include "GameStateController.h"

void UUI_Build::NativeConstruct()
{

	gameModeBase = Cast<ARadiantGameModeBase>(GetWorld()->GetAuthGameMode());

	if (Btn_Done)
	{
		Btn_Done->OnClicked.AddDynamic(this, &UUI_Build::OnDoneClicked);
	}

	//PRINTLOG(TEXT("UI_Build Begin"));

	gameModeBase->SetTileSelect(true);
}

void UUI_Build::OnDoneClicked()
{
	Done();
}

void UUI_Build::Done()
{
	gameModeBase->gameStateController->SetState(EGameState::Tower);
}

