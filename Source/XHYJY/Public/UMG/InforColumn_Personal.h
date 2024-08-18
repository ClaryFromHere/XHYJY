// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UMG/BaseWidget.h"
#include "InforColumn_Personal.generated.h"

/**
 * 
 */
UCLASS()
class XHYJY_API UInforColumn_Personal : public UBaseWidget
{
	GENERATED_BODY()

public:
	
	virtual void InitWidget() override;

	UPROPERTY(meta=(BindWidget))
	class UTextBlock* TextBlock_IDname;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* TextBlock_Accomplishment;

	UPROPERTY(meta=(BindWidget))
	class UWidgetSwitcher* WidgetSwitcher_1;

	UPROPERTY(meta=(BindWidget))
	UWidgetSwitcher* WidgetSwitcher_2;

	UPROPERTY(meta=(BindWidget))
	UWidgetSwitcher* WidgetSwitcher_3;

	UPROPERTY(meta=(BindWidget))
	UWidgetSwitcher* WidgetSwitcher_4;

	UPROPERTY(meta=(BindWidget))
	UWidgetSwitcher* WidgetSwitcher_5;

	UPROPERTY(meta=(BindWidget))
	UWidgetSwitcher* WidgetSwitcher_6;

	UPROPERTY(meta=(BindWidget))
	UWidgetSwitcher* WidgetSwitcher_7;
	
	void Loading(int num);
};
