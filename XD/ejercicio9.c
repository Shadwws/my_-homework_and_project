#include <stdio.h>

int fibonacci(int variable);

int main()
{
    int variable=0;
    int resultado;

    printf("ingrese el numero: ");
    scanf("%d", &variable);

    resultado=fibonacci(variable);
    printf("%d \n", resultado);
}

int fibonacci(int variable)
{
    int i;
    int resultado=1;
    int numero1=0;
    int numero2=1;
    int a=0;

    for(i=0; i<variable; i++)
    {
        a=a+resultado;
        resultado=numero1+numero2;
        numero1=numero2;
        numero2=resultado;
        
    }

    return a;
}
