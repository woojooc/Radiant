// Fill out your copyright notice in the Description page of Project Settings.


#include "UI_Gameover.h"

void UUI_Gameover::NativeConstruct()
{
	if (Btn_Retry)
	{
		Btn_Retry->OnClicked.AddDynamic(this, &UUI_Gameover::OnRetryClicked);
	}

	if (Btn_Quit)
	{
		Btn_Quit->OnClicked.AddDynamic(this, &UUI_Gameover::OnQuitClicked);
	}
}

void UUI_Gameover::OnRetryClicked()
{
	Retry();
}

void UUI_Gameover::OnQuitClicked()
{
	Quit();
}

void UUI_Gameover::Retry()
{
	// ������ �����
	UGameplayStatics::OpenLevel(this, TEXT("Ingame_fin"));		//GetWorld()�־��൵ �ȴ�.
}

void UUI_Gameover::Quit()
{
	// ������ �����Ѵ�.
	UKismetSystemLibrary::QuitGame(this, GetWorld()->GetFirstPlayerController(), EQuitPreference::Quit, false);
}