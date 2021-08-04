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

	// # 컴포넌트 소유 액터 객체
	UPROPERTY()
	class ARadiantGameModeBase* gameModeBase;


#pragma region TILE MAP
	// # 공장
	UPROPERTY(EditDefaultsOnly, Category = "Tilemap", meta = (AllowPrivateAccess = true))
	TSubclassOf<class ATilemap> tilemapFactory;

	// # 기능
	void SpawnTilemap();

	// # 속성
	FVector tileLoc = FVector(410,-590,-100);

	FRotator tileRot = FRotator(0,90,0);

#pragma endregion



#pragma region WALL

	// # 공장
	UPROPERTY(EditDefaultsOnly, Category = "Wall", meta = (AllowPrivateAccess = true))
	TSubclassOf<class AWall> wallFactory;

	// # 기능
	void SpawnWall(FVector loc);

	void GenerateStage(TArray<FVector> locations);
#pragma endregion


#pragma region BULLET
	// # 총알 공장

	//		# 기능
	// 총알 활성화시키는 함수
	void SetBulletActive(ABullet* bullet, bool isActive);

	// 탄창에 총알을 추가해주는 함수
	void AddBullet(ABullet* bullet);

	// 탄창(풀)에서 총알을 하나 빼오기
	ABullet* GetBullet(ETowerType type);

	ABullet* CreateBullet(ETowerType type);

	//		# 속성
	//			# BULLET_BASIC


	//			# BULLET_LASER
	

	//			# BULLET_SLOW
	//				필요속성 : 탄창크기, 탄창(오브젝트풀), 총알공장
	UPROPERTY(EditDefaultsOnly, Category = "BulletSlow", meta = (AllowPrivateAccess = true))
	int bulletSlowPoolSize;

	UPROPERTY(VisibleAnywhere, Category = "BulletSlow", meta = (AllowPrivateAccess = true))
	TArray<ABullet_Slow*> bulletSlowPool;

	//				공장
	UPROPERTY(EditDefaultsOnly, Category = "BulletSlow", meta = (AllowPrivateAccess = true))
	TSubclassOf<class ABullet_Slow> bulletSlowFactory;

#pragma endregion
};
