// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BaseManager.h"
#include "ResourceManager.generated.h"

UCLASS()
class XHYJY_API AResourceManager : public ABaseManager
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AResourceManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	void InitRSWidgetMap();
	
public:
	virtual void InitManager() override;
	
	TSubclassOf<UUserWidget> LoadWidgetFile(FString FilePath);

	
public:
	TMap<EWidgetType, TSubclassOf<UUserWidget>> RSWidgetMap;
	
	class UMediaSource* MediaSource;
};
