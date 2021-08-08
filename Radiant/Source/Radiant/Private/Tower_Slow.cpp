// Fill out your copyright notice in the Description page of Project Settings.


#include "Tower_Slow.h"
#include <Components/SphereComponent.h>
#include "Enemy.h"
#include "Bullet_Slow.h"
#include "RadiantGameModeBase.h"
#include "ObjectPool.h"
#include <Components/ArrowComponent.h>
#include <Components/SkeletalMeshComponent.h>

// Sets default values
ATower_Slow::ATower_Slow()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//��Ÿ� ����
	range = 100;

	collision = CreateDefaultSubobject<USphereComponent>(TEXT("Range"));
	
	// ��Ÿ� �浹ü ���� = ��Ÿ�(100)*2 + Ÿ��������(70) 
	collision->SetSphereRadius(2*range + 70);
	collision->SetCollisionProfileName("TowerRange");
	RootComponent = collision;

	//bodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	//bodyMesh->SetVisibility(false);

	base = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BaseMesh"));
	base->SetupAttachment(collision);
	head = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HeadMesh"));
	head->SetupAttachment(collision);
	head->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	firePosition = CreateDefaultSubobject<UArrowComponent>(TEXT("FirePos"));
	firePosition->SetupAttachment(head);

#pragma region Mat, Material

	// mesh cube
	/*
	// material
	ConstructorHelpers::FObjectFinder<UStaticMesh> TempBodyMesh(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	// �ּ��� ���������� �ε� �ߴٸ� true �� ����
	if (TempBodyMesh.Succeeded())
	{
		// �о���� �����͸� �Ҵ�
		bodyMesh->SetStaticMesh(TempBodyMesh.Object);
	}

	// ���� �ε��ϱ�
	ConstructorHelpers::FObjectFinder<UMaterial> TempBodyMat(TEXT("Material'/Engine/EditorMaterials/WidgetMaterial_Y.WidgetMaterial_Y'"));
	// �ּ��� ���������� �ε� �ߴٸ� true �� ����
	if (TempBodyMat.Succeeded())
	{
		// �о���� �����͸� �Ҵ�
		bodyMesh->SetMaterial(0, TempBodyMat.Object);
	}
	bodyMesh->SetRelativeScale3D(FVector(0.7, 0.7, 0.7));
	bodyMesh->SetupAttachment(collision);
	//*/
	
	// material
	ConstructorHelpers::FObjectFinder<USkeletalMesh> TempBaseMesh(TEXT("SkeletalMesh'/Game/WJung/Resources/Tower_Slow/Art/Meshes/TurretA_Base_A.TurretA_Base_A'"));
	// �ּ��� ���������� �ε� �ߴٸ� true �� ����
	if (TempBaseMesh.Succeeded())
	{
		// �о���� �����͸� �Ҵ�
		base->SetSkeletalMesh(TempBaseMesh.Object);
	}

	base->SetRelativeLocation(FVector(-12.4,0,-35));
	base->SetRelativeScale3D(FVector(0.2,0.2,0.2));

	head->SetRelativeLocation(FVector((-7.4,0,0)));

	auto partsA = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PartsA"));
	ConstructorHelpers::FObjectFinder<UStaticMesh> TempMeshA(TEXT("StaticMesh'/Game/WJung/Resources/Tower_Slow/Art/Meshes/TurretA_GunA_TurretA_GunA_D.TurretA_GunA_TurretA_GunA_D'"));
	// �ּ��� ���������� �ε� �ߴٸ� true �� ����
	if (TempMeshA.Succeeded())
	{
		// �о���� �����͸� �Ҵ�
		partsA->SetStaticMesh(TempMeshA.Object);
	}
	partsA->SetRelativeLocation(FVector(-5.2, 0,-24.3));
	partsA->SetRelativeScale3D(FVector(0.35, 0.35, 0.35));


	auto partsB = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PartsB"));
	ConstructorHelpers::FObjectFinder<UStaticMesh> TempMeshB(TEXT("StaticMesh'/Game/WJung/Resources/Tower_Slow/Art/Meshes/TurretA_GunA_TurretA_GunA_C.TurretA_GunA_TurretA_GunA_C'"));
	// �ּ��� ���������� �ε� �ߴٸ� true �� ����
	if (TempMeshB.Succeeded())
	{
		// �о���� �����͸� �Ҵ�
		partsB->SetStaticMesh(TempMeshB.Object);
	}
	partsB->SetRelativeLocation(FVector(-20.6,0,-24.5));
	partsB->SetRelativeScale3D(FVector(0.35, 0.35, 0.35));


	auto partsC = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PartsC"));
	ConstructorHelpers::FObjectFinder<UStaticMesh> TempMeshC(TEXT("StaticMesh'/Game/WJung/Resources/Tower_Slow/Art/Meshes/TurretA_GunA_TurretA_GunA_A.TurretA_GunA_TurretA_GunA_A'"));
	// �ּ��� ���������� �ε� �ߴٸ� true �� ����
	if (TempMeshC.Succeeded())
	{
		// �о���� �����͸� �Ҵ�
		partsC->SetStaticMesh(TempMeshC.Object);
	}
	partsC->SetRelativeLocation(FVector(-8.2, 0, -24.2));
	partsC->SetRelativeScale3D(FVector(0.35, 0.35, 0.35));

	auto partsD = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PartsD"));
	ConstructorHelpers::FObjectFinder<UStaticMesh> TempMeshD(TEXT("StaticMesh'/Game/WJung/Resources/Tower_Slow/Art/Meshes/TurretA_GunA_TurretA_GunA_B.TurretA_GunA_TurretA_GunA_B'"));
	// �ּ��� ���������� �ε� �ߴٸ� true �� ����
	if (TempMeshD.Succeeded())
	{
		// �о���� �����͸� �Ҵ�
		partsD->SetStaticMesh(TempMeshD.Object);
	}
	partsD->SetRelativeLocation(FVector(-6.1, 0,-10.2));
	partsD->SetRelativeScale3D(FVector(0.35, 0.35, 0.35));

	auto partsE = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PartsE"));
	ConstructorHelpers::FObjectFinder<UStaticMesh> TempMeshE(TEXT("StaticMesh'/Game/WJung/Resources/Tower_Slow/Art/Meshes/TurretA_GunA_TurretA_GunA_F.TurretA_GunA_TurretA_GunA_F'"));
	// �ּ��� ���������� �ε� �ߴٸ� true �� ����
	if (TempMeshE.Succeeded())
	{
		// �о���� �����͸� �Ҵ�
		partsE->SetStaticMesh(TempMeshE.Object);
	}
	partsE->SetRelativeLocation(FVector(-4,0,-8.4));
	partsE->SetRelativeScale3D(FVector(0.35, 0.35, 0.35));

	auto partsF = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PartsF"));
	ConstructorHelpers::FObjectFinder<UStaticMesh> TempMeshF(TEXT("StaticMesh'/Game/WJung/Resources/Tower_Slow/Art/Meshes/TurretA_GunA_TurretA_GunA_E.TurretA_GunA_TurretA_GunA_E'"));
	// �ּ��� ���������� �ε� �ߴٸ� true �� ����
	if (TempMeshF.Succeeded())
	{
		// �о���� �����͸� �Ҵ�
		partsF->SetStaticMesh(TempMeshF.Object);
	}
	partsF->SetRelativeLocation(FVector(-4,0,-35.6));
	partsF->SetRelativeScale3D(FVector(0.35, 0.35, 0.35));

	partsA->SetupAttachment(head);
	partsB->SetupAttachment(head);
	partsC->SetupAttachment(head);
	partsD->SetupAttachment(head);
	partsE->SetupAttachment(head);
	partsF->SetupAttachment(head);

	partsA->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	partsB->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	partsC->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	partsD->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	partsE->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	partsF->SetCollisionEnabled(ECollisionEnabled::NoCollision);

