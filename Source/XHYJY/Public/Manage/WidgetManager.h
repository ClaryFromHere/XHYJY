// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BaseManager.h"
#include "WidgetManager.generated.h"

class UBaseWidget;

UCLASS()
class XHYJY_API AWidgetManager : public ABaseManager
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWidgetManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	
	
public:
	void InitManager() override;
	
	UBaseWidget* CreateVDWidget(EWidgetType WidgetType);

public:
	TMap<EWidgetType, UBaseWidget*> WidgetMap;
	
};
