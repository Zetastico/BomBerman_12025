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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TiempoParaExplotar = 2.0f;

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

	virtual UBomba_Prototype* Clone() const override;

	void AplicarDatos(const FBombaData& Datos);
	const FBombaData& ObtenerDatos() const { return DatosBomba; }

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* EfectoExplosion;

	UPROPERTY(EditAnywhere)
	FBombaData DatosBomba;

	FTimerHandle TimerHandle_Explosion;

	void PrepararExplosion();
	void Explotar();
	void ExplorarEnDireccion(FVector Direccion);

public:
	virtual void Tick(float DeltaTime) override;
};
