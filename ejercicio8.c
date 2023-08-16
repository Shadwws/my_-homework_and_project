/*
Ejercicio 8: Suma en rango
Martín Aburto
Com 2 - 2023
Programacion 1 - Ingenieria en computacion
*/
#include<stdio.h>

int suma_rango(int n, int m)
{
    int resultado;
    int i;
    if(n>m)
    {
        for(i=m;i<n;i++)
        {
            resultado=resultado+i;
        }
    }

    else
    {
        for(i=n;i<m;i++)
        {
            resultado=resultado+i;
        }
    }
    return resultado;
}

int main()
{
    int comienzo;
    int final;
    int resultado;
    printf("ingrese el primer numero para la suma en rango *recuerde que empieza desde el mas chico y se hara hasta el mas grande sin incluirse*:  ");
    scanf("%d", &comienzo);

    printf("ingrese el segundo numero:  ");
    scanf("%d", &final);

    resultado=suma_rango(comienzo, final);

    printf("el resultado es: %d", resultado);
    return 0;
}