// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet_Slow.h"
#include <Components/BoxComponent.h>
#include <Components/StaticMeshComponent.h>

// Sets default values
ABullet_Slow::ABullet_Slow()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	bodyMesh->SetupAttachment(collision);

	//StaticMesh'/Engine/BasicShapes/Sphere.Sphere'
	// StaticMesh 데이터 동적으로 로드해서 할당하기
	ConstructorHelpers::FObjectFinder<UStaticMesh> TempMesh(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
	// 애셋을 성공적으로 로드 했다면 true 를 리턴
	if (TempMesh.Succeeded())
	{
		// 읽어들인 데이터를 할당
		bodyMesh->SetStaticMesh(TempMesh.Object);
	}

	// 재질 로드하기
	ConstructorHelpers::FObjectFinder<UMaterial> TempMat(TEXT("Material'/Engine/VREditor/LaserPointer/LaserPointerMaterial.LaserPointerMaterial'"));
	// 애셋을 성공적으로 로드 했다면 true 를 리턴
	if (TempMat.Succeeded())
	{
		// 읽어들인 데이터를 할당
		bodyMesh->SetMaterial(0, TempMat.Object);
	}

	bodyMesh->SetRelativeScale3D(FVector(0.2, 0.2, 0.2));

}

// Called when the game starts or when spawned
void ABullet_Slow::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABullet_Slow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 이동함수 구현
}

void ABullet_Slow::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// 에너미와 충돌 처리
	
	// 충돌대상 에너미인지 확인
	// 에너미가 맞다면 
	// 에너미 에너지 - damage

}