#pragma endregion

	//�浹 �̺�Ʈ �߰�
	collision->OnComponentBeginOverlap.AddDynamic(this, &ATower_Slow::OnRangeOverlapBegin);
	collision->OnComponentEndOverlap.AddDynamic(this, &ATower_Slow::OnRangeOverlapEnd);
}

// Called when the game starts or when spawned
void ATower_Slow::BeginPlay()
{
	Super::BeginPlay();
	
	gameModeBase = Cast<ARadiantGameModeBase>(GetWorld()->GetAuthGameMode());

	//base = Cast<USkeletalMeshComponent>(GetDefaultSubobjectByName(TEXT("BaseMesh")));
	//head = Cast<UStaticMeshComponent>(GetDefaultSubobjectByName(TEXT("HeadMesh")));

	double secs = FTimespan(FDateTime::Now().GetTicks()).GetTotalSeconds();
	int32 seed = (int32)(((int64)secs) % INT_MAX);
	FMath::RandInit(seed);
}

// Called every frame
void ATower_Slow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Ÿ���� ���̸� �����Ѵ�.
	if (bTargeting == true)
	{
		curTime += DeltaTime;

		RotToTarget();

		// ���� ���ð�
		if (curTime > reloadTime)
		{
			Fire();
			curTime = 0;
		}
		return;
	}

	if (setIdleRot == false)
	{
		TArray<int> rot = { 20, -20, 30, -30, 15, -15,50,-50,90,-90 };

		int index = FMath::RandRange(0, 9);
		PRINTLOG(TEXT("%s %d"),*GetName(),index);
		idleRot = GetActorRotation() + FRotator(0,rot[index],0);
		
		setIdleRot = true;
		idleRotDelay = true;
	}
	
	if (idleRotDelay == true && setIdleRot == true)
	{
		curTime += DeltaTime;
		if (curTime > idleRotDelayTime)
		{
			idleRotDelay = false;
		}
		return;
	}

	setIdleRot = IdleRotation();
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

		// ���� ��ġ ����
		bullet->SetActorLocation(firePosition->GetComponentLocation());
		//PRINTLOG(TEXT("%f, %f, %f"), firePosition->GetComponentLocation().X, firePosition->GetComponentLocation().Y, firePosition->GetComponentLocation().Z);

		FVector dir = FVector::ZeroVector;
		if (target)
		{
			dir = target->GetActorLocation() - firePosition->GetComponentLocation();
			dir.Normalize();
		}
		else
		{
			dir = firePosition->GetForwardVector();
		}

		// ���� ����
		bullet->SetDirection(dir);
	}
}

void ATower_Slow::RotToTarget()
{
	FVector dir = target->GetActorLocation()- GetActorLocation();

	// �ٶ� ���� ���� ����
	FRotator targetRot = dir.ToOrientationRotator();
	FRotator myRot = GetActorRotation();

	myRot = FMath::Lerp(myRot, targetRot, 5 * GetWorld()->DeltaTimeSeconds);
	// -> �ε巴�� ȸ���ϰ� �ʹ�.
	SetActorRotation(myRot);
}

bool ATower_Slow::IdleRotation()
{
	FRotator myRot = GetActorRotation();
	myRot = FMath::Lerp(myRot, idleRot, 5 * GetWorld()->DeltaTimeSeconds);
	// -> �ε巴�� ȸ���ϰ� �ʹ�.
	SetActorRotation(myRot);

	float yaw = idleRot.Euler().Z - myRot.Euler().Z;
	
	if (yaw < 0.1 && yaw > -0.1)
	{
		//PRINTLOG(TEXT("%s %f"),*GetName(),yaw);
		// �� �������� false ����

		return false;
	}

	return true;
}
