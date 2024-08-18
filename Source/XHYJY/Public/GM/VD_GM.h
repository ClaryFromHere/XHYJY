// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Data/DataType.h"
#include "VD_GM.generated.h"

class UBaseWidget;

UCLASS()
class XHYJY_API AVD_GM : public AGameModeBase
{
	GENERATED_BODY()

	AVD_GM();


protected:
	TSubclassOf<UBaseWidget> LoadUIResources(FString UIPath);

	void InitUIMap();

	TMap<EUIWidget,TSubclassOf<UBaseWidget>> UIMap;

	

public:
	TMap<EUIWidget,TSubclassOf<UBaseWidget>> GetUIMap();

	void UserFileInfo();

	void PersonInfo();
};
