/*
Ejercicio 4: Comparación de números
Martín Aburto
Com 2 - 2023
Programacion 1 - Ingenieria en computacion
*/

#include<stdio.h>
int compara(int numero, int otro_numero)
{
    int comparacion;
    if (numero>otro_numero)
    {
        comparacion=1;
    }

    else if (numero<otro_numero)
    {
        comparacion=-1;
    }
    
    else
    {
        comparacion=0;
    }
    return comparacion;
}

int main()
{
    int numero;
    int otro_numero;
    int resultado;

    printf("ingrese el primer numero: ");
    scanf("%d", &numero);

    printf("ingrese el segundo numero: ");
    scanf("%d", &otro_numero);

    resultado=compara(numero, otro_numero);
    
    printf("%d", resultado);

    return 0;
}