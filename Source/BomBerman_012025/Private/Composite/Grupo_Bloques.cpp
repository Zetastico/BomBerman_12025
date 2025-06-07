// Fill out your copyright notice in the Description page of Project Settings.


#include "Composite/Grupo_Bloques.h"
#include "Composite/Bloque_Base_Composite.h"

AGrupo_Bloques::AGrupo_Bloques()
{
}

// M�todo que se llama para afectar por explosi�n
void AGrupo_Bloques::AfectarPorExplosion()
{
	//Como es un grupo de bloques, llama a los bloques individuales que estan dentro de este grupo
    for (ABloque_Base_Composite* Bloque : Hijos)
    {
        if (IsValid(Bloque))
        {
            Bloque->AfectarPorExplosion();
        }
    }
}

//Metodo para agregar bloques, tambien puede a�adir grupos de bloques
void AGrupo_Bloques::AgregarBloque(ABloque_Base_Composite* Bloque)
{
    if (Bloque)
    {
        Hijos.Add(Bloque);
    }
}
