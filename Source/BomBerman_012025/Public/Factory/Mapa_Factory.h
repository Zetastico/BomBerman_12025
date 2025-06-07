// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloqueBase.h"
#include "Mapa_Factory.generated.h"
UCLASS()
class BOMBERMAN_012025_API AMapa_Factory : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMapa_Factory();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame0
	virtual void Tick(float DeltaTime) override;

	//Crea el bloque de un tipo especifico y en una ubicación específica
	ABloqueBase* CrearBloque(FString tipo, FVector Pos);
};
