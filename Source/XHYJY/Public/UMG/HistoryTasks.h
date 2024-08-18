// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UMG/BaseWidget.h"
#include "HistoryTasks.generated.h"


UCLASS()
class XHYJY_API UHistoryTasks : public UBaseWidget
{
	GENERATED_BODY()

public:
	virtual void InitWidget() override;

	void InitialChildren();

	UFUNCTION()
	void ReturnUserFileWidget();


public:
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* TextBlock_UnlockNum;

	int8 UnlockNum=2;

	UPROPERTY(meta = (BindWidget))
	class UButton* Button_Return;
};
