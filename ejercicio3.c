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

void mostrar_fraccion(fraccion_t fraccion1)
{
    printf("%d %d \n\n", fraccion1.numerador, fraccion1.denominador);
}


int mcd(fraccion_t fraccion);

fraccion_t suma_fracciones (fraccion_t fraccion1, fraccion_t fraccion2, fraccion_t resultado)
{
    int min;
    resultado.numerador=(fraccion1.numerador*fraccion2.denominador)+(fraccion2.numerador*fraccion1.denominador);
    resultado.denominador=fraccion1.denominador*fraccion2.denominador;
    min= mcd(resultado);
    resultado.numerador=resultado.numerador/min;
    resultado.denominador=resultado.denominador/min;
    
    return resultado;
}
fraccion_t multiplicacion_fracciones(fraccion_t fraccion1, fraccion_t fraccion2, fraccion_t resultado)
{
    int min;
    resultado.numerador=fraccion1.numerador*fraccion2.numerador;
    resultado.denominador=fraccion1.denominador*fraccion2.denominador;
    min=mcd(resultado);
    
    resultado.numerador=resultado.numerador/min;
    resultado.denominador=resultado.denominador/min;
    
    return resultado;
}

int suma_entero();

int mcd(fraccion_t fraccion)
{
    int i=1;
    int j=fraccion.numerador+fraccion.denominador;
    int mcd1;
    int mcd2;
    while (i!=0)
    {
        j--;
        mcd1=fraccion.numerador%j;
        mcd2=fraccion.denominador%j;
        
        if(mcd1==0 && mcd2==0)
        {
            i=0;
        }
        
    }
    
    return j;
}

int main()
{
    fraccion_t resultado;
    fraccion_t fraccion1, fraccion2;
    printf("Ingrese la primera fraccion, separando el numerador y denominador por un espacio: ");
    scanf("%d %d", &fraccion1.numerador, &fraccion1.denominador);
    
    
    printf("Ingresé la segunda fracción, separando el numerador y denominador por un espacio: ");
    scanf("%d %d", &fraccion2.numerador, &fraccion2.denominador);
    
    printf("Fracción 1: ");
    mostrar_fraccion(fraccion1);
    
    printf("Fracción 2: ");
    mostrar_fraccion(fraccion2);
    
    printf("Suma de las fracciones: ");
    resultado=suma_fracciones(fraccion1, fraccion2, resultado);
    mostrar_fraccion(resultado);
    
    printf("Multiplicacion de las fracciones: ");
    resultado=multiplicacion_fracciones(fraccion1, fraccion2, resultado);
    mostrar_fraccion(resultado);
}