#include <stdio.h>

int potencia(int base, int exponente);

int main()
{ 
    int resultado;
    int base;
    int exponente;
    printf("ingrese el numero base: ");
    scanf("%d", &base);

    printf("ingrese el exponente: ");
    scanf("%d", &exponente);

    resultado=potencia(base, exponente);
    printf("%d", resultado);
}


int potencia(int base, int exponente)
{
    int resultado;
    int i=0;
    int contador=0;
    if (exponente==0 && base!=0)
    {
        resultado=1;
    }

    else if (base>0 && exponente>0)
    {
        while (i<=exponente)
        {
            while(contador<=base)
            {
                base+=base;
                contador++;
            }
            i++;
        }
        resultado=base;
    }

    else if(base<0 && exponente<0)
    {
        
    }

    else if(base>0 && exponente<0)
    {

    } 

    else if(base<0 && exponente>0)
    {

    }
    return resultado;
}