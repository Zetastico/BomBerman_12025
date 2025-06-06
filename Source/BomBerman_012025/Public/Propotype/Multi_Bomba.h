// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bomba_Prototype.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "Multi_Bomba.generated.h"

USTRUCT(BlueprintType)
struct FBombaData
{
	GENERATED_BODY()
	//atributo del tiempo para explotar
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TiempoParaExplotar = 2.0f;
	//Atributo para el rango de la bomba
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RangoExplosion = 3.0f;
};

UCLASS()
class BOMBERMAN_012025_API AMulti_Bomba : public AActor, public IBomba_Prototype
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMulti_Bomba();

	//Metodo clonar de la interfaz
	virtual UBomba_Prototype* Clone() const override;

	//Metodo para aplicar los datos de la bomba desde otra bomba
	void AplicarDatos(const FBombaData& Datos);

	//Metodo para obtener los datos de la bomba
	const FBombaData& ObtenerDatos() const { return DatosBomba; }

protected:
	virtual void BeginPlay() override;

	//Atributos para la bomba
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* EfectoExplosion;

	UPROPERTY(EditAnywhere)
	FBombaData DatosBomba;

	FTimerHandle TimerHandle_Explosion;

	//Metodos propios de la bomba
	void PrepararExplosion();
	void Explotar();
	void ExplorarEnDireccion(FVector Direccion);

public:
	virtual void Tick(float DeltaTime) override;
};
