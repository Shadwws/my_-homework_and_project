/*
Ejercicio opcional 4: División Lenta III
Martín Aburto
Com 2 - 2023
Programacion 1 - Ingenieria en computacion
*/

#include <stdio.h>


typedef struct division
{
    int dividendo;
    int divisor;
}division_t;


typedef struct resultado
{
    int cociente;
    int resto;
}resultado_t;

resultado_t division_lenta(division_t contenido);
void mostrar_resultado(resultado_t resultado, division_t contenido);


int main()
{
    division_t division;
    resultado_t resultado;

    printf("Ingresar el numero a dividor: ");
    scanf("%d", &division.dividendo);

    printf("Ingresar valor del divisor: ");
    scanf("%d", &division.divisor);

    if (division.divisor!=0)
    {
        resultado=division_lenta(division);

        mostrar_resultado(resultado, division);
    }

    else
    {
        printf("No se puede dividir por 0");
    }

    
    return 0;

}

resultado_t division_lenta(division_t contenido)
{
    resultado_t resultado;
    resultado.cociente=0;
    resultado.resto=0;

    if (contenido.dividendo >0)
    {
        if (contenido.divisor>0)
        {
            while(contenido.dividendo>=contenido.divisor)
            {
                contenido.dividendo=contenido.dividendo-contenido.divisor;
                resultado.cociente++;
            }
            resultado.resto=contenido.dividendo;
        }

        else
        {
            while(contenido.dividendo>=(-contenido.divisor))
            {
                contenido.dividendo=contenido.dividendo+contenido.divisor;
                resultado.cociente++;
            }
            resultado.cociente=(-resultado.cociente);
            resultado.resto=contenido.dividendo-contenido.divisor;
        }
    }

    else
    {
        if (contenido.divisor<0)
        {
            while(contenido.dividendo>=contenido.divisor)
            {
                contenido.dividendo=contenido.dividendo+contenido.divisor;
                resultado.cociente++;
            }
            resultado.resto=contenido.dividendo;
        }
        
        else
        {
            while(contenido.dividendo>=(-contenido.divisor))
            {
                contenido.dividendo=contenido.dividendo-contenido.divisor;
                resultado.cociente++;
            }
            resultado.cociente=(-resultado.cociente);
            resultado.resto=contenido.dividendo-contenido.divisor;
        }
    }

    return resultado;
}

void mostrar_resultado(resultado_t resultado, division_t contenido)
{
    printf("El resultado de la division entre %d y %d es %d con resto %d ", contenido.dividendo, contenido.divisor, resultado.cociente, resultado.resto);
}