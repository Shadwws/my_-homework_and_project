#include <stdio.h>
#define tamanio 256

void archivo_to_arreglo(FILE *archivo);


int main()
{
    FILE *archivo = fopen("des_files.txt", "r");
    
    archivo_to_arreglo(archivo);

}

int archivo_to_arreglo(FILE *archivo)
{
    int arreglo[tamanio];
    int i=0;
    int capacidad=0;
    fscanf(archivo, "%d", &capacidad);
	    


    for (i=0; i<capacidad; i++)
    {
        fscanf(archivo, "%d", &arreglo[i]);
    }



    for (i=0;i<capacidad;i++)
    {
        printf("%d", arreglo[i]);
    }

    return arreglo;
}

