/* Ordenamiento rápido
*/ 

#include <iostream>
#include <stdlib.h>

using namespace std;

void intercambio(float &x, float &y) {
    float aux;

    aux = x;
    x = y;
    y = aux;
}

void quickSort(float a[], int primero, int ultimo) {
    int i, j, central;
    float pivote;

    central = (primero + ultimo) / 2;
    pivote = a[central];

    i = primero;
    j = ultimo;

    do {
        while (a[i] < pivote) i++;
        while (a[j] > pivote) j--;

        if (i <= j) {
            intercambio(a[i], a[j]);
            i++;
            j--;
        }
    } while (i <= j);

    if (primero < j) {
        quickSort(a, primero, j); // Ordenamos la sublista izquierda
    }

    if (i < ultimo) {
        quickSort(a, i, ultimo); // Ordenamos la sublista derecha
    }
}

int main() {

    float arreglo[] = {4, 7, 1, 8, 2, 10, 5, 9, 6, 3};

    quickSort(arreglo, 0, 9);

    cout << "Arreglo en forma ascendente: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << arreglo[i] << " | ";
    }

    cout << "\n";

    cout << "Arreglo en forma descendente: " << endl;
    for (int i = 9; i >= 0; i--) {
        cout << arreglo[i] << " | ";
    }

    cout << "\n";

    printf("Hola desde printf :)\n");
    
    system("pause");
    return 0;
}
