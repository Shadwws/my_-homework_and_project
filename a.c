#include <stdio.h>

void llenarArreglo(int arreglo[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Ingrese el valor para la posición %d: ", i);
        scanf("%d", &arreglo[i]);
    }
}

void mostrarArreglo(int arreglo[], int n) {
    printf("Contenido del arreglo: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
}

float promedioArreglo(int arreglo[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arreglo[i];
    }
    return (float)suma / n;
}

int minimoValor(int arreglo[], int n) {
    int min = arreglo[0];
    for (int i = 1; i < n; i++) {
        if (arreglo[i] < min) {
            min = arreglo[i];
        }
    }
    return min;
}

int posicionMaximoValor(int arreglo[], int n) {
    int max = arreglo[0];
    int pos = 0;
    for (int i = 1; i < n; i++) {
        if (arreglo[i] > max) {
            max = arreglo[i];
            pos = i;
        }
    }
    return pos;
}

void ordenarArreglo(int arreglo[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
    printf("Contenido del arreglo: ");
        for (int k = 0; k < n; k++) {
            printf("%d ", arreglo[k]);
        }
        printf("\n");

}

int main() {
    int n;
    
    printf("Ingrese la cantidad de elementos del arreglo: ");
    scanf("%d", &n);

    int arreglo[n];  // Declaramos el arreglo

    llenarArreglo(arreglo, n);

    mostrarArreglo(arreglo, n);

    printf("Promedio del arreglo: %.2f\n", promedioArreglo(arreglo, n));
    printf("Valor mínimo: %d\n", minimoValor(arreglo, n));

    int pos_max = posicionMaximoValor(arreglo, n);
    printf("Posición del valor máximo: %d\n", pos_max);

    ordenarArreglo(arreglo, n);
    printf("Arreglo ordenado de menor a mayor: ");
    mostrarArreglo(arreglo, n);

    return 0;
}




void unirArreglos(int arreglo1[], int n1, int arreglo2[], int n2, int arreglo_resultante[]) {
    // Copiar el contenido del primer arreglo al resultado
    for (int i = 0; i < n1; i++) {
        arreglo_resultante[i] = arreglo1[i];
    }

    // Copiar el contenido del segundo arreglo al resultado
    for (int i = 0; i < n2; i++) {
        arreglo_resultante[n1 + i] = arreglo2[i];
    }
}