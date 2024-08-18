// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/BaseWidget.h"
#include "Kismet/GameplayStatics.h"

void UBaseWidget::InitWidget()
{
	if (AVDPawn* Pawn = Cast<AVDPawn>(UGameplayStatics::GetPlayerPawn(this->GetWorld(), 0)))
	{
		VDPawn			= Pawn;
		ResourceManager = Pawn->ResourceManager;
		WidgetManager	= Pawn->WidgetManager;
	}
}
