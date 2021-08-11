// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Radiant.h"
#include <GameFramework/Character.h>
#include <GameFramework/CharacterMovementComponent.h>
#include "Enemy.generated.h"

UCLASS()
class RADIANT_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void OnTriggerEnter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	void GetDamaged(int damage);

	void Slowed();

	void GetDamaged_Laser(int damage);

	void GetDamaged_Basic(int damage);

	// Accessor function for enemyhp
// 	UFUNCTION(BlueprintPure, Category = HP)
// 	float GetenemyHp();
// 
// 	UFUNCTION(BlueprintPure, Category = HP)
// 	float GetcurrentenemyHp();
// 
// 	UFUNCTION(BlueprintCallable, Category = HP)
// 	void UpdatecurrentenemyHp(int damage);

	// Box Collision
	UPROPERTY(VisibleAnywhere, Category = "Collision")
	class UBoxComponent* collision;

	// Static Mesh
	UPROPERTY(VisibleAnywhere, Category = "BodyMesh")
	class UStaticMeshComponent* bodyMesh;

	// ÃÑ±¸
	UPROPERTY(VisibleAnywhere, Category = "FirePosition")
	class UArrowComponent* firePosition;

	// EnemyMove ÄÄÆ÷³ÍÆ®
	UPROPERTY(VisibleAnywhere, Category = "EnemyMove")
	class UEnemyMove* enemyMove;

	UPROPERTY(EditAnywhere, Category = Hp)
	float enemyHp = 100;


	// EnemyhpBar
	UPROPERTY(VisibleAnywhere, Category = HP)
	class UWidgetComponent* HealthWidgetComp;

// 	UPROPERTY(EditAnywhere, VisibleAnywhere, Category = Hp)
// 	float currentenemyHp;

	
// slow ÇÔ¼ö character¶û ¿¬µ¿
// 	UPROPERTY()
// 	ACharacter* Enemy;

// 	UPROPERTY()
// 	UCharacterMovementComponent* CharacterMovement = GetCharacterMovement();
// 
// 	float WalkSpeed = CharacterMovement->MaxWalkSpeed;

// 	UPROPERTY(EditAnywhere, Category = Speed)
// 	class UCharacterMovementComponent* MovementPtr;

// 	UPROPERTY(EditAnywhere, Category = Speed)
// 	float speed;
};
