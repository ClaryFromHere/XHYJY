// Fill out your copyright notice in the Description page of Project Settings.


#include "GM/VD_GM.h"

#include "GM/VD_HUD.h"
#include "GM/VD_Pawn.h"
#include "GM/VD_PC.h"
#include "Materials/MaterialParameterCollectionInstance.h"
#include "Materials/MaterialParameterCollection.h"
#include "UMG/BaseWidget.h"


AVD_GM::AVD_GM()
{
	PlayerControllerClass=AVD_PC::StaticClass();
	HUDClass=AVD_HUD::StaticClass();
	DefaultPawnClass=AVD_Pawn::StaticClass();

	InitUIMap();


	
}

TSubclassOf<UBaseWidget> AVD_GM::LoadUIResources(FString UIPath)
{
	return ConstructorHelpers::FClassFinder<UBaseWidget>(*UIPath).Class;
}

void AVD_GM::InitUIMap()
{
	UIMap.Add(EUIWidget::UI_HomePage,LoadUIResources(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/UMG/WBP_HomePage.WBP_HomePage_C'")));
	UIMap.Add(EUIWidget::UI_UserWidget,LoadUIResources(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/UMG/WBP_UserFile.WBP_UserFile_C'")));
//	UIMap.Add(EUIWidget::UI_TakeTask,LoadUIResources(TEXT()));
	UIMap.Add(EUIWidget::UI_HistoryTasks,LoadUIResources(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/UMG/WBP_HistoryTasks.WBP_HistoryTasks_C'")));
	UIMap.Add(EUIWidget::UI_Rules,LoadUIResources(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/UMG/WBP_Rules.WBP_Rules_C'")));
	UIMap.Add(EUIWidget::UI_InfoColumn,LoadUIResources(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/UMG/HistoryTasks/PersonInfo/PersonInfoColumn.PersonInfoColumn_C'")));
}

void AVD_GM::UserFileInfo()
{
	//1.性别图片切换
	const UMaterialParameterCollection* GenderM = nullptr;
	UMaterialParameterCollectionInstance* GenPic=nullptr;
	GenderM=LoadObject<UMaterialParameterCollection>(this,TEXT("/Script/Engine.MaterialParameterCollection'/Game/UMG/UserFile/Meidum_Mat.Meidum_Mat'"));
	GenPic = GetWorld()->GetParameterCollectionInstance(GenderM);
	if(GenPic)
		GenPic->SetScalarParameterValue(FName("ManORWoman"),(0.0));


	
}

void AVD_GM::PersonInfo()
{
	
	
}

TMap<EUIWidget, TSubclassOf<UBaseWidget>> AVD_GM::GetUIMap()
{
	return UIMap;
}

