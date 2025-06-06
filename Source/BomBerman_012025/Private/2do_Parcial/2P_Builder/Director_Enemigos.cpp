// Fill out your copyright notice in the Description page of Project Settings.


#include "2do_Parcial/2P_Builder/Director_Enemigos.h"
#include "Factory/Enemigo_Factory.h"
// Sets default values
ADirector_Enemigos::ADirector_Enemigos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirector_Enemigos::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirector_Enemigos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADirector_Enemigos::ConstruirEnemigos(TArray<TArray<int>> Mapa, int N_Enemigos)
{
	if (BuilderEnemigos) //Check if BuilderMapa is not null
	{
		AEnemigo_Factory* Fabrica = GetWorld()->SpawnActor<AEnemigo_Factory>();
		BuilderEnemigos->SetFabrica(Fabrica);

		for (int i = 0; i < Mapa.Num(); i++) {
			for (int j = 0; j < Mapa[i].Num(); j++) {
				switch (Mapa[i][j]) {
				case 0:
					if (Contador_Enemigos <= N_Enemigos) {
						Contador_Enemigos++;
						RandomNumber = FMath::RandRange(1, 3);
						if (RandomNumber == 1) {
							BuilderEnemigos->ColocarEnemigosRapido(FVector(i * 200, 150.0f + j * 200, -10.0f));
						}
						else if (RandomNumber == 2) {
							if (Comandante == 0) {
								Comandante = 1;
								BuilderEnemigos->ColocarEnemigoComandante(FVector(i * 200, 150.0f + j * 200, -10.0f));
							}
						}
						else {
							BuilderEnemigos->ColocarEnemigosBomba(FVector(i * 200, 150.0f + j * 200, -10.0f));
						}
					}
					break;
				}
			}
		}
	}
	else //Log if the Builder is NULL
	{
		UE_LOG(LogTemp, Error, TEXT("BuilderMapa is NULL"));
	}
}

void ADirector_Enemigos::EstablecerBuilder(AActor* Builder_Enemigos)
{
	BuilderEnemigos = Cast<IBuilder_Enemigos>(Builder_Enemigos);
	if (!BuilderEnemigos) //Log Error if cast fails
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to cast to IBuilder_Mapa"));
	}
}

AEjercito_Producto* ADirector_Enemigos::GetEjercito()
{
	return nullptr;
}

