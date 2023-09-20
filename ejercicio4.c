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


typedef struct tiempo
{
    int horas;
    int minutos;
    int segundos;
}tiempo_t;

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

void mostrar_tiempo(tiempo_t time)
{
    printf("su tiempo es %d horas con %d minutos y %d segundos.\n\n", time.horas, time.minutos, time.segundos);
}
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
int comparar_tiempos(tiempo_t time1, tiempo_t time2)
{
    int que_es;
    if (time1.horas<time2.horas)
    {
        que_es=mas_chico;
    }

    else if(time1.minutos<time2.minutos)
    {
        que_es=mas_chico;
    }
    else if(time1.segundos<time2.segundos)
    {
        
        que_es=mas_chico;
    }
    else if(time1.segundos==time2.segundos && time1.minutos==time2.minutos && time1.horas==time2.horas)
    {
        que_es=igual;
    }
    else
    {
        que_es=mas_grande;
    }

    printf("%d", que_es);
    return que_es;
}

int main()
{
    tiempo_t time1;
    tiempo_t time2;
    tiempo_t suma_time;
    int compara=0;

    time1=cargar_tiempo(time1);
    time2=cargar_tiempo(time2);

    mostrar_tiempo(time1);
    mostrar_tiempo(time2);

    suma_time=sumar_tiempos(time1, time2);
    mostrar_tiempo(suma_time);
    compara=comparar_tiempos(time1, time2);
}