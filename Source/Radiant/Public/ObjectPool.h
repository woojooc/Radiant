// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Radiant.h"
#include "Bullet.h"
#include "Bullet_Slow.h"
#include "Wall.h"
#include "Tilemap.h"
#include "Components/ActorComponent.h"
#include "ObjectPool.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RADIANT_API UObjectPool : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UObjectPool();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// # ������Ʈ ���� ���� ��ü
	UPROPERTY()
	class ARadiantGameModeBase* gameModeBase;


#pragma region TILE MAP
	// # ����
	UPROPERTY(EditDefaultsOnly, Category = "Tilemap", meta = (AllowPrivateAccess = true))
	TSubclassOf<class ATilemap> tilemapFactory;

	// # ���
	void SpawnTilemap();

	// # �Ӽ�
	FVector tileLoc = FVector(410,-590,-100);

	FRotator tileRot = FRotator(0,90,0);

#pragma endregion



#pragma region WALL

	// # ����
	UPROPERTY(EditDefaultsOnly, Category = "Wall", meta = (AllowPrivateAccess = true))
	TSubclassOf<class AWall> wallFactory;

	// # ���
	void SpawnWall(FVector loc);

	void GenerateStage(TArray<FVector> locations);
#pragma endregion


#pragma region BULLET
	// # �Ѿ� ����

	//		# ���
	// �Ѿ� Ȱ��ȭ��Ű�� �Լ�
	void SetBulletActive(ABullet* bullet, bool isActive);

	// źâ�� �Ѿ��� �߰����ִ� �Լ�
	void AddBullet(ABullet* bullet);

	// źâ(Ǯ)���� �Ѿ��� �ϳ� ������
	ABullet* GetBullet(ETowerType type);

	ABullet* CreateBullet(ETowerType type);

	//		# �Ӽ�
	//			# BULLET_BASIC


	//			# BULLET_LASER
	

	//			# BULLET_SLOW
	//				�ʿ�Ӽ� : źâũ��, źâ(������ƮǮ), �Ѿ˰���
	UPROPERTY(EditDefaultsOnly, Category = "BulletSlow", meta = (AllowPrivateAccess = true))
	int bulletSlowPoolSize;

	UPROPERTY(VisibleAnywhere, Category = "BulletSlow", meta = (AllowPrivateAccess = true))
	TArray<ABullet_Slow*> bulletSlowPool;

	//				����
	UPROPERTY(EditDefaultsOnly, Category = "BulletSlow", meta = (AllowPrivateAccess = true))
	TSubclassOf<class ABullet_Slow> bulletSlowFactory;

#pragma endregion
};
