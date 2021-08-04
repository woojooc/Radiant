// Fill out your copyright notice in the Description page of Project Settings.


#include "StageLoad.h"
#include <Misc/FileHelper.h>
#include <Misc/Paths.h>

// Sets default values for this component's properties
UStageLoad::UStageLoad()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UStageLoad::BeginPlay()
{
	Super::BeginPlay();

	bSucced = ReadFile();
}


// Called every frame
void UStageLoad::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UStageLoad::ReadFile()
{
	//FString path = FPaths::EngineContentDir() + TEXT("WJung/stage/stage00.txt");
	FString path = FPaths::ProjectContentDir() + TEXT("WJung/stage/stage00.txt");

	TArray<FString> lines;
	if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*path))
	{
		FString str = path + "File does not exist!";
		UE_LOG(LogTemp, Warning, TEXT("%s, file does not exist!"), *str);
		return false;
	}
	
	bool bParsing = FFileHelper::LoadANSITextFileToStrings(*(path), NULL, lines);

	bool bVector = false;
	if (bParsing)
	{
		for (int i = 0; i < lines.Num(); i++)
		{
			FVector loc;
			bVector = loc.InitFromString(lines[i]);
			locations.Add(loc);

			if (bVector == false)
			{
				break;
			}
		}
	}

	return bVector;
}

