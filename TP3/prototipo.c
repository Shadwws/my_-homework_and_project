#include <stdio.h>

#define tamanio 256

int largo_seguro(char cadena[], int capacidad);

int main()
{
    char cadena[tamanio];
    printf("ingresar los caracteres de la cadena \n");
    scanf("%s", &cadena);

    printf("%s", cadena);
    return 0;
}