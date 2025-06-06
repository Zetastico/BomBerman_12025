// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Builder_Enemigos.generated.h"

UINTERFACE(MinimalAPI)
class UBuilder_Enemigos : public UInterface
{
	GENERATED_BODY()
};

class BOMBERMAN_012025_API IBuilder_Enemigos
{
	GENERATED_BODY()

public:

	virtual void ColocarEnemigosBomba(FVector pos) = 0;
	virtual void ColocarEnemigoComandante(FVector pos) = 0;
	virtual void ColocarEnemigosRapido(FVector pos) = 0;
	virtual void SetFabrica(class AEnemigo_Factory* NuevaFabrica) = 0;

	virtual class AEjercitoProducto* GetEjercito() = 0;


};
