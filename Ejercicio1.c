#include <stdio.h>

#define zize 256

void mostrar_matriz(int filas, int columnas, int matriz[zize][zize])
{
    for(int i=0;i<filas;i++)
    {
        for (int j=0;j<columnas;j++)
        {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}

void carga_matriz(int fila, int columna, int matriz[zize][zize])
{
    for(int i=0;i<fila;i++)
    {
        for (int j=0;j<columna;j++)
        {
            printf("de la fila %d ingrese el valor %d: ", i, j );
            scanf("%d", &matriz [i][j]);
        }
    }
}

int producto_escalar(int filas, int columnas, int matriz[zize][zize], int escalar)
{
    int i;
    int j;
    for (i=0; i<filas; i++)
    {
        for(j=0; j<columnas; j++)
        {
            matriz[i][j]=matriz[i][j]*escalar;
        }
    }
    return matriz[zize][zize];
}



int main()
{
    int matriz1[zize][zize];
    int matriz2[zize][zize];
    int fila1;
    int columna1;
    int fila2;
    int columna2;
    int escalar1;
    int escalar2;

    printf("ingrese la cantidad de filas de la matriz 1: ");
    scanf("%d", &fila1);
    
    printf("ingrese la cantidad de columnas de la matriz 1: ");
    scanf("%d", &columna1);

    carga_matriz(fila1, columna1, matriz1);



    printf("ingrese la cantidad de filas de la matriz 2: ");
    scanf("%d", &fila2);
    
    printf("ingrese la cantidad de columnas de la matriz 2: ");
    scanf("%d", &columna2);

    carga_matriz(fila2, columna2, matriz2);




    printf("ingrese por cuanto multiplicar la matriz 1:  ");
    scanf("%d", &escalar1);
    matriz1[zize][zize]=producto_escalar(fila1, columna1, matriz1, escalar1);

    printf("ingrese por cuanto multiplicar la matriz 2:  ");
    scanf("%d", &escalar2);
    matriz2[zize][zize]=producto_escalar(fila2, columna2, matriz2, escalar2);

    /*
    suma matriz
    */

    mostrar_matriz(fila1, columna1, matriz1);
    mostrar_matriz(fila2, columna2, matriz2);
    
    
    return 0;
}