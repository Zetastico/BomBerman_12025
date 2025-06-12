// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "State/State.h"
#include "State_Patrullar.generated.h"

UCLASS()
class BOMBERMAN_012025_API AState_Patrullar : public AActor, public IState
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AState_Patrullar();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	//El enemigo al que pertenece este estado
	UPROPERTY()
	class AEnemigo_State* EnemigoState;

	virtual void Activar() override;
	virtual void SetEnemigoState(AEnemigo_State* Enemigo) override;
};
