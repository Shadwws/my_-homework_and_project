/*
Ejercicio 2: TATETI
Martín Aburto
Com 2 - 2023
Programacion 1 - Ingenieria en computacion
*/

#include <stdio.h>
#define tamanio 3
#define nombre 100
#define verdadero 1
#define falso 0

/*
*La funcion mostrar_tateti muestrala tabla del tateti
*@param tateti es una tabla de tateti
*@pre una matriz de tipo char de 3x3
*/
void mostrar_tateti(char tateti[tamanio][tamanio])
{
    for (int i=0; i<tamanio; i++)
    {
        for(int j=0; j<tamanio; j++)
        {
            printf("|%c| ", tateti[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


/*
*La funcion hay_ganador comprueba si alguien gano la
            partida
*@param tateti es una tabla de tateti
*@pre una  matriz de tipo char de 3x3
*@param ficha es la ficha jugada
*@pre una variable tipo char
*@return un numero 1 o 0 que determina quien gana
*@post cambio en la variable ganador para terminar
            el juego y decir quien gano

*/
int hay_ganador(char tateti [tamanio][tamanio], char ficha)
{
    int ganador=falso;
    for(int i=0; i<tamanio; i++)
    {
        
        if (tateti[i][0]==ficha && tateti[i][1]==ficha && tateti[i][2]==ficha)
        {
            ganador=verdadero;
        }
    }
    for(int j=0; j<tamanio; j++)
    {
    
        if (tateti[0][j]==ficha && tateti[1][j]==ficha && tateti[2][j]==ficha)
        {
            ganador=verdadero;
        }
    }
    if (tateti[0][0]==ficha && tateti[1][1]==ficha && tateti[2][2]==ficha)
    {
        ganador=verdadero;
    }

    if (tateti[0][2]==ficha && tateti[1][1]==ficha && tateti[2][0]==ficha)
    {
        ganador=verdadero;
    }

    return ganador;
}

/*
*la funcion movimiento_valido determina si un
            movimiento es valido o no
*@param tateti es una tabla de tateti
*@pre una  matriz de tipo char de 3x3
*@param fila es el numero de la fila en donde se 
            desea colocar la ficha
*@post un valor numerico igual o mayora 0 pero
            menor o igual a 2
*@param columna es el numero de la columna en donde se 
            desea colocar la ficha
*@post un valor numerico igual o mayora 0 pero
            menor o igual a 2
*@return un valor numerico 1 o 0 que determina
            si es valido o no
*@post cambio en la variable movimiento para poder
            determinar si es valida o no

*/


int movimiento_valido(char tateti [tamanio][tamanio], int fila, int columna)
{
    int movimiento=falso;
    if (tateti[fila][columna]==' ')
    {
        movimiento=verdadero;
    }

    return movimiento;
}

/*
*la funcion jugada hace los cambios en la matriz por 
        la ficha del jugador
*@param tateti es una tabla de tateti
*@pre una  matriz de tipo char de 3x3
*@param ficha es la ficha jugada
*@pre una variable tipo char
*@param jugador es una cadena de letras con el nombre
        del jugador a jugar
*@pre una cadena valida
*@return una matriz con los cambios hechos por los
        jugadores
*@post cambio en la matriz "tateti" con la ficha 
        del jugador y la ficha del jugador
*/
char jugada(char tateti[tamanio][tamanio], char ficha, char jugador[])
{
    int fila;
    int columna;
    int movimiento;
    int i=1;
    while(i!=0)
    {
        printf("%s ingrese que movimiento desea jugar: ", jugador);
        scanf("%d %d", &fila, &columna);
        movimiento=movimiento_valido(tateti, fila, columna);
        
        if (movimiento==1)
        {
            tateti[fila][columna]=ficha;
            i=0;
        }
        else
        {
            printf("posicion invalida, ingrese otra posicion\n");
        }
    }
    return tateti[tamanio][tamanio];
}
int main()
{
    char X='x';
    char O='o';
    int movimientos=1;
    int ganador=0;
    char jugador1[nombre];
    char jugador2[nombre];

    printf("Nombre del jugador fichas X: ");
    scanf("%s", &jugador1);

    printf("Nombre del jugador fichas O: ");
    scanf("%s", &jugador2);

    
    
    char tateti[tamanio][tamanio]=
    { 
        {' ',' ',' '},
        {' ',' ',' '}, 
        {' ',' ',' '}
    };

    mostrar_tateti(tateti);

    while (ganador!=1 && movimientos!=9)
    {

        tateti[tamanio][tamanio]=jugada(tateti, X, jugador1);
        ganador=hay_ganador(tateti, X);
        mostrar_tateti(tateti);

        if (ganador==1)
        {
            printf("felicidades %s, HAS GANADO!!", jugador1);
            break;
        }


        tateti[tamanio][tamanio]=jugada(tateti, O, jugador2 );
        ganador=hay_ganador(tateti, O);
        mostrar_tateti(tateti);

        if (ganador==1)
        {
            printf("felicidades %s, HAS GANADO!!", jugador2);
            break;
        }

        movimientos++;
        if(movimientos==9)
        {
            printf("Empate!!");
        }

    }

    return 0;
}