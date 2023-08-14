#include <stdio.h>

float centigrados_a_fahrenheit(float centigrados)
{
    float farenheit=(centigrados*9/5)+32;
    return(0);
}

float fahrenheit_a_centigrados(float fahrenheit)
{
    float centigrados=(fahrenheit-32)*5/9;
    return(0);
}

int main()
{
    variable=0;
    scanf(variable);
    centigrados_a_fahrenheit(variable);
    fahrenheit_a_centigrados(variable);
    printf("%f \n"centigrados_a_fahrenheit);
    printf("%f \n"fahrenheit_a_centigrados);
    return(0);
}