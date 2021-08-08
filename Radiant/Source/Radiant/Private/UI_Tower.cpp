// Fill out your copyright notice in the Description page of Project Settings.

#include <Kismet/GameplayStatics.h>
#include "UI_Tower.h"
#include "RadiantGameModeBase.h"

void UUI_Tower::NativeConstruct()
{
	for (int i = 0; i < 3; i++)
	{
		//이건 왜 TEXT가 이상하게 입력되는거지?
		//FName name = FName(TEXT("btn%02d"), i + 1);

		auto str = FString::Printf(TEXT("btn%02d"), i + 1);
		FName name = FName(*str);
		auto btn = Cast<UButton>(GetWidgetFromName(name));
		if (btn)
		{
			if (i == 0)
			{
				btn->OnClicked.AddDynamic(this, &UUI_Tower::OnBtn00Clicked);
			}
			else if (i == 1)
			{
				btn->OnClicked.AddDynamic(this, &UUI_Tower::OnBtn01Clicked);
			}
			else if (i == 2)
			{
				btn->OnClicked.AddDynamic(this, &UUI_Tower::OnBtn02Clicked);
			}
			btnArr.Add(btn);
		}
	}

	gameModeBase = Cast<ARadiantGameModeBase>(GetWorld()->GetAuthGameMode());
	gameModeBase->SetTileSelect(false);

}

void UUI_Tower::OnBtnClicked()
{
	// 설치 가능한 지형 표시 활성화


	// Tilemap 클릭 이벤트 활성화, idx 전달
	gameModeBase->SetWallSelect(true);
	gameModeBase->SetSelectedIdx(2);
}

void UUI_Tower::OnBtn00Clicked()
{
	// 설치 가능한 지형 표시 활성화
	gameModeBase->SetWallSelect(true);
	gameModeBase->SetSelectedIdx(0);
}
void UUI_Tower::OnBtn01Clicked()
{
	// 설치 가능한 지형 표시 활성화
	gameModeBase->SetWallSelect(true);
	gameModeBase->SetSelectedIdx(1);
}
void UUI_Tower::OnBtn02Clicked()
{
	// 설치 가능한 지형 표시 활성화
	gameModeBase->SetWallSelect(true);
	gameModeBase->SetSelectedIdx(2);
}