// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloques/Bloque_Madera.h"
#include "Materials/MaterialInterface.h"


ABloque_Madera::ABloque_Madera()
{
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	Mesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaBloqueAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (Mesh) {
		Mesh->SetStaticMesh(MallaBloqueAsset.Object);
		Mesh->SetRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));
	}
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("/Script/Engine.Material'/Game/Wooden_Pack/Material/M_Wood_07.M_Wood_07'"));
	if (ObjetoMaterial.Succeeded())
	{
		Mesh->SetMaterial(0, ObjetoMaterial.Object);
	}

	bEsDestructible = true; // Set the block as destructible by default

}
