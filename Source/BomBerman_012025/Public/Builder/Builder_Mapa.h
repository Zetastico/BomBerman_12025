// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Factory/Mapa_Factory.h"
#include "Builder_Mapa.generated.h"
UINTERFACE(MinimalAPI)
class UBuilder_Mapa : public UInterface
{
	GENERATED_BODY()
};

class BOMBERMAN_012025_API IBuilder_Mapa
{
	GENERATED_BODY()

public:

	virtual void ConstruirMuros(FVector pos) = 0;
	virtual void ConstruirBloques(FVector pos) = 0;
	virtual void ConstruirPuertas(FVector pos) = 0;
	virtual void ConstruirObstaculos(FVector pos) = 0;

	virtual void SetFabrica(AMapa_Factory* NuevaFabrica) = 0;

	virtual class AMapa_Producto* GetMapa() = 0;
};
