// Fill out your copyright notice in the Description page of Project Settings.


#include "GameStateController.h"
#include "WidgetController.h"
#include "RadiantGameModeBase.h"
#include "ObjectPool.h"
#include "StageLoad.h"
#include <Kismet/GameplayStatics.h>

// Sets default values for this component's properties
UGameStateController::UGameStateController()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGameStateController::BeginPlay()
{
	Super::BeginPlay();

	// ...

	GetWorld()->GetFirstPlayerController()->bShowMouseCursor = true;

	gameModeBase = Cast<ARadiantGameModeBase>(GetOwner());

}

 
// Called every frame
void UGameStateController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UGameStateController::SetState(EGameState state)
{
	m_state = state;

	if (gameModeBase)
	{
		gameModeBase->widgetController->CloseUI(m_state);
		gameModeBase->widgetController->OpenUI(m_state);
	}

	if (m_state == EGameState::Menu)
	{

	}
	else if (m_state == EGameState::Intro)
	{
		//pause
		//UGameplayStatics::SetGamePaused(GetWorld(), true);
		
		
	}
	else if (m_state == EGameState::Build)
	{
		// 카메라 전환
		
		//pause
		//UGameplayStatics::SetGamePaused(GetWorld(), true);

		// 맵 스폰
		if (gameModeBase->stageloadCompo->StageLoadSucced())
		{
			gameModeBase->objectPool->GenerateStage(gameModeBase->stageloadCompo->GetLocations());
		}

		// 에너미 매니저 스폰

	}
	else if (m_state == EGameState::Playing)
	{
		//게임 실행
		UGameplayStatics::SetGamePaused(GetWorld(), false);
	}
}