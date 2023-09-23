/*
Ejercicio opcional 5: Arreglos II
Martín Aburto
Com 2 - 2023
Programacion 1 - Ingenieria en computacion
*/

#include <stdio.h>
#define tamanio 256;
#define tamaniox2 512;
typedef struct Arreglo
{
    int arreglo1[256];
    int arreglo2[256];
    int capacidad1;
    int capacidad2;

}arreglo_t;

typedef struct Fusionados
{
    int fusion[512];
    int capacidad_fusion;
}fusion_t;



arreglo_t carga_arreglos(arreglo_t arreglo);
void mostrar_arreglos(int arreglo[], int capacidad);
fusion_t fusion_arreglo(arreglo_t arreglo);
arreglo_t ordenar_arreglo(arreglo_t arreglo);

int main()
{
    fusion_t fusion;
    arreglo_t arreglo;

    printf("Ingrese la capacidad del primer arreglo: ");
    scanf("%d", &arreglo.capacidad1);

    printf("Ingrese la capacidad del segundo arreglo: ");
    scanf("%d", &arreglo.capacidad2);

    arreglo=carga_arreglos(arreglo);

    printf("Arreglo 1:\n");
    mostrar_arreglos(arreglo.arreglo1, arreglo.capacidad1);

    printf("Arreglo 2:\n");
    mostrar_arreglos(arreglo.arreglo2, arreglo.capacidad2);


    printf("Fusion de los arreglos\n");

    fusion=fusion_arreglo(arreglo);
    mostrar_arreglos(fusion.fusion, fusion.capacidad_fusion);

    arreglo=ordenar_arreglo(arreglo);

    printf("Arreglo 1 ordenado:\n");
    mostrar_arreglos(arreglo.arreglo1, arreglo.capacidad1);

    printf("arreglo 2 ordenado:\n");
    mostrar_arreglos(arreglo.arreglo2, arreglo.capacidad2);

    printf("\n\n\n¡Gracias por usar el programa!");

    return 1;
}

arreglo_t carga_arreglos(arreglo_t arreglo)
{
    int i;
    for (i=0; i<arreglo.capacidad1; i++)
    {
        printf("Ingrese la posicion %d del arreglo 1: ", i+1);
        scanf("%d", &arreglo.arreglo1[i]);
    }
    printf("\n");
    for (i=0; i<arreglo.capacidad2; i++)
    {
        printf("Ingrese la posicion %d del arreglo 2: ", i+1);
        scanf("%d", &arreglo.arreglo2[i]);
    }
    printf("\n");
    
    return arreglo;
}

void mostrar_arreglos(int arreglo[], int capacidad)
{
    printf("[");
    for (int i=0; i< capacidad; i++)
    {
        printf("%d ", arreglo[i]);
    }
    printf("]\n\n");
}

fusion_t fusion_arreglo(arreglo_t arreglo)
{
    fusion_t resultado_fusion;
    resultado_fusion.capacidad_fusion=arreglo.capacidad1+arreglo.capacidad2;
    int i;
    for ( i = 0; i < arreglo.capacidad1; i++) 
    {
        resultado_fusion.fusion[i] = arreglo.arreglo1[i];
    }

    for ( i = 0; i < arreglo.capacidad2; i++) 
    {
        resultado_fusion.fusion[arreglo.capacidad1 + i] = arreglo.arreglo2[i];
    }

    return resultado_fusion;
}

arreglo_t ordenar_arreglo(arreglo_t arreglo)
{
    int i;
    for (i = 0; i < arreglo.capacidad1 ; i++) 
    {
        for (int j = 0; j < arreglo.capacidad1  ; j++) 
        {
            if (arreglo.arreglo1[j] > arreglo.arreglo1[j + 1]) 
            {
                int temporal = arreglo.arreglo1[j];
                arreglo.arreglo1[j] = arreglo.arreglo1[j + 1];
                arreglo.arreglo1[j + 1] = temporal;
            } 
        }
    }
    for (i=0; i<arreglo.capacidad1;i++)
    {
        arreglo.arreglo1[i]=arreglo.arreglo1[i+1];
    }


    for (i = 0; i < arreglo.capacidad2 ; i++) 
    {
        for (int j = 0; j < arreglo.capacidad2  ; j++) 
        {
            if (arreglo.arreglo2[j] > arreglo.arreglo2[j + 1]) 
            {
                int temporal = arreglo.arreglo2[j];
                arreglo.arreglo2[j] = arreglo.arreglo2[j + 1];
                arreglo.arreglo2[j + 1] = temporal;
            } 
        }
    }
    for (i=0; i<arreglo.capacidad1;i++)
    {
        arreglo.arreglo2[i]=arreglo.arreglo2[i+1];
    }
    
    return arreglo;
}