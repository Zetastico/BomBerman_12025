// Fill out your copyright notice in the Description page of Project Settings.


#include "Composite/Bloque_Simple.h"

ABloque_Simple::ABloque_Simple()
{
	//Colocamos la malla al bloque
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	Mesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaBloqueAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (Mesh) {
		Mesh->SetStaticMesh(MallaBloqueAsset.Object);
		Mesh->SetRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));
	}
	//Colocamos el material
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("/Script/Engine.Material'/Game/Wooden_Pack/Material/M_Wood_07.M_Wood_07'"));
	if (ObjetoMaterial.Succeeded())
	{
		Mesh->SetMaterial(0, ObjetoMaterial.Object);
	}
}

//Metodo para que afecte la explosion
void ABloque_Simple::AfectarPorExplosion()
{
    if (Tipo == "Destructible")
    {
        UE_LOG(LogTemp, Warning, TEXT("Bloque Destructible: Se destruirá por la explosión."));
        // Destruir el bloque después de un pequeño retardo (por ejemplo, 0.1 segundos)
        GetWorld()->GetTimerManager().SetTimer(TimerHandleExplosion, this, &ABloque_Simple::DestruirBloque, 3.0f, false);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Bloque Sólido: No se afecta por la explosión."));
    }
}

//Destruir el bloque
void ABloque_Simple::DestruirBloque()
{
    Destroy();
}
