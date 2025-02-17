// Fill out your copyright notice in the Description page of Project Settings.


#include "RestartrWidget.h"
#include <Kismet/GameplayStatics.h>
#include "Components/Button.h"
#include "DodgeballPlayerController.h"


void URestartrWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	if (RestartButton != nullptr)
	{
		RestartButton->OnClicked.AddDynamic(this, &URestartrWidget::OnRestartClicked);
	}

	if (ExitButton != nullptr)
	{
		ExitButton->OnClicked.AddDynamic(this, &URestartrWidget::OnExitClicked);
	}
}

void URestartrWidget::OnRestartClicked()
{
	ADodgeballPlayerController* PlayerController = Cast<ADodgeballPlayerController>(GetOwningPlayer());
	if (PlayerController != nullptr)
	{
		PlayerController->HideRestartWidget();
	}
	UGameplayStatics::OpenLevel(this, FName(*UGameplayStatics::GetCurrentLevelName(this)));
}

void URestartrWidget::OnExitClicked()
{
	UKismetSystemLibrary::QuitGame(this,
		nullptr,
		EQuitPreference::Quit,
		true);
}