/*
Ejercicio 3: Numeros positivos y negativos
Martín Aburto
Com 2 - 2023
Programacion 1 - Ingenieria en computacion
*/
#include<stdio.h>

int signo(int numero)
{
    int que_es;
    if (numero<0)
    {
        que_es=-1;
    }

    else if (numero>0)
    {
        que_es=1;
    }
    
    else
    {
        que_es=0;
    }
    return que_es;
}

int main()
{
    int numero;
    int resultado;

    printf("ingrese un numero: ");
    scanf("%d", &numero);

    resultado=signo(numero);

    printf("%d", resultado);

    return 0;
}