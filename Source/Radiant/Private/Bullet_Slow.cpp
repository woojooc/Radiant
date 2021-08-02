// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet_Slow.h"
#include <Components/SphereComponent.h>
#include <Components/StaticMeshComponent.h>
#include "Enemy.h"
#include "RadiantGameModeBase.h"
#include "ObjectPool.h"

// Sets default values
ABullet_Slow::ABullet_Slow()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	bodyMesh->SetupAttachment(collision);
	bodyMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	//StaticMesh'/Engine/BasicShapes/Sphere.Sphere'
	// StaticMesh ������ �������� �ε��ؼ� �Ҵ��ϱ�
	ConstructorHelpers::FObjectFinder<UStaticMesh> TempMesh(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
	// �ּ��� ���������� �ε� �ߴٸ� true �� ����
	if (TempMesh.Succeeded())
	{
		// �о���� �����͸� �Ҵ�
		bodyMesh->SetStaticMesh(TempMesh.Object);
	}

	// ���� �ε��ϱ�
	ConstructorHelpers::FObjectFinder<UMaterial> TempMat(TEXT("Material'/Engine/VREditor/LaserPointer/LaserPointerMaterial.LaserPointerMaterial'"));
	// �ּ��� ���������� �ε� �ߴٸ� true �� ����
	if (TempMat.Succeeded())
	{
		// �о���� �����͸� �Ҵ�
		bodyMesh->SetMaterial(0, TempMat.Object);
	}

	// ������ ����
	bodyMesh->SetRelativeScale3D(FVector(0.2, 0.2, 0.2));

	// Ÿ�� ����
	towerType = ETowerType::Slow;
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

	// �̵��Լ� ����
	FVector p = GetActorLocation() + dir * speed * DeltaTime;
	SetActorLocation(p,true);
}

void ABullet_Slow::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
	auto enemy = Cast<AEnemy>(OtherActor);

	if (enemy)
	{
		
		enemy->Slowed();
		// �Ѿ� ȸ��
		gameModeBase->objectPool->AddBullet(this);
	}
}

void  ABullet_Slow::OnBulletHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// ���ʹ̿� �浹 ó��
	
	// �浹��� ���ʹ����� Ȯ��
	// ���ʹ̰� �´ٸ� 
	// ���ʹ� ������ - damage

	// ������Ʈ Ǯ�� ���ư���.
	/*
	auto enemy = Cast<AEnemy>(OtherActor);

	if (enemy)
	{
		//���ο� ó��
		gameModeBase->objectPool->AddBullet(this);
	}
	*/
}