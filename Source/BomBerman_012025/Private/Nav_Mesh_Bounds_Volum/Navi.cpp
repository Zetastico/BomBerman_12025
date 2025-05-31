// Fill out your copyright notice in the Description page of Project Settings.


#include "Nav_Mesh_Bounds_Volum/Navi.h"
#include "Components/BrushComponent.h"
ANavi::ANavi()
{
    // Por si quieres definir un tamaño por defecto (opcional)
    if (GetBrushComponent())
    {
        SetActorScale3D(FVector(4.f, 4.f, 1.f)); // Aumenta el volumen en X e Y (500x4 = 2000)
    }
}

void ANavi::BeginPlay()
{
	Super::BeginPlay();
}
