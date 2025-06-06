// Fill out your copyright notice in the Description page of Project Settings.


#include "Builder/Mapa_Producto.h"

// Sets default values
AMapa_Producto::AMapa_Producto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMapa_Producto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMapa_Producto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//Metodo para guardar todos los bloques generados
void AMapa_Producto::AnadirBloque(ABloqueBase* NuevoBloque)
{

	if (NuevoBloque)
	{
		Bloques.Add(NuevoBloque);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Error: NuevoBloque is NULL"));
	}

}

