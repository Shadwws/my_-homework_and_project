/*
Ejercicio 3: Fracciones
Martín Aburto
Com 2 - 2023
Programacion 1 - Ingenieria en computacion
*/

#include <stdio.h>


//estructura de las fracciones
typedef struct fraccion {
    int numerador;//este es el numerador de la fraccion
    int denominador;//este es el denominador de la fraccion
} fraccion_t;//La forma en la que se abrevia el llamado a la estructura

/*
*La funcion mostrar_fraccion muestra una fraccion
*@param fraccion1 es una estructura compuesta por
        numerador y denominador
*@pre 2 numeros de tipo enteros
*/


void mostrar_fraccion(fraccion_t fraccion1)
{
    printf("%d/%d \n\n", fraccion1.numerador, fraccion1.denominador);
}

/*
*la funcion mcd saca el maximo comun divisor de una fraccion
*@param fraccion1 es una estructura compuesta por
        numerador y denominador
*@pre 2 numeros de tipo enteros
*@return numero divisible por la fraccion
*@post numero entero
*/
int mcd(fraccion_t fraccion)
{
    int i=1;
    int j=fraccion.numerador+fraccion.denominador;
    int mcd1;
    int mcd2;
    
    if (fraccion.numerador<0 || fraccion.denominador<0)
    {
        while (i!=0)
        {
            j++;
            mcd1=fraccion.numerador%j;
            mcd2=fraccion.denominador%j;

            if(mcd1==0 && mcd2==0)
            {
                i=0;
            }

        }
    }
    else
    {
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
    }

    return j;
}

/*
*la funcion suma_fracciones calcula suma de 2 fracciones y mediante
        mcd simplifica la fraccion en caso que se pueda
*@param fraccion1 es la fraccion inicial
*@pre una fraccion compuesta por 2 numeros de tipo enteros
*@param fraccion2 es la fraccion a sumar
*@pre una fraccion compuesta por 2 numeros enteros
*@return es el resultado de la suma de ambas fracciones
        ingresadas
*@post una fraccion de numeros enteros
*/
fraccion_t suma_fracciones (fraccion_t fraccion1, fraccion_t fraccion2)
{
    fraccion_t resultado;
    int min;
    resultado.numerador=(fraccion1.numerador*fraccion2.denominador)+(fraccion2.numerador*fraccion1.denominador);
    resultado.denominador=fraccion1.denominador*fraccion2.denominador;
    min= mcd(resultado);
    resultado.numerador=resultado.numerador/min;
    resultado.denominador=resultado.denominador/min;

    return resultado;
}

/*
*la funcion suma_entero permite hacer la suma de una fraccion
        con un numero entero
*@param fraccion es la fraccion inicial
*@pre una fraccion compuesta por 2 numeros de tipo enteros
*@param entero es el numero a sumar
*@pre numero entero
*@return es el resultado de la suma de la fraccion
        ingresada y el numero entero
*@post una fraccion de numeros enteros
*/

fraccion_t suma_entero(fraccion_t fraccion, fraccion_t entero, fraccion_t resultado)
{
    resultado=suma_fracciones(fraccion, entero);

    return resultado;
}

/*
*la funcion multiplicacion_fracciones permite multiplicar
        2 fracciones en
*@param fraccion1 es la fraccion inicial
*@pre una fraccion compuesta por 2 numeros de tipo enteros
*@param fraccion2 es la fraccion a multiplicar
*@pre una fraccion compuesta por 2 numeros enteros
*@return es el resultado de la multiplicacion de ambas fracciones
        ingresadas
*@post una fraccion de numeros enteros
*/


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




int main()
{
    int i=1;
    int funcion;
    fraccion_t resultado;
    fraccion_t fraccion1, fraccion2;
    

    while(i!=0)
    {
        printf("Ingrese la primera fraccion, separando el numerador y denominador por un espacio: ");
        scanf("%d %d", &fraccion1.numerador, &fraccion1.denominador);

        printf("\n1-Mostrar fracciones\n2-Sumar fracciones\n3-Multiplicar fracciones\n4-Sumar fraccion con numero entero\n0-Para salir\n\nIngrese: ");
        scanf("%d", &funcion);
        
        if(funcion==1)
        {
            printf("Fraccion 1: ");
            mostrar_fraccion(fraccion1);

        }

        else if(funcion==2)
        {
            printf("Ingrese la segunda fraccion, separando el numerador y denominador por un espacio: ");
            scanf("%d %d", &fraccion2.numerador, &fraccion2.denominador);
            printf("Suma de las fracciones: ");
            resultado=suma_fracciones(fraccion1, fraccion2);
            mostrar_fraccion(resultado);
        }
        else if(funcion==3)
        {
            printf("Ingrese la segunda fraccion, separando el numerador y denominador por un espacio: ");
            scanf("%d %d", &fraccion2.numerador, &fraccion2.denominador);
            printf("Multiplicacion de las fracciones: ");
            resultado=multiplicacion_fracciones(fraccion1, fraccion2, resultado);
            mostrar_fraccion(resultado);
        }
        else if (funcion==4)
        {
            printf("Ingrese el numero entero a sumar: ");
            scanf("%d", &fraccion2.numerador);
            fraccion2.denominador=1;
            resultado=suma_entero(fraccion1, fraccion2, resultado);
            printf("El resultado es: ");
            mostrar_fraccion(resultado);
        }
        else if(funcion==0)
        {
            i=0;
            printf("\n\nGracias por usar el programa");            
        }
        

        else
        {
            printf("Valor invalido, por favor intente de nuevo");
        }
    }
    return 0;
}