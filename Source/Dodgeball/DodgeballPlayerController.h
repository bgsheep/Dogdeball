// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DodgeballPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class DODGEBALL_API ADodgeballPlayerController : public APlayerController
{
	GENERATED_BODY()
	UPROPERTY()
	class URestartrWidget* RestartWidget;
	UPROPERTY()
	class UHUDWidget* HUDWidget;
	
public:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class URestartrWidget> BP_RestartWidget;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UHUDWidget> BP_HUDWidget;

	void ShowRestartWidget();
	void HideRestartWidget();

	void UpdateHealthPercent(float HealthPercent);

protected:
	virtual void BeginPlay() override;
};
