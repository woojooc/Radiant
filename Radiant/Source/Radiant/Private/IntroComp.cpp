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

	// ���忡�� ���� ��������
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

	// Intro ���°� �Ǹ� 
	if (gameModeBase->gameStateController->GetState() == EGameState::Intro)
	{
		switch (m_state)
		{
		case EIntroState::ShowBlackhole:
			blackhole->SetActorHiddenInGame(false);
			blackhole->SetActorScale3D(FVector(0.2,0.2,0.2));
			m_state = EIntroState::BlackholeBigger;
			GetWorld()->GetFirstPlayerController()->PlayerCameraManager->StartCameraShake(basicShake);
		break;
		case EIntroState::BlackholeBigger:
			// ��Ȧ�� Ŀ����
			BlackholeBigger();
			break;
		case EIntroState::Swirl:
			// �������� && ī�޶� ����
			Swirl();
			break;
		case EIntroState::Boom:
			// ����
			Boom();
			break;
		case EIntroState::EnemyMove:
			// ���ʹ� ����
			// ���ʹ� �� ���� �̵� && �� ���� && ī�޶� �ȷο�
			EnemyMove();
			break;
		case EIntroState::GoleCameraIn:
			// �� ī�޶� �� && �� ��
			GoleCameraIn();
			break;
		case EIntroState::ShowAll:
			// �� �ƿ� 
			// ���� ����
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
	// ���ڵ� ���ٴ�

	float time =  GetWorld()->DeltaTimeSeconds;
	curTime += time;
	
	FVector scale = FMath::Lerp(blackhole->GetActorScale3D(),FVector(1,1,1),biggerV*time);
	blackhole->SetActorScale3D(scale);

	if (curTime > blackholeBiggerTime)
	{
		//blackhole->SetActorScale3D(FVector(1,1,1));
		curTime = 0;
		m_state = EIntroState::Swirl;
		GetWorld()->GetFirstPlayerController()->PlayerCameraManager->StartCameraShake(swirlShake);
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
				GetWorld()->GetFirstPlayerController()->PlayerCameraManager->StartCameraShake(boomShake);
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
		//m_state = EIntroState::EnemyMove;
		gameModeBase->gameStateController->SetState(EGameState::Build);
		curTime = 0;
	}
}

void UIntroComp::EnemyGenerate()
{
	auto enemy = blackhole->SpawnEnemy();
	GetWorld()->GetFirstPlayerController()->PlayerCameraManager->StartCameraShake(spawnShake);
	if (target == nullptr)
	{
		target = enemy;
	}
	enemyCount++;
}

void UIntroComp::EnemyMove()
{
	// �� Ȯ ����� +  ��� ����ϱ�
	
	// ���ʹ� ���ʷ���Ʈ  10������ ����
	if (enemyCount <= 10)
	{
		curTime += GetWorld()->DeltaTimeSeconds;
		if (curTime > enemyGenerateTime)
		{
			EnemyGenerate();
			curTime = 0;
		}
	}

	// �� ����
	
	// ���ʹ� 2�� ���� �� ī�޶� �̵�

}

void UIntroComp::GoleCameraIn()
{

}

void UIntroComp::ShowAll()
{


	// cam Orthographic
}

