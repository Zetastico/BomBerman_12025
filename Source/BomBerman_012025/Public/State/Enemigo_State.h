// Fill out your copyright notice in the Description page of Pr
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "State/State.h"
#include "AIController.h"
#include "Engine/TargetPoint.h"
#include "Enemigo_State.generated.h"
UCLASS()
class BOMBERMAN_012025_API AEnemigo_State : public ACharacter
{
	GENERATED_BODY()

public:
    AEnemigo_State();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    //Propio del enemigo
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* Malla;

    AActor* PlayerActor;
    AAIController* AIController;

    UPROPERTY(EditAnywhere, Category = "Patrullaje")
    TArray<ATargetPoint*> PuntosDePatrulla;

    int32 IndicePatrullaActual = 0;
    FTimerHandle TimerEspera;

    UPROPERTY(EditAnywhere, Category = "Patrullaje")
    float TiempoEspera = 2.0f;

    bool bEsperando = false;
    bool bJugadorDetectado = false;

    void IrAlSiguientePunto();

    UFUNCTION()
    void OnOverlapJugador(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
        bool bFromSweep, const FHitResult& SweepResult);


    //Patron State

    void Iniciar();

    IState* SAtacar;
	IState* SPatrullar;
    void CambiarEstado(IState* NuevoEstado);

    IState* GetSAtacar();
	IState* GetSPatrullar();
private:
    IState* EstadoActual;
};