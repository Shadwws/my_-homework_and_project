/*
Ejercicio 10; Factorial
Martín Aburto
Com 2 - 2023
Programacion 1 - Ingenieria en computacion
*/
#include<stdio.h>

long factorial(int numero)
{
    int i;
    int resultado=1;
    for (i=1; i<numero+1; i++)
    {
        resultado=resultado*i;
    }
    return resultado;
}

int main()
{
    int numero;
    int resultado;
    printf("ingrese el numero a realizarle factorial: ");
    scanf("%d", &numero);

    if(numero>0)
    {
        resultado= factorial(numero);
        printf("el resultado es %d", resultado);
    }
    else
    {
        printf("ERROR, solo se acepta numeros entero positivos");
    }
    return 0;

}