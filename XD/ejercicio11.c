#include<stdio.h>


int numero_perfecto(int numero);

int main()
{
    int variable;
    int resultado;
    printf("ingrese el numero a evaluar: ");
    scanf("%d", &variable);
    resultado=numero_perfecto(variable);

    if (variable==1)
    {
        printf("no es perfecto"); 
    }

    else
    {
        if (resultado==1)
        {
            printf("el numero es perfecto \n");
        }

        else
        {
            printf("el numero no es perfecto \n");
        }
    }
    return 0;
}

int numero_perfecto(int numero)
{
    int i;
    int resultado=0;
    int divisible;
    for(i=1; i<numero; i++)
    {
        divisible=numero%i;

        if (divisible==0)
        {
            resultado=resultado+i;
        }
        
    }
    if (resultado==numero)
    {
        resultado=1;
    }
    else
    {
        resultado=0;
    }
    return resultado;
}