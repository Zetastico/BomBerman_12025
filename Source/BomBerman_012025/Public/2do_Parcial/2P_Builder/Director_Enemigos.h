// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "2do_Parcial/2P_Builder/Builder_Enemigos.h"
#include "Director_Enemigos.generated.h"
UCLASS()
class BOMBERMAN_012025_API ADirector_Enemigos : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirector_Enemigos();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	IBuilder_Enemigos* BuilderEnemigos;

	int Contador_Enemigos = 0;
	int RandomNumber;
	int Comandante = 0;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ConstruirEnemigos(TArray<TArray<int>> Mapa, int N_Enemigos);
	//Set the Builder Actor
	void EstablecerBuilder(AActor* Builder_Enemigos);

};
