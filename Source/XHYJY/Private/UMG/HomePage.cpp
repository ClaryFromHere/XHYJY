// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG/HomePage.h"
#include "Components/Button.h"
#include "Components/Overlay.h"
#include "GM/VD_HUD.h"

void UHomePage::InitWidget()
{
	Super::InitWidget();
	Overlay_Start->SetVisibility(ESlateVisibility::Collapsed);
	StartButton->OnClicked.AddDynamic(this,&UHomePage::ButtonOnClicked);
}

void UHomePage::StartGame()
{
	Overlay_Start->SetVisibility(ESlateVisibility::Visible);
}



void UHomePage::ButtonOnClicked()
{
	this->SetVisibility(ESlateVisibility::Collapsed);//Widget
	VDHUD->WidgetCreate(EUIWidget::UI_UserWidget,VDGM->GetUIMap()[EUIWidget::UI_UserWidget]);
	
}