// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "HomePage.generated.h"

/**
 * 
 */

class UButton;
class UImage;
class UOverlay;

UCLASS()
class XHYJY_API UHomePage : public UBaseWidget
{
	GENERATED_BODY()

public:
	virtual void InitWidget() override;

	void StartGame();
	
protected:
	UPROPERTY(meta=(BindWidget))
	UOverlay* Overlay_Start;
	
	UPROPERTY(meta=(BindWidget))
	UButton* StartButton;

	UFUNCTION()
	void ButtonOnClicked();

	
	

	
};
