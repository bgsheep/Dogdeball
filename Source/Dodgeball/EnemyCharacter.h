// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyCharacter.generated.h"

UCLASS()
class DODGEBALL_API AEnemyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyCharacter();
	void ThrowDodgeball();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Whether the enemy can see the player this frame
	bool bCanSeePlayer = false;
	//Whether the enemy could see the player last frame
	bool bPreviousCanSeePlayer = false;

	FTimerHandle ThrowTimerHandle;

	float ThrowingInterval = 2.f;
	float ThrowingDelay = 0.5f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = LookAt, meta = (AllowPrivateAccess = "true"))
	class ULookAtActorComponent* LookAtActorComponent;

	//The class used to spawn a dodgeball object
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Dodgeball)
	TSubclassOf<class ADodgeballProjectile> DodgeballClass;

};
