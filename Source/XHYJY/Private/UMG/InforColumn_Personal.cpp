// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG/InforColumn_Personal.h"

#include "Components/WidgetSwitcher.h"

void UInforColumn_Personal::InitWidget()
{
	Super::InitWidget();

	VDGM->PersonInfo();

}

void UInforColumn_Personal::Loading(int num)
{
	FString Name="WidgetSwitcher_";
	Name.AppendInt(num);
	if(num!=0)
		WidgetSwitcher_1->SetActiveWidgetIndex(1);
	
}
