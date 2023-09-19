/*
Ejercicio 2: TATETI
Martín Aburto
Com 2 - 2023
Programacion 1 - Ingenieria en computacion
*/

#include <stdio.h>
#define tamanio 3
#define nombre 100
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

int hay_ganador(char tateti [tamanio][tamanio], char ficha)
{
    int ganador=0;
    for(int i=0; i<tamanio; i++)
    {
        
        if (tateti[i][0]==ficha && tateti[i][1]==ficha && tateti[i][2]==ficha)
        {
            ganador=1;
        }
    }
    for(int j=0; j<tamanio; j++)
    {
        
        if (tateti[0][j]==ficha && tateti[1][j]==ficha && tateti[2][j]==ficha)
        {
            ganador=1;
        }
    }
    if (tateti[0][0]==ficha && tateti[1][1]==ficha && tateti[2][2]==ficha)
    {
        ganador=1;
    }

    if (tateti[0][2]==ficha && tateti[1][1]==ficha && tateti[2][0]==ficha)
    {
        ganador=1;
    }

    return ganador;
}




int movimiento_valido(char tateti [tamanio][tamanio], int fila, int columna)
{
    int movimiento=0;
    if (tateti[fila][columna]==' ')
    {
        movimiento=1;
    }

    return movimiento;
}


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