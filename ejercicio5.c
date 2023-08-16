/*
Ejercicio 5: Suma lenta
Martín Aburto
Com 2 - 2023
Programacion 1 - Ingenieria en computacion
*/
#include<stdio.h>

int suma_lenta(int numero, int otro_numero)
{
    int i;
    if (otro_numero > 0)
    {
        for( i=0; i<otro_numero; i++ )
        {
            numero = numero + 1;
        }
    }

    else
    {
        otro_numero = -1*otro_numero;
        for(i=0; i<otro_numero; i++)
        {
            numero = numero - 1;
        }
    }

    

    return(numero);
}

int main()
{
    int numero1;
    int otro_numero1;
    int resultado;

    printf("ingrese el primer numero: ");
    scanf("%d", &numero1);

    printf("ingrese el segundo numero: ");
    scanf("%d", &otro_numero1);

    resultado=suma_lenta(numero1, otro_numero1);
    
    printf("%d", resultado);

    return 0;
}