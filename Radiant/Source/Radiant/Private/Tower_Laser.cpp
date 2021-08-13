// Fill out your copyright notice in the Description page of Project Settings.

#include "Tower_Laser.h"
#include <Components/SphereComponent.h>
#include "Enemy.h"
#include "Bullet_Laser.h"
#include "RadiantGameModeBase.h"
#include "ObjectPool.h"
#include <Components/ArrowComponent.h>
#include <Components/SkeletalMeshComponent.h>
#include <Kismet/GameplayStatics.h>
#include <Particles/ParticleSystemComponent.h>

// Sets default values
ATower_Laser::ATower_Laser()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	range = 200;

	collision = CreateDefaultSubobject<USphereComponent>(TEXT("Range"));

	collision->SetSphereRadius(470);
	collision->SetCollisionProfileName("TowerRange");
	RootComponent = collision;

	base = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BaseMesh"));
	base->SetupAttachment(collision);
	head = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HeadMesh"));
	head->SetupAttachment(collision);
	head->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	firePosition = CreateDefaultSubobject<UArrowComponent>(TEXT("FirePos"));
	firePosition->SetupAttachment(head);

	fireParticleCompo = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireEffect"));
	fireParticleCompo->SetupAttachment(firePosition);

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

	base->SetRelativeLocation(FVector(-12.4, 0, -35));
	base->SetRelativeScale3D(FVector(0.2, 0.2, 0.2));

	head->SetRelativeLocation(FVector((-7.4, 0, 0)));

	auto partsA = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PartsA"));
	ConstructorHelpers::FObjectFinder<UStaticMesh> TempMeshA(TEXT("SkeletalMesh'/Game/WJung/Resources/Tower_Laser/Models/Pixel_Make_Voyager/02_CockpitExtension.02_CockpitExtension'"));
	// �ּ��� ���������� �ε� �ߴٸ� true �� ����
	if (TempMeshA.Succeeded())
	{
		// �о���� �����͸� �Ҵ�
		partsA->SetStaticMesh(TempMeshA.Object);
	}
	partsA->SetRelativeLocation(FVector(-5.2, 0, -24.3));
	partsA->SetRelativeScale3D(FVector(0.35, 0.35, 0.35));


	auto partsB = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PartsB"));
	ConstructorHelpers::FObjectFinder<UStaticMesh> TempMeshB(TEXT("SkeletalMesh'/Game/WJung/Resources/Tower_Laser/Models/Pixel_Make_Voyager/02_CockpitExtension.02_CockpitExtension'"));
	// �ּ��� ���������� �ε� �ߴٸ� true �� ����
	if (TempMeshB.Succeeded())
	{
		// �о���� �����͸� �Ҵ�
		partsB->SetStaticMesh(TempMeshB.Object);
	}
	partsB->SetRelativeLocation(FVector(-20.6, 0, -24.5));
	partsB->SetRelativeScale3D(FVector(0.35, 0.35, 0.35));


	auto partsC = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PartsC"));
	ConstructorHelpers::FObjectFinder<UStaticMesh> TempMeshC(TEXT("SkeletalMesh'/Game/WJung/Resources/Tower_Laser/Models/Pixel_Make_Voyager/03_CoreChassy.03_CoreChassy'"));
	// �ּ��� ���������� �ε� �ߴٸ� true �� ����
	if (TempMeshC.Succeeded())
	{
		// �о���� �����͸� �Ҵ�
		partsC->SetStaticMesh(TempMeshC.Object);
	}
	partsC->SetRelativeLocation(FVector(-8.2, 0, -24.2));
	partsC->SetRelativeScale3D(FVector(0.35, 0.35, 0.35));

	auto partsD = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PartsD"));
	ConstructorHelpers::FObjectFinder<UStaticMesh> TempMeshD(TEXT("SkeletalMesh'/Game/WJung/Resources/Tower_Laser/Models/Pixel_Make_Voyager/04_TwinChassy.04_TwinChassy'"));
	// �ּ��� ���������� �ε� �ߴٸ� true �� ����
	if (TempMeshD.Succeeded())
	{
		// �о���� �����͸� �Ҵ�
		partsD->SetStaticMesh(TempMeshD.Object);
	}
	partsD->SetRelativeLocation(FVector(-6.1, 0, -10.2));
	partsD->SetRelativeScale3D(FVector(0.35, 0.35, 0.35));

	auto partsE = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PartsE"));
	ConstructorHelpers::FObjectFinder<UStaticMesh> TempMeshE(TEXT("SkeletalMesh'/Game/WJung/Resources/Tower_Laser/Models/Pixel_Make_Voyager/05_Wings.05_Wings'"));
	// �ּ��� ���������� �ε� �ߴٸ� true �� ����
	if (TempMeshE.Succeeded())
	{
		// �о���� �����͸� �Ҵ�
		partsE->SetStaticMesh(TempMeshE.Object);
	}
	partsE->SetRelativeLocation(FVector(-4, 0, -8.4));
	partsE->SetRelativeScale3D(FVector(0.35, 0.35, 0.35));

	auto partsF = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PartsF"));
	ConstructorHelpers::FObjectFinder<UStaticMesh> TempMeshF(TEXT("SkeletalMesh'/Game/WJung/Resources/Tower_Laser/Models/Pixel_Make_Voyager/06_BoosterPlug.06_BoosterPlug'"));
	// �ּ��� ���������� �ε� �ߴٸ� true �� ����
	if (TempMeshF.Succeeded())
	{
		// �о���� �����͸� �Ҵ�
		partsF->SetStaticMesh(TempMeshF.Object);
	}
	partsF->SetRelativeLocation(FVector(-4, 0, -35.6));
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


	//�浹 �̺�Ʈ �߰�
	collision->OnComponentBeginOverlap.AddDynamic(this, &ATower_Laser::OnRangeOverlapBegin);
	collision->OnComponentEndOverlap.AddDynamic(this, &ATower_Laser::OnRangeOverlapEnd);

}

