/*
Ejercicio 2:Conversión de temperaturas
Martín Aburto
Com 2 - 2023
Programacion 1 - Ingenieria en computacion
*/


#include <stdio.h>

float centigrados_a_fahrenheit(float centigrados)
{
    float resultadocentigrados = (centigrados*9/5)+32;
    return resultadocentigrados;
}

float fahrenheit_a_centigrados(float fahrenheit)
{
    float resultadofahrenhrit = (fahrenheit-32)*5/9;
    return resultadofahrenhrit;
}

int main()
{
    float centigrados ;
    float fahrenheit;
    int election;
    printf("ingrese 1 para centigrados a fahrenheit o 2 para fahrenheit a centigrados: ");
    scanf("%d", &election);

    if (election==1)
    {
        printf("ingrese el valor en centigrados: ");
        scanf("%f", &centigrados);

        float resultado_en_centigrados = centigrados_a_fahrenheit(centigrados);
        printf("%f\n", resultado_en_centigrados);
    }

    else
    {
        printf("ingrese el valor en fahrenheit a convertir: ");
        scanf("%f", &fahrenheit);

        float resultado_fahrenheit = fahrenheit_a_centigrados(fahrenheit);
        printf("%f\n", resultado_fahrenheit);
    }
    return(0);
}

