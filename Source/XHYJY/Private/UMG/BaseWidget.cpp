// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG/BaseWidget.h"

#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UBaseWidget::InitWidget()
{
	VDHUD=Cast<AVD_HUD>(UGameplayStatics::GetPlayerController(this,0)->GetHUD());
	VDGM=Cast<AVD_GM>(UGameplayStatics::GetGameMode(this));

	if (GetButtonReturn())
	{
		GetButtonReturn()->OnClicked.AddDynamic(this,&UBaseWidget::ReturnWidget);
	}
	
}

void UBaseWidget::ReturnWidget()
{
	this->SetVisibility(ESlateVisibility::Collapsed);
	UE_LOG(LogTemp,Log,TEXT("Clicked"))
	
}



