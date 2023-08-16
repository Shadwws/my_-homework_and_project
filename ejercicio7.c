/*
Ejercicio 7: Números primos
Martín Aburto
Com 2 - 2023
Programacion 1 - Ingenieria en computacion
*/
 #include<stdio.h>


int es_primo(int numero)
{
    int resultado;
    int i;
    int contador=0;
    numero++ ;
    int salida;
    for(i=1; i < numero; i++ )
    {
        resultado=numero%i;

        if(resultado==0)
        {
            contador = contador + 1;
        }
    }
    if(contador > 2)
    {
        salida=1;
    }

    else 
    {
        salida=0;
    }
    return salida;

}

int main()
{
    int resultado;
    int numero1 ;
    printf("Ingrese un numero: ");
    scanf("%d", &numero1);

    resultado=es_primo(numero1);
    printf("%d", resultado);

    return 0;
}