// Fill out your copyright notice in the Description page of Project Settings.


#include "2do_Parcial/2P_Prototype/P_Madera.h"

// Sets default values
AP_Madera::AP_Madera()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Le damos malla al bloque
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	Mesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaBloqueAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (Mesh) {
		Mesh->SetStaticMesh(MallaBloqueAsset.Object);
		Mesh->SetRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));
	}
	//Le damos material al bloque
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("/Script/Engine.Material'/Game/Wooden_Pack/Material/M_Wood_07.M_Wood_07'"));
	if (ObjetoMaterial.Succeeded())
	{
		Mesh->SetMaterial(0, ObjetoMaterial.Object);
	}

}

//Metodo para clonar los bloques de tipo madera
UBloque_Prototype* AP_Madera::Clone(const FVector& NuevaPosicion) const
{
	UWorld* World = GetWorld();
	if (!World) return nullptr;

	FActorSpawnParameters SpawnParams;

	//Spawneamos un nuevo bloque en la posicion indicada
	AP_Madera* NuevoBloque = World->SpawnActor<AP_Madera>(GetClass(), NuevaPosicion, GetActorRotation(), SpawnParams);

	if (NuevoBloque)
	{
		//Clonamos los parametros del bloque original al nuevo bloque
		NuevoBloque->SetParametroClon(this);
		//Devolvemos el nuevo bloque como un UBloque_Prototype
		return Cast<UBloque_Prototype>(NuevoBloque);
	}

	return nullptr;
}

// Called when the game starts or when spawned
void AP_Madera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AP_Madera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//Metodo para establecer los parametros del bloque clonado
void AP_Madera::SetParametroClon(const AP_Madera* OtroBloque)
{
	if (Mesh)
	{
		Mesh->SetRelativeScale3D(FVector(OtroBloque->tamanoBloque, OtroBloque->tamanoBloque, OtroBloque->tamanoBloque));
	}
}

//Metodo para establecer los parametros del bloque original
void AP_Madera::SetParametros(float tamano)
{
	tamanoBloque = tamano;
	Mesh->SetRelativeScale3D(FVector(tamanoBloque, tamanoBloque, tamanoBloque));
}

