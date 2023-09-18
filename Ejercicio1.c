#include <stdio.h>

#define zize 256

void mostrar_matriz(int filas, int columnas, int matriz[zize][zize])
{
    for(int i=0;i<filas;i++)
    {
        for (int j=0;j<columnas;j++)
        {
            printf("|%d| ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
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

int suma_matriz(int filas_1, int columnas_1, int matriz_1[zize][zize],
								int filas_2, int columnas_2, int matriz_2[zize][zize],
								int filas_r, int columnas_r, int resultado[zize][zize])
{
    if ( filas_1!=filas_2 || columnas_1!=columnas_2)
    {
        return -1;
    }
    else 
    {
        for (int i=0; i<filas_r; i++)
        {
            for(int j=0; j<columnas_r; j++)
            {
                resultado[i][j]=matriz_1[i][j]+matriz_2[i][j];
            }
            
        }
    }
    return resultado [zize][zize];
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
    printf("\n");
    
    printf("ingrese la cantidad de columnas de la matriz 1: ");
    scanf("%d", &columna1);
    printf("\n");

    carga_matriz(fila1, columna1, matriz1);
    printf("\n");



    printf("ingrese la cantidad de filas de la matriz 2: ");
    scanf("%d", &fila2);
    printf("\n");

    printf("ingrese la cantidad de columnas de la matriz 2: ");
    scanf("%d", &columna2);
    printf("\n");

    carga_matriz(fila2, columna2, matriz2);
    printf("\n");



    printf("ingrese por cuanto multiplicar la matriz 1:  ");
    scanf("%d", &escalar1);
    matriz1[zize][zize]=producto_escalar(fila1, columna1, matriz1, escalar1);
    printf("\n");

    printf("ingrese por cuanto multiplicar la matriz 2:  ");
    scanf("%d", &escalar2);
    matriz2[zize][zize]=producto_escalar(fila2, columna2, matriz2, escalar2);
    printf("\n");

    int resultado_matriz [zize][zize];
    int fila_r=fila1;
    int columna_r=columna1;

    resultado_matriz[zize][zize]=suma_matriz(fila1, columna1, matriz1, fila2, columna2, matriz2, fila_r, columna_r, resultado_matriz);

    printf ("matriz 1 \n");
    mostrar_matriz(fila1, columna1, matriz1);
    printf ("matriz 2 \n");
    mostrar_matriz(fila2, columna2, matriz2);
    printf ("suma de matrices 1 \n");
    mostrar_matriz(fila_r, columna_r, resultado_matriz);     
    
    return 0;
}