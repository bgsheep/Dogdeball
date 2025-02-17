// Fill out your copyright notice in the Description page of Project Settings.


#include "DodgeballPlayerController.h"
#include "HUDWidget.h"
#include "RestartrWidget.h"

void ADodgeballPlayerController::ShowRestartWidget()
{
	if (BP_RestartWidget != nullptr)
	{
		SetPause(true); //游戏停止
		SetInputMode(FInputModeUIOnly()); //只让控件接受玩家输入，而玩家角色不接受输入
		bShowMouseCursor = true;
		RestartWidget = CreateWidget<URestartrWidget>(this, BP_RestartWidget);
		RestartWidget->AddToViewport(); //按钮添加到屏幕
	}
}


void ADodgeballPlayerController::HideRestartWidget()
{
	RestartWidget->RemoveFromParent();
	RestartWidget->Destruct();
	SetPause(false);
	SetInputMode(FInputModeGameOnly());
	bShowMouseCursor = false;
}

void ADodgeballPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (BP_HUDWidget != nullptr)
	{
		HUDWidget = CreateWidget<UHUDWidget>(this, BP_HUDWidget);
		HUDWidget->AddToViewport();
	}
}

void ADodgeballPlayerController::UpdateHealthPercent(float HealthPercent)
{
	if (HUDWidget != nullptr)
	{
		HUDWidget->UpdateHealthPercent(HealthPercent);
	}
}