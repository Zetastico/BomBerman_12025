// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloqueBase.h"
#include "Mapa_Producto.generated.h"
UCLASS()
class BOMBERMAN_012025_API AMapa_Producto : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMapa_Producto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Método para añadir un bloque al mapa
	void AnadirBloque(ABloqueBase* NuevoBloque);


private:
	UPROPERTY()
	// Lista de bloques que componen el mapa
	TArray<ABloqueBase*> Bloques;
};
