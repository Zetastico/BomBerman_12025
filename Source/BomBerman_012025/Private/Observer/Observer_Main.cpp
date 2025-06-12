// Fill out your copyright notice in the Description page of Project Settings.


#include "Observer/Observer_Main.h"
#include "Observer/Bloque_Trampa.h"
#include "Observer/Enemigo_Observer.h"
// Sets default values
AObserver_Main::AObserver_Main()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AObserver_Main::BeginPlay()
{
	Super::BeginPlay();
	
	// Crear una instancia de Bloque_Trampa
	ABloque_Trampa* BloqueTrampa = GetWorld()->SpawnActor<ABloque_Trampa>(ABloque_Trampa::StaticClass(), FVector(1100, 1000, 0), FRotator::ZeroRotator);

	// Crear instancias de AEnemigo_Observer

	for (int i = 0; i < 5; ++i)
	{
		FVector SpawnLocation = FVector(i * 200.0f+1800, i*200+1000, 0); // Espaciado en el eje X
		AEnemigo_Observer* Enemigo = GetWorld()->SpawnActor<AEnemigo_Observer>(AEnemigo_Observer::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
		if (Enemigo)
		{
			Enemigo->SetBloqueTrampa(BloqueTrampa); // Asignar la trampa al enemigo
		}
	}
}

// Called every frame
void AObserver_Main::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

