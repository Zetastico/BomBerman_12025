// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Builder/Builder_Mapa.h"
#include "Factory/Mapa_Factory.h"
#include "Builder_Mapa_Bosque.generated.h"
UCLASS()
class BOMBERMAN_012025_API ABuilder_Mapa_Bosque : public AActor, public IBuilder_Mapa
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuilder_Mapa_Bosque();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Crear instancia de mapa (Actor, UObject, lo que uses)

	//Metodos de la interfaz que construye el mapa
	virtual void ConstruirMuros(FVector pos) override;
	virtual void ConstruirBloques(FVector pos) override;
	virtual void ConstruirPuertas(FVector pos) override;
	virtual void ConstruirObstaculos(FVector pos) override;
	virtual class AMapa_Producto* GetMapa() override;

private:

	//Producto del Builder
	UPROPERTY()
	class AMapa_Producto* MapaConstruido;

	//Factory que se encargara de crear los bloques
	UPROPERTY()
	class AMapa_Factory* Fabrica;

public:

	// Asignamos que fabrica (factory) va a usar el builder
	virtual void SetFabrica(AMapa_Factory* NuevaFabrica) override;
};
