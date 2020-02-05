/*
* 05. Pedir al usuario N números, almacenarlos en un arreglo dinámico
* y posteriormente ordenarlos en orden ascendente para luego mostralos
* en pantalla.
* NOTA: Utilizar cualquier método de ordenamiento.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

// Prototipo de la función
void pedirDatos();
void ordenarArreglo(int *, int);
void mostrarArreglo(int *, int);

int nElementos, *elemento;

int main() {

    pedirDatos();

    ordenarArreglo(elemento, nElementos);

    mostrarArreglo(elemento, nElementos);

    delete[] elemento; // Liberar la memoria utilizada para el arreglo dinámico

    system("pause");
    return 0;
}

void pedirDatos() {
    cout << "Digite el número de elementos del arreglo: ";
    cin >> nElementos;

    elemento = new int[nElementos];

    for (int i = 0; i < nElementos; i++) {
        cout << "Digite un número[" << i << "]: ";
        cin >> *(elemento + i); // elemento[i]
    }
}

void ordenarArreglo(int *elemento, int nElementos) {
    int aux;

    // ordenar el arreglo con el método burbuja
    for (int i = 0; i < nElementos; i++) {
        for (int j = 0; j < nElementos-1; j++) {
            if (*(elemento + j) > *(elemento + j + 1)) { // elemento[j] > elemento[j + 1]
                aux = *(elemento + j);
                *(elemento + j) = *(elemento + j + 1);
                *(elemento + j + 1) = aux;
            }
        }
    }
}

void mostrarArreglo(int *elemento, int nElementos) {
    cout << "\n\nMostrando arreglo ordenado:\n\n";

    for (int i = 0; i < nElementos; i++) {
        cout << *(elemento + i) << ", "; // elemento[i]
    }

    cout << "\n";
}