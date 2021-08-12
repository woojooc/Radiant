// Fill out your copyright notice in the Description page of Project Settings.


#include "UI_Intro.h"
#include "RadiantGameModeBase.h"
#include "GameStateController.h"

void UUI_Intro::NativeConstruct()
{

	gameModeBase = Cast<ARadiantGameModeBase>(GetWorld()->GetAuthGameMode());

	if (Btn_Start)
	{
		Btn_Start->OnClicked.AddDynamic(this, &UUI_Intro::OnStartClicked);
	}
}

void UUI_Intro::OnStartClicked()
{
	Start();
}

void UUI_Intro::Start()
{
	gameModeBase->gameStateController->SetState(EGameState::Intro);
}
