// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloques/Bloque_Muro.h"

///Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Steel.M_Metal_Steel'

ABloque_Muro::ABloque_Muro()
{
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	Mesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaBloqueAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (Mesh) {
		Mesh->SetStaticMesh(MallaBloqueAsset.Object);
		Mesh->SetRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));
	}
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Steel.M_Metal_Steel'"));
	if (ObjetoMaterial.Succeeded())
	{
		Mesh->SetMaterial(0, ObjetoMaterial.Object);
	}

	bEsDestructible = false; // Set the block as destructible by default
	MoveSpeed = 1.0f; // velocidad del movimiento
	Tolerance = 1.0f;   // cuán cerca debe estar para considerar que llegó al destino
}

void ABloque_Muro::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();
	EndLocation = StartLocation + FVector(0, 0, 500); // se moverá 500 unidades en Y
	TargetLocation = EndLocation;
	bEsDestructible = true;
	GetWorld()->GetTimerManager().SetTimer(TimerHandleExplosion, this, &ABloque_Muro::DestruirBloque, DestructionTime, false);

}

void ABloque_Muro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector CurrentLocation = GetActorLocation();
	FVector NewLocation = FMath::VInterpTo(CurrentLocation, TargetLocation, DeltaTime, MoveSpeed);
	SetActorLocation(NewLocation);

	// Si está suficientemente cerca, cambiar dirección
	if (FVector::Dist(NewLocation, TargetLocation) <= Tolerance)
	{
		TargetLocation = (TargetLocation.Equals(EndLocation)) ? StartLocation : EndLocation;
	}
}

void ABloque_Muro::DestruirBloque()
{
	if (bEsDestructible)
	{
		// Destruir el bloque después de un pequeño retardo (por ejemplo, 0.1 segundos)
		Destroy();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Este bloque no es destructible."));
	}
}
