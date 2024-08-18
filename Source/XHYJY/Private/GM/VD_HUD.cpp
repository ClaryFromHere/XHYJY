// Fill out your copyright notice in the Description page of Project Settings.


#include "GM/VD_HUD.h"
#include "Kismet/GameplayStatics.h"
#include "UMG/HomePage.h"



void AVD_HUD::BeginPlay()
{
	Super::BeginPlay();

	VDGameMode=Cast<AVD_GM>(UGameplayStatics::GetGameMode(this));
	if(VDGameMode)
	{
		WidgetCreate(EUIWidget::UI_HomePage,VDGameMode->GetUIMap()[EUIWidget::UI_HomePage]);

		HPGameStart();
	}
}


void AVD_HUD::WidgetCreate(EUIWidget WidgetType,TSubclassOf<UBaseWidget> UserWidgetClass, bool bIsReturnWidget)
{
	UE_LOG(LogTemp, Log, TEXT("AAAA"))
	if(bIsReturnWidget)
	{
		PreWidgetType = CurrentWidgetType;
	}

	
	CurrentWidgetType = WidgetType;
	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), UserWidgetClass);
	UBaseWidget* UIWidget = Cast<UBaseWidget>(Widget);
	UIWidget->InitWidget();
	WidgetMap.Add(WidgetType, UIWidget);
	UIWidget->AddToViewport();	
}

void AVD_HUD::HPGameStart()
{
	UHomePage* HP = Cast<UHomePage>(WidgetMap[EUIWidget::UI_HomePage]);
	//----扫码成功游戏启动
	
	if(HP)
	{
		HP->StartGame();
	}
}

UBaseWidget* AVD_HUD::GetWidgetFromMap(EUIWidget UIType)
{
	return *WidgetMap.Find(UIType);
}
