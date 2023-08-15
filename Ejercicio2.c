#include <stdio.h>

float centigrados_a_fahrenheit(float centigrados)
{
    float resultado_fahrenheit=centigrados*1.8+32;
    return(resultado_fahrenheit);
}

float fahrenheit_a_centigrados(float fahrenheit)
{
    float resultado_centigrados=(fahrenheit-32)*5/9;
    return(resultado_centigrados);
}

int main()
{
	float resultado_centigrados;
	float resultado_fahrenheit;
	float fahrenheits;
	float centigrados;
	int variable;
	printf("ingrese 0 para centigrados a fahrenheit \n");
	printf("ingrese 1 para fahrenheit a centigrados \n");
	scanf("%d \n", &variable);

	if(variable==0)
	{
		printf("ingrese los centigrados a convertir: ");
		scanf("%f" ,centigrados);
		centigrados_a_fahrenheit(centigrados);
		printf("%f", resultado_centigrados);
	}

	else if(variable==1)
	{
		printf("Ingrese valor a convertir");
		scanf("%f", &fahrenheits);
		fahrenheit_a_centigrados(fahrenheits);
		printf("%f \n", resultado_fahrenheit);

	}

	else
	{
		printf("valor erroneo");
	}
	return(0);

}
