// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "UserFileWidget.generated.h"

class UButton;
/**
 * 
 */
UCLASS()
class XHYJY_API UUserFileWidget : public UBaseWidget
{
	GENERATED_BODY()

public:
	virtual void InitWidget() override;

protected:
	UPROPERTY(meta=(BindWidget))
	class UTextBlock* TextBlock_IDname;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* TextBlock_Gender;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* TextBlock_Accomplishment;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* TextBlock_Grades;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* TextBlock_HTQNumbers;

	UPROPERTY(meta=(BindWidget))
	UButton* Button_Task;

	UPROPERTY(meta=(BindWidget))
	UButton* Button_History;

	UPROPERTY(meta=(BindWidget))
	UButton* Button_Rules;

	UFUNCTION()
	void TakeTask();

	UFUNCTION()
	void HistoryTasks();

	UFUNCTION()
	void Rules();

};
