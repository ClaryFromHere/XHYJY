// Fill out your copyright notice in the Description page of Project Settings.


#include "Manage/ResourceManager.h"
#include "MediaSource.h"


// Sets default values
AResourceManager::AResourceManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	InitRSWidgetMap();
	ConstructorHelpers::FObjectFinder<UMediaSource> Media(TEXT("'/Game/VD/UMG/Homepage/MediaVideo/Earth.Earth'"));
	MediaSource = Media.Object;
}

// Called when the game starts or when spawned
void AResourceManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AResourceManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AResourceManager::InitRSWidgetMap()
{
	RSWidgetMap.Add(EWidgetType::EWT_HomePage, LoadWidgetFile(TEXT("'/Game/VD/UMG/WBP_HomePage.WBP_HomePage_C'")));
}

void AResourceManager::InitManager()
{
	Super::InitManager();
	
}

TSubclassOf<UUserWidget> AResourceManager::LoadWidgetFile(FString FilePath)
{
	return ConstructorHelpers::FClassFinder<UUserWidget>(*FilePath).Class;
}

