// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RestartrWidget.generated.h"

/**
 * 
 */
UCLASS()
class DODGEBALL_API URestartrWidget : public UUserWidget
{
	GENERATED_BODY()
protected:

	UFUNCTION()
	void OnRestartClicked();
	UFUNCTION()
	void OnExitClicked();
public:
	virtual void NativeOnInitialized() override;
	UPROPERTY(meta = (BindWidget))
	class UButton* RestartButton;
	UPROPERTY(meta = (BindWidget))
	class UButton* ExitButton;
};
