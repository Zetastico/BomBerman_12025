// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "2do_Parcial/2P_Prototype/Bloque_Prototype.h"
#include "P_Titilante.generated.h"
UCLASS()
class BOMBERMAN_012025_API AP_Titilante : public AActor, public IBloque_Prototype
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AP_Titilante();

	//Metodo para clonar los bloques de tipo titilante
	//Viene de la interfaz IBloque_Prototype
	virtual UBloque_Prototype* Clone(const FVector& NuevaPosicion) const override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//La malla del bloque
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Mesh;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:

	//Metodos para ocultar y mostrar el bloque
	void OcultarBloque();
	void MostrarBloque();

	//Tiempo visible del bloque
	UPROPERTY(EditAnywhere)
	float TiempoVisible = 4.0f;

	//Tiempo invisible del bloque
	UPROPERTY(EditAnywhere)
	float TiempoInvisible = 4.0f;

	//Control de temporizadores
	FTimerHandle TimerHandle_Disappear;
	FTimerHandle TimerHandle_Reappear;

	//Booleano para controalr es estado del bloque
	bool bTitilar;
	//Tamano del bloque
	float tamanoBloque;
public:

	//Metodo para establecer los parametros del bloque clonado
	void SetParametroClon(const AP_Titilante* OtroBloque);
	//Metodo para establecer los parametros del bloque
	void SetParametros(float TiempoA, float TiempoB, float tamano, bool titilar);
	
};
