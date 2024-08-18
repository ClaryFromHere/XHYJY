// Fill out your copyright notice in the Description page of Project Settings.

#include "UMG/UserFileWidget.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"



void UUserFileWidget::InitWidget()
{
	Super::InitWidget();

	VDGM->UserFileInfo();

	Button_Rules->OnClicked.AddDynamic(this,&UUserFileWidget::Rules);
	Button_History->OnClicked.AddDynamic(this,&UUserFileWidget::HistoryTasks);

//	Button_Task->OnClicked.AddDynamic(this,&UUserFileWidget::TakeTask);
	
	// TextBlock_IDname=
	// TextBlock_Gender=
	// TextBlock_Accomplishment=
	// TextBlock_Grades=
	// TextBlock_HTQNumbers=
			
}

void UUserFileWidget::TakeTask()
{
	this->SetVisibility(ESlateVisibility::Collapsed);
	VDHUD->WidgetCreate(EUIWidget::UI_TakeTask, VDGM->GetUIMap()[EUIWidget::UI_TakeTask]);
}

void UUserFileWidget::HistoryTasks()
{
	this->SetVisibility(ESlateVisibility::Collapsed);
	VDHUD->WidgetCreate(EUIWidget::UI_HistoryTasks, VDGM->GetUIMap()[EUIWidget::UI_HistoryTasks], true);
}

void UUserFileWidget::Rules()
{
	this->SetVisibility(ESlateVisibility::Collapsed);
	VDHUD->WidgetCreate(EUIWidget::UI_Rules, VDGM->GetUIMap()[EUIWidget::UI_Rules]);
                           
}



