// Fill out your copyright notice in the Description page of Project Settings.


#include "IntroComp.h"
#include <Materials/MaterialParameterCollection.h>
#include "GameStateController.h"
#include "RadiantGameModeBase.h"
#include <Kismet/GameplayStatics.h>
#include "EnemyGoal.h"
#include "EnemyManager.h"
#include <Camera/CameraActor.h>
#include <EngineUtils.h>
#include <Materials/MaterialParameterCollectionInstance.h>
#include <Camera/CameraComponent.h>

// Sets default values for this component's properties
UIntroComp::UIntroComp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UMaterialParameterCollection> tempObj(TEXT("MaterialParameterCollection'/Game/WJung/Resources/FX/fx_PV_MPC.fx_PV_MPC'"));
	if (tempObj.Succeeded())
	{
		collection = tempObj.Object;
	}
}


// Called when the game starts
void UIntroComp::BeginPlay()
{
	Super::BeginPlay();

	gameModeBase = Cast<ARadiantGameModeBase>(GetWorld()->GetAuthGameMode());

	// 월드에서 엑터 가져오기
	goal = UGameplayStatics::GetActorOfClass(GetWorld(),AEnemyGoal::StaticClass());
	if (goal)
	{
		goal->SetActorHiddenInGame(true);
	}
	
	auto actor = UGameplayStatics::GetActorOfClass(GetWorld(), AEnemyManager::StaticClass());
	blackhole = Cast<AEnemyManager>(actor);
	if (blackhole)
	{
		blackhole->SetActorHiddenInGame(true);
	}

	TArray<AActor*> actors;
	UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(),AActor::StaticClass(),TEXT("MenuActor"), actors);
	if (actors.Num() > 0 && actors[0]->GetName().Contains(TEXT("Menu")))
	{
		menu = actors[0];
	}

	UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), AActor::StaticClass(), TEXT("SwirlPos"), actors);
	if (actors.Num() > 0 && actors[0]->GetName().Contains(TEXT("fx")))
	{
		swirlPos = actors[0];
	}

	/*
	TArray<AActor*> camActors;
	UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), ACameraActor::StaticClass(), TEXT("Main"), camActors);
	if (camActors.Num() > 0 && camActors[0]->GetName().Contains(TEXT("Main")))
	{
		sceneCam = Cast<ACameraActor>(camActors[0]);
	}
	*/
	for (TActorIterator<ACameraActor> actorItr(GetWorld()); actorItr; ++actorItr)
	{
		sceneCam = *actorItr;
		return;
	}
}


// Called every frame
void UIntroComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Intro 상태가 되면 
	if (gameModeBase->gameStateController->GetState() == EGameState::Intro)
	{
		switch (m_state)
		{
		case EIntroState::ShowBlackhole:
			blackhole->SetActorHiddenInGame(false);
			blackhole->SetActorScale3D(FVector(0.2,0.2,0.2));
			m_state = EIntroState::BlackholeBigger;
		break;
		case EIntroState::BlackholeBigger:
			// 블랙홀이 커진다
			BlackholeBigger();
			break;
		case EIntroState::Swirl:
			// 빨려들어간다 && 카메라 줌인
			Swirl();
			break;
		case EIntroState::Boom:
			// 폭파
			Boom();
			break;
		case EIntroState::EnemyGenerate:
			// 에너미 생성
			EnemyGenerate();
			break;
		case EIntroState::EnemyMove:
			// 에너미 길 따라 이동 && 벽 생성 && 카메라 팔로우
			EnemyMove();
			break;
		case EIntroState::GoleCameraIn:
			// 골 카메라 인 && 줌 인
			GoleCameraIn();
			break;
		case EIntroState::ShowAll:
			// 줌 아웃 
			// 상태 변경
			ShowAll();
			break;
		default:
			break;
		}
	}
}

void UIntroComp::BlackholeBigger()
{
	// cam Perspective
	sceneCam->GetCameraComponent()->SetProjectionMode(ECameraProjectionMode::Perspective);
	sceneCam->GetCameraComponent()->SetFieldOfView(52.357143);
	// 글자들 떠다님

	float time =  GetWorld()->DeltaTimeSeconds;
	curTime += time;
	
	FVector scale = FMath::Lerp(blackhole->GetActorScale3D(),FVector(1,1,1),biggerV*time);
	blackhole->SetActorScale3D(scale);

	if (curTime > blackholeBiggerTime)
	{
		//blackhole->SetActorScale3D(FVector(1,1,1));
		curTime = 0;
		m_state = EIntroState::Swirl;
	}
}

void UIntroComp::Swirl()
{
	float time = GetWorld()->DeltaTimeSeconds;
	UMaterialParameterCollectionInstance* collInstance = GetWorld()->GetParameterCollectionInstance(collection);

	if (collInstance)
	{
		collInstance->SetVectorParameterValue(TEXT("PV_Loc"), swirlPos->GetActorLocation());
		bool getSpeed = collInstance->GetScalarParameterValue(TEXT("speed"), fxSpeed);
		if (getSpeed)
		{
			collInstance->SetScalarParameterValue(TEXT("speed"),fxSpeed+swirlSpeed* time);
		}

		if (fxSpeed >= 0.4)
		{
			menu->Destroy();
			
			m_state = EIntroState::Boom;
			if (boomEffectFactory)
			{
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),boomEffectFactory,blackhole->GetTransform());
			}
		}
	}

	float camHeight = FMath::Lerp(sceneCam->GetActorLocation().Z,900.0f,zoommV*time);
	FVector camLoc = sceneCam->GetActorLocation();
	camLoc.Z = camHeight;
	sceneCam->SetActorLocation(camLoc);
}

void UIntroComp::Boom()
{
	float time = GetWorld()->DeltaTimeSeconds;
	curTime += time;

	float camHeight = FMath::Lerp(sceneCam->GetActorLocation().Z, 1200.f, zoomoutV * time );
	FVector camLoc = sceneCam->GetActorLocation();
	camLoc.Z = camHeight;
	sceneCam->SetActorLocation(camLoc);

	if (curTime > boomTime)
	{
		m_state = EIntroState::EnemyGenerate;
	}
}

void UIntroComp::EnemyGenerate()
{
	curTime += GetWorld()->DeltaTimeSeconds;

	if (curTime > enemyGenerateTime)
	{
		if (blackhole)
		{
			auto enemy = blackhole->SpawnEnemy();
			if (target == nullptr)
			{
				target = enemy;
			}
		}
	}

}

void UIntroComp::EnemyMove()
{

}

void UIntroComp::GoleCameraIn()
{

}

void UIntroComp::ShowAll()
{


	// cam Orthographic
}