// Called when the game starts or when spawned
void ATower_Laser::BeginPlay()
{
	Super::BeginPlay();

	gameModeBase = Cast<ARadiantGameModeBase>(GetWorld()->GetAuthGameMode());

	double secs = FTimespan(FDateTime::Now().GetTicks()).GetTotalSeconds();
	int32 seed = (int32)(((int64)secs) % INT_MAX);
	FMath::RandInit(seed);

	headLoc = head->GetComponentLocation();
}

// Called every frame
void ATower_Laser::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Ÿ���� ���̸� �����Ѵ�.
	if (bTargeting == true)
	{
		curTime += DeltaTime;

		RotToTarget();

		// ���� ���ð�
		if (bFired == false && curTime > reloadTime)
		{
			Fire();
			curTime = 0;
			bFired = true;
		}

		if (bFired == true)
		{
			if (curTime < nuckbackTime)
			{
				// head �ڷ� �̵�
				FVector myLoc = FMath::Lerp(headLoc - head->GetForwardVector() * 10 * (nuckbackTime - curTime), headLoc, 10 * DeltaTime);
				head->SetWorldLocation(myLoc);
			}
			else if (curTime < nuckbackTime + relocationTime)
			{
				// head �� ��ġ
				FVector myLoc = FMath::Lerp(headLoc, head->GetComponentLocation(), 5 * DeltaTime);
				head->SetWorldLocation(myLoc);
			}
			else
			{
				bFired = false;
			}
		}
		return;
	}



	if (setIdleRot == false)
	{
		TArray<int> rot = { 20, -20, 30, -30, 15, -15,50,-50,90,-90 };

		int index = FMath::RandRange(0, 9);
		//PRINTLOG(TEXT("%s %d"),*GetName(),index);
		idleRot = GetActorRotation() + FRotator(0, rot[index], 0);

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

void ATower_Laser::Fire()
{
	//PRINTLOG(TEXT("Fire"));
	if (gameModeBase)
	{
		ABullet_Laser* bullet = Cast<ABullet_Laser>(gameModeBase->objectPool->GetBullet(ETowerType::Laser));

		if (bullet == nullptr)
		{
			return;
		}

		// ���� ��ġ ����
		bullet->SetActorLocation(GetActorLocation());

		FVector dir = FVector::ZeroVector;
		if (target)
		{
			dir = target->GetActorLocation() - GetActorLocation();
			dir.Normalize();
		}
		else
		{
			dir = firePosition->GetForwardVector();
		}

		// ���� ����
		bullet->SetDirection(dir);

		fireParticleCompo->Activate(true);
	}
}

void ATower_Laser::OnRangeOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
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

void ATower_Laser::OnRangeOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

	if (OtherActor == target)
	{
		//PRINTLOG(TEXT("EndOverlap"));
		//Reset Target
		target = nullptr;
		bTargeting = false;
	}
}


void ATower_Laser::RotToTarget()
{
	FVector dir = target->GetActorLocation() - GetActorLocation();

	// �ٶ� ���� ���� ����
	FRotator targetRot = dir.ToOrientationRotator();
	FRotator myRot = head->GetComponentRotation();

	myRot = FMath::Lerp(myRot, targetRot, 5 * GetWorld()->DeltaTimeSeconds);
	// -> �ε巴�� ȸ���ϰ� �ʹ�.
	myRot.Pitch = 0;
	myRot.Roll = 0;
	head->SetWorldRotation(myRot);
}

bool ATower_Laser::IdleRotation()
{
	FRotator myRot = head->GetComponentRotation();
	myRot = FMath::Lerp(myRot, idleRot, 5 * GetWorld()->DeltaTimeSeconds);
	// -> �ε巴�� ȸ���ϰ� �ʹ�.
	head->SetWorldRotation(myRot);

	float yaw = idleRot.Euler().Z - myRot.Euler().Z;

	if (yaw < 0.1 && yaw > -0.1)
	{
		//PRINTLOG(TEXT("%s %f"),*GetName(),yaw);
		// �� �������� false ����

		return false;
	}

	return true;
}
