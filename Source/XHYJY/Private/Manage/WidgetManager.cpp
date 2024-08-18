// Fill out your copyright notice in the Description page of Project Settings.


#include "Manage/WidgetManager.h"
#include "Manage/ResourceManager.h"

// Sets default values
AWidgetManager::AWidgetManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWidgetManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWidgetManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWidgetManager::InitManager()
{
	Super::InitManager();

	UBaseWidget* Widget = CreateVDWidget(EWidgetType::EWT_HomePage);
	Widget->InitWidget();
	WidgetMap.Add(EWidgetType::EWT_HomePage, Widget);
	Widget->AddToViewport(0);
}

UBaseWidget* AWidgetManager::CreateVDWidget(EWidgetType WidgetType)
{
	return CreateWidget<UBaseWidget>(GetWorld(), ResourceManager->RSWidgetMap[WidgetType]);
}

