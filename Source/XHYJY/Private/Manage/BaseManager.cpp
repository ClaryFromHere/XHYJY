// Fill out your copyright notice in the Description page of Project Settings.


#include "Manage/BaseManager.h"

#include "Kismet/GameplayStatics.h"

// Sets default values
ABaseManager::ABaseManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseManager::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABaseManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseManager::InitManager()
{
	if (AVDPawn* Pawn = Cast<AVDPawn>(UGameplayStatics::GetPlayerPawn(this->GetWorld(), 0)))
	{
		VDPawn			= Pawn;
		ResourceManager = Pawn->ResourceManager;
		WidgetManager	= Pawn->WidgetManager;
	}
}

