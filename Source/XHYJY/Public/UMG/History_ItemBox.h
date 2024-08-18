// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "UMG/BaseWidget.h"
#include "History_ItemBox.generated.h"

/**
 * 
 */
UCLASS()
class XHYJY_API UHistory_ItemBox : public UBaseWidget,public IUserObjectListEntry
{
	GENERATED_BODY()

	virtual void InitWidget() override;

	UPROPERTY(meta=(BindWidget))
	class UButton* Button_ItemBox;
	
	UPROPERTY(meta=(BindWidget))
	class UTextBlock* TextBlock_HTQ_Category;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* TextBlock_HTQ_Type;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* TextBlock_HTQName;

	UPROPERTY(meta=(BindWidget))
    class UImage* Image_HTQ;

	
	
	 
	FString HTQName;
	FString HTQ_Type;
	FString HTQ_Category;
	
	
	void ButtonDelegate();



		
	
};
