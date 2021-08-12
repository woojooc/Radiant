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
#include "ObjectPool.h"
#include "RaCameraActor.h"
#include "WallController.h"


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

	wallCtrl = CreateDefaultSubobject<UWallController>(TEXT("WallCtrl"));
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

	//TArray<AActor*> camActors;
	auto camActor = UGameplayStatics::GetActorOfClass(GetWorld(), ARaCameraActor::StaticClass());
	//if (camActors.Num() > 0 && camActors[0]->GetName().Contains(TEXT("Main")))
	if(camActor)
	{
		//sceneCam = Cast<ACameraActor>(camActors[0]);
		sceneCam = Cast<ARaCameraActor>(camActor);
	}
	/*
	for (TActorIterator<ACameraActor> actorItr(GetWorld()); actorItr; ++actorItr)
	{
		sceneCam = *actorItr;
		return;
	}
	*/
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

			// cam Perspective
			sceneCam->GetCameraComponent()->SetProjectionMode(ECameraProjectionMode::Perspective);
			sceneCam->GetCameraComponent()->SetFieldOfView(52.357143);

			m_state = EIntroState::BlackholeBigger;
			GetWorld()->GetFirstPlayerController()->PlayerCameraManager->StartCameraShake(basicShake);
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
		case EIntroState::EnemyMove:
			// 에너미 생성
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
		m_state = EIntroState::EnemyMove;
		//gameModeBase->gameStateController->SetState(EGameState::Build);
		curTime = 0;

		//맵 생성
		wallCtrl->walls = gameModeBase->objectPool->IntroWallGenerate();

		/*
		for (int i = 0; i < wallCtrl->walls.Num(); i++)
		{
			auto wall = Cast<AWall>(wallCtrl->walls[i]);
			wall->SetLocOrigin();
		}
		*/
	}
}

void UIntroComp::EnemyGenerate()
{
	auto enemy = blackhole->SpawnEnemy();
	enemyArr.Add(enemy);

	if (enemyCount < 3)
	{
		GetWorld()->GetFirstPlayerController()->PlayerCameraManager->StartCameraShake(spawnShake);
	}
	if(!sceneCam->isTargeting())
	{
		sceneCam->SetTarget(enemy);
	}
	enemyCount++;
}

void UIntroComp::EnemyMove()
{
	enemyMoveTimeLine += GetWorld()->DeltaTimeSeconds;

	if (enemyMoveTimeLine > 1)
	{
		// 줌 확 땡기기 +  흔들 흔들하기
		if(btargetCam == false && btargetTrace == false)
		{
			FVector camLoc = FMath::Lerp(sceneCam->GetActorLocation(),FVector(16,-425,558), 3*GetWorld()->DeltaTimeSeconds);
			sceneCam->SetActorLocation(camLoc);
		}
	}

	// 에너미 제너레이트  10개까지 생성
	if (enemyCount <= 10)
	{
		curTime += GetWorld()->DeltaTimeSeconds;
		if (curTime > enemyGenerateTime)
		{
			EnemyGenerate();
			curTime = 0;

			if (enemyCount == 3)
			{
				sceneCam->SetCameraState(ECameraState::Targetting);
			}
		}
	}

	// 에너미 2개 생성 시 카메라 이동
	// 타겟 방향으로 카메라 회전
	/*
	if (btargetCam)
	{
		FVector camLoc = FMath::Lerp(sceneCam->GetActorLocation(), FVector(-32.424831,-684.524780, 214.163651), 6 * GetWorld()->DeltaTimeSeconds);
		sceneCam->SetActorLocation(camLoc);

		FRotator camRot = FMath::Lerp(sceneCam->GetActorRotation(), FRotator(-16.794231,441.187500, 0.000179), 6 * GetWorld()->DeltaTimeSeconds);
		sceneCam->SetActorRotation(camRot);

		float dist = FVector::Dist(sceneCam->GetActorLocation(), FVector(-32.424831, -684.524780, 214.163651));
		if (dist < 5)
		{
			targetOffset = sceneCam->GetActorLocation() - target->GetActorLocation();
			btargetTrace = true;
			btargetCam = false;
		}
	}
	*/

	// 맵 내려옴
	if (enemyMoveTimeLine > 3 && enemyMoveTimeLine < 3.5)
	{
		wallCtrl->SetWallState(EWallState::Shake);
	}
	// 카메라 타겟 추적
	/*
	if (btargetTrace)
	{
		FVector camLoc = FMath::Lerp(sceneCam->GetActorLocation(), target->GetActorLocation()+ targetOffset, 6*GetWorld()->DeltaTimeSeconds);
		sceneCam->SetActorLocation(camLoc);

		FRotator camRot = FMath::Lerp(sceneCam->GetActorRotation(), FRotator(-16.794231, 441.187500, 0.000179), 6 * GetWorld()->DeltaTimeSeconds);
		sceneCam->SetActorRotation(camRot);
	}
	*/

	if (enemyMoveTimeLine > 15)
	{
		m_state = EIntroState::GoleCameraIn;
		goal->SetActorHiddenInGame(false);
		sceneCam->SetCameraState(ECameraState::Idle);

		curTime = 0;
		enemyMoveTimeLine = 0;
	}
}

void UIntroComp::GoleCameraIn()
{
	curTime += GetWorld()->DeltaTimeSeconds;
	if (curTime < goalTemp)
	{
		FVector dir = goal->GetActorLocation()-sceneCam->GetActorLocation();
		dir.Normalize();
		FRotator camRot = FMath::Lerp(sceneCam->GetActorRotation(),dir.ToOrientationRotator(),3*GetWorld()->DeltaTimeSeconds);
		sceneCam->SetActorRotation(camRot);

		FVector camLoc = FMath::Lerp(sceneCam->GetActorLocation(),sceneCam->GetActorLocation()+dir*100,3*GetWorld()->DeltaTimeSeconds);
		sceneCam->SetActorLocation(camLoc);
	}

	if (curTime > goalTemp && curTime < goalTemp + 8)
	{
		FRotator camRot = FMath::Lerp(sceneCam->GetActorRotation(), FRotator(-90, 180, 180), 6 * GetWorld()->DeltaTimeSeconds);
		sceneCam->SetActorRotation(camRot);

		FVector camLoc = FMath::Lerp(sceneCam->GetActorLocation(), FVector(0, 0, 2000), 5 * GetWorld()->DeltaTimeSeconds);
		sceneCam->SetActorLocation(camLoc);
	}

	if (curTime > goalTemp + 3)
	{
		m_state = EIntroState::ShowAll;
	}
}

void UIntroComp::ShowAll()
{
	// cam Orthographic
	sceneCam->GetCameraComponent()->SetProjectionMode(ECameraProjectionMode::Orthographic);
	sceneCam->SetActorLocation(FVector(0,0,2000));
	sceneCam->SetActorRotation(FRotator(-90, 180,180));

	wallCtrl->DestroyAll();
	for (int i = 0; i < enemyArr.Num(); i++)
	{
		enemyArr[i]->Destroy();
	}

	gameModeBase->gameStateController->SetState(EGameState::Build);
}

