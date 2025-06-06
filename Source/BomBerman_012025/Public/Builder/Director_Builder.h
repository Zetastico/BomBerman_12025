// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Builder/Builder_Mapa.h"
#include "Factory/Enemigo_Factory.h"
#include "Director_Builder.generated.h"
UCLASS()
class BOMBERMAN_012025_API ADirector_Builder : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirector_Builder();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Metodo para construir el mapa con un array y cantidad de enemigos
	void ConstruirMapa(TArray<TArray<int>> Mapa, int N_Enemigos);
	//establece el builder que va a usar
	void EstablecerBuilder(AActor* Builder_Mapa, AActor* Fabrica_Enemigo);
	//Get the Lodging of the Builder
	class AMapa_Producto* GetMapa();

private:
	// Variables para el Builder y la Fabrica
	IBuilder_Mapa* BuilderMapa;
	AEnemigo_Factory* FabricaEnemigo;
	int32 RandomNumber;
	int32 Contador_Enemigos = 0; // Contador de enemigos creados
};
