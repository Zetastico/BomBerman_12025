// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloques/Bloque_Destruible.h"

ABloque_Destruible::ABloque_Destruible()
{
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	Mesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaBloqueAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (Mesh) {
		Mesh->SetStaticMesh(MallaBloqueAsset.Object);
		Mesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
	}
}

void ABloque_Destruible::BeginPlay()
{
}
