// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG/History_ItemBox.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Styling/SlateBrush.h"


void UHistory_ItemBox::InitWidget()
{
	Super::InitWidget();

	//信息自定义初始
	HTQName="人造卫星";
	HTQ_Type="通信卫星";
	HTQ_Category="东方红一号";
	UTexture* ImageTexture=LoadObject<UTexture>(NULL,TEXT("/Script/Engine.Texture2D'/Game/UMG/HTQ/北斗一号.北斗一号'"));

	Button_ItemBox->OnClicked.AddDynamic(this,&UHistory_ItemBox::ButtonDelegate);
	
	TextBlock_HTQ_Category->SetText(FText::FromString(HTQName));
	TextBlock_HTQ_Type->SetText(FText::FromString("HTQ_Type"));
	const FString HTQSlide="/";
	FString T_HTQName=HTQSlide+HTQ_Category+HTQSlide;
	TextBlock_HTQName->SetText(FText::FromString(T_HTQName));
	Image_HTQ->SetBrushResourceObject(ImageTexture);

	
}

void UHistory_ItemBox::ButtonDelegate()
{
	
}




