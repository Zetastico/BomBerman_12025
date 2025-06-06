// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Builder/Builder_Main.h"
#include "Factory/Factory_Main.h"
#include "Bloque_Facade.generated.h"
UCLASS()
class BOMBERMAN_012025_API ABloque_Facade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloque_Facade();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Creamos el factory que se encargara de crear las bombas
	AFactory_Main* Factory;
	//Creamos el builder que se encargara de construir el mapa
	ABuilder_Main* Builder;

private:
	UPROPERTY(VisibleAnywhere)
	// Componente de colisión que detecta el overlap
	class UBoxComponent* TriggerBox;

	// Método que se llama cuando comienza el overlap
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);

	//Los diferentes niveles que se pueden activar
	void Activar_Nivel_Facil();
	void Activar_Nivel_Medio();
	void Activar_Nivel_Dificil();

	// Variable para controlar si el bloque ya ha sido activado
	bool bActivado = false;

	//Malla del bloque
	UStaticMeshComponent* Mesh;
};
