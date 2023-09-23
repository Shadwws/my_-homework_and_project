/*
Ejercicio 4: Gestionando el `tiempo_t`
Martín Aburto
Com 2 - 2023
Programacion 1 - Ingenieria en computacion
*/
#include <stdio.h>
#define mas_chico -1
#define igual 0
#define mas_grande 1

//estructura de tiempo
typedef struct tiempo
{
    int horas;//es el valor de las horas del tiempo
    int minutos;//es el valor de las minutos del tiempo
    int segundos;//es el valor de las segundos del tiempo
}tiempo_t;//La forma en la que se abrevia el llamado a la estructura

/*
*La funcion cargar_tiempo permite ingresar los valores del 
        tiempo 
*@param time es donde se guardara los valores ingresados
*@pre una estructura de numeros enteros valida
*@return la estructura ingresada con los valores ingresados
*@post una estructura d numeros enteros
*/

tiempo_t cargar_tiempo(tiempo_t time)
{
    int hs=0;
    int min=0;
    printf("\ningrese el valor de los segundos de su tiempo: ");
    scanf("%d", &time.segundos);
    if(time.segundos>59)
    {
        min=time.segundos/60;
        time.segundos=time.segundos-60*min;
    }

    printf("\ningrese el valor de los minutos de su tiempo: ");
    scanf("%d", &time.minutos);
    time.minutos=time.minutos+min;
    if(time.minutos>59)
    {
        hs=time.minutos/60;
        time.minutos=time.minutos-60*hs;
    }

    printf("\ningrese el valor de los horas de su tiempo: ");
    scanf("%d", &time.horas);
    time.horas=time.horas+hs;
    
    return time;
}

/*
*La funcion mostrar_tiempo permite mostrar los valores de
        una estructura de tiempo
*@param time es el tiempo a mostrar
*@pre una estructura de numeros enteros valida
*/

void mostrar_tiempo(tiempo_t time)
{
    printf("su tiempo es %d horas con %d minutos y %d segundos.\n\n", time.horas, time.minutos, time.segundos);
}

/*
*La funcion suma_tiempo permite sumar 2 estructuras de tiempos
        en una nueva
*@param time1 es el tiempo incial
*@pre una estructura de numeros enteros valida
*@param time1 es el tiempo a sumar
*@pre una estructura de numeros enteros valida
*@return una estructura de tiempo llamada "resultado_tiempos"
        que contiene la suma de ambos tiempos
*@pos una estructura de tiempos con los valores de la sumas
*/

tiempo_t sumar_tiempos(tiempo_t time1, tiempo_t time2)
{
    int min;
    int hs;
    tiempo_t resultado_tiempo;
    resultado_tiempo.segundos=time1.segundos+time2.segundos;
    if(resultado_tiempo.segundos>59)
    {
        min=resultado_tiempo.segundos/60;
        resultado_tiempo.segundos=resultado_tiempo.segundos-60*min;
    }

    resultado_tiempo.minutos=time1.minutos+time2.minutos+min;
    if(resultado_tiempo.minutos>59)
    {
        hs=resultado_tiempo.minutos/60;
        resultado_tiempo.minutos=resultado_tiempo.minutos-60*hs;
    }
    resultado_tiempo.horas=time1.horas+time2.horas+hs;

    return resultado_tiempo;
    
}

/*
*La funcion comparar_tiempos permite comparar 2 estructuras de tiempo
        para determinar cual es mas grande
*@param time1 es una estructura de tiempo
*@pre una estructura de numeros enteros valida
*@param time1 es una estructura de tiempo
*@pre una estructura de numeros enteros valida
*@return un valor numerico que determina si es mas chica la primera o no
*@pos un valor numerico igual o mayor a -1 y menor o igual a 1 
*/

int comparar_tiempos(tiempo_t time1, tiempo_t time2)
{
    int que_es;
    
    if(time1.segundos==time2.segundos && time1.minutos==time2.minutos && time1.horas==time2.horas)
    {
        que_es=igual;
    }
    else if(time1.horas>time2.horas)
    {
        que_es=mas_grande;
    }
    else if(time1.horas<time2.horas)
    {
        que_es=mas_chico;
    }
    else if(time1.minutos>time2.minutos)
    {
        que_es=mas_grande;
    }
    else if(time1.minutos<time2.minutos)
    {
        que_es=mas_chico;
    }
    else if(time1.segundos>time2.segundos)
    {
        que_es=mas_grande;
    }
    else if(time1.segundos<time2.segundos)
    {
        que_es=mas_chico;
    }

    printf("%d", que_es);
    return que_es;
}

int main()
{
    tiempo_t time1;
    tiempo_t time2;
    tiempo_t suma_time;
    int compara;

    time1=cargar_tiempo(time1);
    time2=cargar_tiempo(time2);

    mostrar_tiempo(time1);
    mostrar_tiempo(time2);

    suma_time=sumar_tiempos(time1, time2);
    mostrar_tiempo(suma_time);
    compara=comparar_tiempos(time1, time2);
    
    return 0;
}