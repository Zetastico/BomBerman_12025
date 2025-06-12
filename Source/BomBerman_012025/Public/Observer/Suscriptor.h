// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Suscriptor.generated.h"

UINTERFACE(MinimalAPI)
class USuscriptor : public UInterface
{
	GENERATED_BODY()
};
class BOMBERMAN_012025_API ISuscriptor
{
	GENERATED_BODY()
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//The pure virtual functions of the Subscriber
	virtual void Update(class ANotificador* Publisher) = 0;
};
