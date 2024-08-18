// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG/HistoryTasks.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"


void UHistoryTasks::InitWidget()
{
	Super::InitWidget();

	TextBlock_UnlockNum->SetText(FText::AsNumber(UnlockNum));
	Button_Return->OnClicked.AddDynamic(this, &UHistoryTasks::ReturnUserFileWidget);
	
	InitialChildren();

}

void UHistoryTasks::InitialChildren()
{
	VDHUD->WidgetCreate(EUIWidget::UI_InfoColumn,VDGM->GetUIMap()[EUIWidget::UI_InfoColumn]);
}

void UHistoryTasks::ReturnUserFileWidget()
{
	UBaseWidget* CurrentWidget = VDHUD->GetWidgetFromMap(VDHUD->PreWidgetType);

	if(CurrentWidget)
	{
		this->SetVisibility(ESlateVisibility::Collapsed);
		CurrentWidget->SetVisibility(ESlateVisibility::Visible);
	}
}

