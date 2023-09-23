/*
Ejercicio 1: Enter the matrix
Martín Aburto
Com 2 - 2023
Programacion 1 - Ingenieria en computacion
*/

#include <stdio.h>

#define zize 256
/*
*La funcion mostrar_matriz muestra los valores dentro
    de una matriz
*@param filas: Es la cantidad de filas de la matriz
*@pre Filas: Es un valor numerico mayor a 1
*@param Columnas: Es la cantidad de columnas de la matriz
*pre Columnas: Es un valor numerico mayor a 1
*@param Matriz: Es la matriz que se desea mostrar
*@pre una matriz valida
*/


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


/*
*La funcion carga_matriz asigna valores a las matrices
*@param filas: Es la cantidad de filas de la matriz
*@pre Filas: Es un valor numerico mayor a 1
*@param Columnas: Es la cantidad de columnas de la matriz
*pre Columnas: Es un valor numerico mayor a 1
*@param Matriz: Es la matriz donde se almacenaran
*@pre una matriz valida
*/
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


/*
*La funcion carga_matriz asigna valores a las matrices
*@param filas: Es la cantidad de filas de la matriz
*@pre Filas: Es un valor numerico mayor a 1
*@param Columnas: Es la cantidad de columnas de la matriz
*pre Columnas: Es un valor numerico mayor a 1
*@param Matriz: Es la matriz inicial
*@pre una matriz valida
*@param escalar: Es el valor numero a multiplicar la matriz
*@pre escalar es un numero entero
*@return la matriz ingresada multiplicada por el escalar
*@post la matriz modificada con los valores multiplicados
*/
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

/*
*La funcion suma_matriz calcula la suma de 2 matrices
*@param filas: los valores filas es la cantidad de filas
            de las matrices
*@pre Filas: Es un valor numerico mayor a 1
*@param Columnas: los valores filas es la cantidad de columnas
            de las matrices
*pre Columnas: Es un valor numerico mayor a 1
*@param Matriz_1: Es la matriz inicial
*@pre una matriz valida
*@param matriz_2: Es la matriz a sumar
*@pre una matriz valida
*@param resultado: Es una matriz donde se guardara la suma
            las matrices
*@pre una matriz valida

*@return una matriz con el resultado de la suma de 
            2 matrices
*@post la matriz "resultado" modificada con la suma de
            "matriz1" y "matriz2"
*/

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
    printf ("matriz 1 \n");
    mostrar_matriz(fila1, columna1, matriz1);
    printf ("matriz 2 \n");
    mostrar_matriz(fila2, columna2, matriz2);

    if (columna1==columna2 && fila1==fila2)
    {
        resultado_matriz[zize][zize]=suma_matriz(fila1, columna1, matriz1, fila2, columna2, matriz2, fila_r, columna_r, resultado_matriz);
        printf ("suma de matrices 1 \n");
        mostrar_matriz(fila_r, columna_r, resultado_matriz);     
    }
    else{
        printf("La suma no se realizo porque los valores filas y columnas no son iguales");
    }
    
    
    
    return 0;
}