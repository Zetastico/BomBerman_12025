// Fill out your copyright notice in the Description page of Project Settings.


#include "2do_Parcial/2P_Prototype/P_Muro.h"

// Sets default values
AP_Muro::AP_Muro()
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
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Steel.M_Metal_Steel'"));
	if (ObjetoMaterial.Succeeded())
	{
		Mesh->SetMaterial(0, ObjetoMaterial.Object);
	}

}

//Metodo para clonar los bloques de tipo muro
UBloque_Prototype* AP_Muro::Clone(const FVector& NuevaPosicion) const
{
	UWorld* World = GetWorld();
	if (!World) return nullptr;

	FActorSpawnParameters SpawnParams;

	//Spawneamos un nuevo bloque en la posicion indicada
	AP_Muro* NuevoBloque = World->SpawnActor<AP_Muro>(GetClass(), NuevaPosicion, GetActorRotation(), SpawnParams);

	if (NuevoBloque)
	{
		//Clonamos los parametros del bloque original al nuevo bloque
		NuevoBloque->SetParametroClon(this);
		//Devolvemos el nuevo bloque como un UBloque_Prototype
		return Cast<UBloque_Prototype>(NuevoBloque);
	}

	//Si no se pudo crear el bloque, devolvemos nullptr
	return nullptr;
}

// Called when the game starts or when spawned
void AP_Muro::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AP_Muro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//Metodo para establecer los parametros del bloque clonado
void AP_Muro::SetParametroClon(const AP_Muro* OtroBloque)
{
	if (Mesh)
	{
		Mesh->SetRelativeScale3D(FVector(OtroBloque->tamanoBloque, OtroBloque->tamanoBloque, OtroBloque->tamanoBloque));
	}
}

//Metodo para establecer los parametros del bloque original
void AP_Muro::SetParametros(float tamano)
{
	tamanoBloque = tamano;
	Mesh->SetRelativeScale3D(FVector(tamanoBloque, tamanoBloque, tamanoBloque));
}

