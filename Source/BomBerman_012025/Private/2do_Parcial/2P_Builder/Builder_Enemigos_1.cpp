// Fill out your copyright notice in the Description page of Project Settings.


#include "2do_Parcial/2P_Builder/Builder_Enemigos_1.h"
#include "Factory/Enemigo_Factory.h"
#include "2do_Parcial/2P_Builder/Ejercito_Producto.h"
// Sets default values
ABuilder_Enemigos_1::ABuilder_Enemigos_1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABuilder_Enemigos_1::BeginPlay()
{
	Super::BeginPlay();
	EjercitoConstruido = GetWorld()->SpawnActor<AEjercito_Producto>(AEjercito_Producto::StaticClass());
	
}

// Called every frame
void ABuilder_Enemigos_1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABuilder_Enemigos_1::ColocarEnemigosBomba(FVector pos)
{
	Fabrica->CrearEnemigo(pos, "EnemigoBomb");
}

void ABuilder_Enemigos_1::ColocarEnemigoComandante(FVector pos)
{
	Fabrica->CrearEnemigo(pos, "Comandante");
}

void ABuilder_Enemigos_1::ColocarEnemigosRapido(FVector pos)
{
	Fabrica->CrearEnemigo(pos, "EnemigoRapido");
}

void ABuilder_Enemigos_1::SetFabrica(AEnemigo_Factory* NuevaFabrica)
{
	Fabrica = NuevaFabrica;
}

AEjercitoProducto* ABuilder_Enemigos_1::GetEjercito()
{
	return nullptr;
}



