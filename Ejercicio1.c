#include <stdio.h>

#define zize 256

void mostrar_matriz(int filas, int columnas, int matriz[][])
{
    for(int fila=0;filas<3;fila++)
    {
        for (int columna=0;columnas<3;columna++)
        {
            printf("%d ",matriz[fila][columna]);
        }
        printf("\n");
    }
}
int main()
{
    int matriz[zize][zize];
    int fila;
    int columna;
    
    printf("ingrese la cantidad de filas de la matriz");
    scanf("%d", &fila);
    
    printf("ingrese la cantidad de columnas de la matriz");
    scanf("%d", &columna);
    
    for(int i=0;i<fila;i++)
    {
        for (int j=0;j<columna;j++)
        {
            printf("de la fila %d ingrese el valor %d: ", fila, columna );
            scanf("%d", &matriz [fila][columna]);
        }
    }
    
    mostrar_matriz(fila, columna, matriz);
    
    
    return 0;
}