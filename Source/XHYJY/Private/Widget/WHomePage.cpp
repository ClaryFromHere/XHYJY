// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/WHomePage.h"
#include "MediaPlayer.h"
#include "Manage/ResourceManager.h"

void UWHomePage::InitWidget()
{
	Super::InitWidget();
	
	if(EarthMedia and ResourceManager->MediaSource)
	{
		EarthMedia->OpenSource(ResourceManager->MediaSource);
	}
}
