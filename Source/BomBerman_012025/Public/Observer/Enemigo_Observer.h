#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Observer/Suscriptor.h"
#include "AIController.h"
#include "Engine/TargetPoint.h"
#include "NiagaraFunctionLibrary.h"
#include "Enemigo_Observer.generated.h"
UCLASS()
class BOMBERMAN_012025_API AEnemigo_Observer : public ACharacter, public ISuscriptor
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemigo_Observer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	//The Clock Tower of this Subscriber
	UPROPERTY()
	class ABloque_Trampa* BloqueTrampa;

public:

	//Metodo Para actualizar el estado del suscriptor
    virtual void Update(class ANotificador* Publisher) override;

	void Desuscribir();
	
	void SetBloqueTrampa(ABloque_Trampa* myClockTower);


    // Malla estática del cubo
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* Malla;

    // Referencia al jugador
    AActor* PlayerActor;

    // Controlador de IA
    AAIController* AIController;

    // Patrullaje
    UPROPERTY(EditAnywhere, Category = "Patrullaje")
    TArray<ATargetPoint*> PuntosDePatrulla;

    int32 IndicePatrullaActual = 0;

    FTimerHandle TimerEspera;

    UPROPERTY(EditAnywhere, Category = "Patrullaje")
    float TiempoEspera = 2.0f;

    bool bEsperando = false;

    //Nuevo
public:
    //Atributos
    bool bJugadorDetectado = false;
    FTimerHandle TimerReiniciarDeteccion;


    // Tiempo sin ver al jugador antes de reiniciar detección
    static constexpr float TiempoParaReiniciar = 5.0f;

    //--------------------------------------EXPLOSION---------------------------------------------------
protected:

    UPROPERTY(EditAnywhere)
    float TiempoParaExplotar = 4.0f;

    UPROPERTY(EditAnywhere)
    float RangoExplosion = 3;

    FTimerHandle TimerHandle_Explosion;

    UFUNCTION()

    void ActivarExplosion();

    void Explotar();

    void ExplorarEnDireccion(FVector Direccion);

    UPROPERTY(EditAnywhere, Category = "FX")
    UNiagaraSystem* EfectoExplosion;

    bool bExplosionActivada = false;

    bool bJugadorDetectadoBomb = false;

public:
    //Metodos
 // Función para ir al siguiente punto
    void IrAlSiguientePunto();

    //Editar
    void ReanudarPatrulla();
};
