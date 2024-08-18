// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VD_GM.h"
#include "GameFramework/HUD.h"
#include "VD_HUD.generated.h"

/**
 * 
 */
UCLASS()
class XHYJY_API AVD_HUD : public AHUD
{
	GENERATED_BODY()

public:
	void WidgetCreate(EUIWidget WidgetType, TSubclassOf<UBaseWidget> UserWidgetClass, bool bIsReturnWidget = false);

	void HPGameStart();

	UBaseWidget* GetWidgetFromMap(EUIWidget UIType);
	
protected:
	virtual void BeginPlay() override;
	
	AVD_GM* VDGameMode;

	TMap<EUIWidget, UBaseWidget*> WidgetMap;

public:
	EUIWidget PreWidgetType = EUIWidget::UI_None;

	EUIWidget CurrentWidgetType = EUIWidget::UI_None;
};
