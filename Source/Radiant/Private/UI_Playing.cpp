// Fill out your copyright notice in the Description page of Project Settings.


#include "UI_Playing.h"
#include <Components/TextBlock.h>
#include "RadiantGameModeBase.h"
#include "GameStateController.h"


void UUI_Playing::NativeConstruct()
{

	gameModeBase = Cast<ARadiantGameModeBase>(GetWorld()->GetAuthGameMode());

	if (Btn_Start)
	{
		Btn_Start->OnClicked.AddDynamic(this, &UUI_Playing::OnStartClicked);
	}
}

void UUI_Playing::OnStartClicked()
{
	Start();
}

void UUI_Playing::Start()
{
	auto state = gameModeBase->gameStateController->GetState();

	if (state != EGameState::Playing)
	{
		gameModeBase->gameStateController->SetState(EGameState::Playing);

		if (txt_start)
		{
			FString str = FString::Printf(TEXT(">>"));
			txt_start->SetText(FText::FromString(str));
		}
	}
}

void UUI_Playing::PrintPoint(int point)
{
	if (txt_point)
	{
		FString str = FString::Printf(TEXT("%d"), point);
		txt_point->SetText(FText::FromString(str));
	}
}
void UUI_Playing::PrintCoin(int coin)
{
	if (txt_coin)
	{
		FString str = FString::Printf(TEXT("%d"), coin);
		txt_coin->SetText(FText::FromString(str));
	}
}
void UUI_Playing::PrintBuild(int build)
{
	if (txt_build)
	{
		FString str = FString::Printf(TEXT("%d"), build);
		txt_build->SetText(FText::FromString(str));
	}
}
void UUI_Playing::PrintLife(int life)
{
	if (txt_life)
	{
		FString str = FString::Printf(TEXT("%d"), life);
		txt_life->SetText(FText::FromString(str));
	}
}
void UUI_Playing::PrintEnemy(int cur, int total)
{
	if (txt_enemy)
	{
		FString str = FString::Printf(TEXT("%d/%d"), cur, total);
		txt_enemy->SetText(FText::FromString(str));
	}
}