// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "2do_Parcial/2P_Builder/Builder_Enemigos.h"
#include "Builder_Enemigos_1.generated.h"
UCLASS()
class BOMBERMAN_012025_API ABuilder_Enemigos_1 : public AActor, public IBuilder_Enemigos
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuilder_Enemigos_1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void ColocarEnemigosBomba(FVector pos) override;
	virtual void ColocarEnemigoComandante(FVector pos) override;
	virtual void ColocarEnemigosRapido(FVector pos) override;
	virtual void SetFabrica(class AEnemigo_Factory* NuevaFabrica) override;
	virtual class AEjercitoProducto* GetEjercito() override;

	UPROPERTY()
	class AEjercito_Producto* EjercitoConstruido;


	UPROPERTY()
	class AEnemigo_Factory* Fabrica;

};
