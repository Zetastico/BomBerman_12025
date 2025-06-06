// Fill out your copyright notice in the Description page of Project Settings.


#include "2do_Parcial/2P_Builder/Ejercito_Producto.h"

// Sets default values
AEjercito_Producto::AEjercito_Producto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEjercito_Producto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEjercito_Producto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEjercito_Producto::AnadirEnemigo(AEnemigo* NuevoEnemigo)
{
	if (NuevoEnemigo)
	{
		Enemigos.Add(NuevoEnemigo);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Error: NuevoBloque is NULL"));
	}
}
