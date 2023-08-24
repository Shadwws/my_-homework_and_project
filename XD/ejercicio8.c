#include <stdio.h>

int numero_defectivo(int numero);

int main()
{
    int variable;
    int resultado;
    printf("ingrese el numero a evaluar: ");
    scanf("%d", &variable);
    resultado=numero_defectivo(variable);

    if (variable==1)
    {
        printf("no es defectivo"); 
    }

    else
    {
        if (resultado==1)
        {
            printf("el numero es defectivo \n");
        }

        else
        {
            printf("el numero no es defectivo \n");
        }
    }
    return 0;
}

int numero_defectivo(int numero)
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
    if (resultado<numero)
    {
        resultado=1;
    }
    else
    {
        resultado=0;
    }
    return resultado;
}