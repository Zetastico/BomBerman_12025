// Fill out your copyright notice in the Description page of Project Settings.


#include "Factory/Bomba_Factory.h"
#include "Propotype/Multi_Bomba.h"
// Sets default values
ABomba_Factory::ABomba_Factory()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABomba_Factory::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABomba_Factory::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

IBomba_Prototype* ABomba_Factory::CrearBomba(FVector Posicion, FString Tipo)
{
    if (Tipo == "Multi Bomba")
    {
        AActor* NuevaBomba = GetWorld()->SpawnActor<AMulti_Bomba>(AMulti_Bomba::StaticClass(), Posicion, FRotator::ZeroRotator);

        if (IBomba_Prototype* Interfaz = Cast<IBomba_Prototype>(NuevaBomba))
        {
            return Interfaz;
        }
    }

    return nullptr;
}

