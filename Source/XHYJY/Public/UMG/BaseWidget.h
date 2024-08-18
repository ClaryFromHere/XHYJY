// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GM/VD_HUD.h"
#include "GM/VD_GM.h"
#include "BaseWidget.generated.h"

/**
 * 
 */

UCLASS()
class XHYJY_API UBaseWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void InitWidget();
	
	 AVD_HUD* VDHUD;
	 AVD_GM* VDGM;

	UFUNCTION()
	void ReturnWidget();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	class UButton* GetButtonReturn();
};
