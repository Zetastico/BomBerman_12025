// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "State/State.h"
#include "StateAtacar.generated.h"
UCLASS()
class BOMBERMAN_012025_API AStateAtacar : public AActor, public IState
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AStateAtacar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
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
