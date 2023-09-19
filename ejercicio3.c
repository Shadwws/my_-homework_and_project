/*
Ejercicio 3: Fracciones
Martín Aburto
Com 2 - 2023
Programacion 1 - Ingenieria en computacion
*/

#include <stdio.h>

typedef struct fraccion{
    int numerador;
    int denominador;
} fraccion_t;

void mostrar_fraccion(fraccion_t fraccion1, fraccion_t fraccion2)
{
    int election;
    printf("ingresé \"1\" para mostrar la primera fraccion \nImgrese \"2\" para mostrar la segunda fracción");
    scanf("%d",&election);
    
    if (election==1)
    {
        printf("%d %d", fraccion1.numerador, fraccion1.denominador);
    }    
        
    else if (election==2)
    {
        printf("%d %d", fraccion2.numerador, fraccion2.denominador);
    }
    else
    {
    printf ("El número ingresado es erróneo");
    }
}

int suma_fracciones ();

int multiplicacion_fracciones();

int suma_entero();


int main()
{
    fraccion_t fraccion1, fraccion2;
    printf("Ingrese la primera fraccion, separando el numerador y denominador por un espacio: ");
    scanf("%d %d", &fraccion1.numerador, &fraccion1.denominador);
    
    
    printf("Ingresé la segunda fracción, separando el numerador y denominador por un espacio: ");
    scanf("%d %d", &fraccion2.numerador, &fraccion2.denominador);
    
    mostrar_fraccion(fraccion1, fraccion2);
}