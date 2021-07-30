// Fill out your copyright notice in the Description page of Project Settings.


#include "Tower_Slow.h"
#include <Components/SphereComponent.h>
#include "Enemy.h"
#include "Bullet_Slow.h"
#include "RadiantGameModeBase.h"
#include "ObjectPool.h"

// Sets default values
ATower_Slow::ATower_Slow()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//사거리 설정
	range = 100;

	collision = CreateDefaultSubobject<USphereComponent>(TEXT("Range"));
	
	// 사거리 충돌체 지름 = 사거리(100)*2 + 타워사이즈(70) 
	collision->SetSphereRadius(270);
	collision->SetCollisionProfileName("TowerRange");
	RootComponent = collision;

	bodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	
	// mesh cube
	// material
	ConstructorHelpers::FObjectFinder<UStaticMesh> TempMesh(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	// 애셋을 성공적으로 로드 했다면 true 를 리턴
	if (TempMesh.Succeeded())
	{
		// 읽어들인 데이터를 할당
		bodyMesh->SetStaticMesh(TempMesh.Object);
	}

	// 재질 로드하기
	ConstructorHelpers::FObjectFinder<UMaterial> TempMat(TEXT("Material'/Engine/EditorMaterials/WidgetMaterial_Y.WidgetMaterial_Y'"));
	// 애셋을 성공적으로 로드 했다면 true 를 리턴
	if (TempMat.Succeeded())
	{
		// 읽어들인 데이터를 할당
		bodyMesh->SetMaterial(0, TempMat.Object);
	}

	bodyMesh->SetRelativeScale3D(FVector(0.7, 0.7, 0.7));
	bodyMesh->SetupAttachment(collision);

	//충돌 이벤트 추가
	collision->OnComponentBeginOverlap.AddDynamic(this, &ATower_Slow::OnRangeOverlapBegin);
	collision->OnComponentEndOverlap.AddDynamic(this, &ATower_Slow::OnRangeOverlapEnd);
}

// Called when the game starts or when spawned
void ATower_Slow::BeginPlay()
{
	Super::BeginPlay();
	
	gameModeBase = Cast<ARadiantGameModeBase>(GetWorld()->GetAuthGameMode());
}

// Called every frame
void ATower_Slow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 타겟팅 중이면 공격한다.
	if (bTargeting == true)
	{
		curTime += DeltaTime;

		// 공격 대기시간
		if (curTime > reloadTime)
		{
			Fire();
			curTime = 0;
		}
	}
}

void ATower_Slow::OnRangeOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//PRINTLOG(TEXT("BeginOverlap"));

	//SetTarget
	if (bTargeting == false)
	{
		auto enemy = Cast<AEnemy>(OtherActor);
		if (enemy)
		{
			//PRINTLOG(TEXT("BeginOverlap_target"));
			target = enemy;
			curTime = reloadTime;
			bTargeting = true;
		}
	}
}

void ATower_Slow::OnRangeOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor == target)
	{
		//PRINTLOG(TEXT("EndOverlap"));
		//Reset Target
		target = nullptr;
		bTargeting = false;
	}
}

void ATower_Slow::Fire()
{
	//PRINTLOG(TEXT("Fire"));
	if (gameModeBase)
	{
		ABullet_Slow* bullet = Cast<ABullet_Slow>(gameModeBase->objectPool->GetBullet(ETowerType::Slow));
	
		if (bullet == nullptr)
		{
			return;
		}

		// 생성 위치 설정
		bullet->SetActorLocation(GetActorLocation());

		FVector dir = FVector::ZeroVector;
		if (target)
		{
			dir = target->GetActorLocation() - GetActorLocation();
			dir.Normalize();
		}
		else
		{
			dir = GetActorForwardVector();
		}

		// 방향 설정
		bullet->SetDirection(dir);
	}
}