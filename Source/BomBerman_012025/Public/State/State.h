// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "State.generated.h"
class AEnemigo_State;
UINTERFACE(MinimalAPI)
class UState : public UInterface
{
	GENERATED_BODY()
};

class BOMBERMAN_012025_API IState
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaTime) = 0;
	virtual void Activar() = 0;
	//virtual void OnExit() = 0;

	virtual void SetEnemigoState(class AEnemigo_State* Enemigo) = 0;
};
