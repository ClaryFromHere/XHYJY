// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widget/BaseWidget.h"
#include "WHomePage.generated.h"

/**
 * 
 */
UCLASS()
class XHYJY_API UWHomePage : public UBaseWidget
{
	GENERATED_BODY()

public:
	virtual void InitWidget() override;

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UMediaPlayer* EarthMedia;
	
};
