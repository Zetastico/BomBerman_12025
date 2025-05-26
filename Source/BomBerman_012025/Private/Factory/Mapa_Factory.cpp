// Fill out your copyright notice in the Description page of Project Settings.


#include "Factory/Mapa_Factory.h"
#include "Bloques/Bloque_Destruible.h"
#include "Bloques/BloqueTitilante.h"
#include "Bloques/Bloque_Puerta.h"
#include "Bloques/Bloque_Madera.h"
#include "Bloques/Bloque_Muro.h"

// Sets default values
AMapa_Factory::AMapa_Factory()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMapa_Factory::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMapa_Factory::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ABloqueBase* AMapa_Factory::CrearBloque(FString tipo, FVector Pos)
{
	if (tipo == "BloqueBase") {
		return GetWorld()->SpawnActor<ABloque_Destruible>(ABloque_Destruible::StaticClass(), Pos, FRotator::ZeroRotator);
	}
	if (tipo == "BloqueTitilante") {
		return GetWorld()->SpawnActor<ABloqueTitilante>(ABloqueTitilante::StaticClass(), Pos, FRotator::ZeroRotator);
	}
	if (tipo == "BloquePuerta") {
		return GetWorld()->SpawnActor<ABloque_Puerta>(ABloque_Puerta::StaticClass(), Pos, FRotator::ZeroRotator);
	}
	if (tipo == "BloqueMadera") {
		return GetWorld()->SpawnActor<ABloque_Madera>(ABloque_Madera::StaticClass(), Pos, FRotator::ZeroRotator);
	}
	if (tipo == "BloqueMuro") {
		return GetWorld()->SpawnActor<ABloque_Muro>(ABloque_Muro::StaticClass(), Pos, FRotator::ZeroRotator);
	}
	return nullptr;
}

