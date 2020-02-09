/*
    06. Hacer una función para almacenar N números en un arreglo dinámico,
    posteriormente usando otra función buscar un número en particular.
    NOTA: Puedes utilizar cualquier método de búsqueda (secuencial o binario)
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

// Prototipo de función
void pedirDatos();
void buscarElemento(int *, int);

int nElementos, *elemento;

int main() {

    pedirDatos();

    buscarElemento(elemento, nElementos);

    delete[] elemento;

    system("pause");
    return 0;
}

void pedirDatos() {
    cout << "Digite el número de elementos del arreglo: ";
    cin >> nElementos;

    elemento = new int[nElementos];

    for (int i = 0; i < nElementos; i++) {
        cout << "Digite un número[" << i << "]: ";
        cin >> *(elemento + i);
    }
}

void buscarElemento(int *elemento, int nElementos) {
    int dato, i;
    bool band = false;

    cout << "Digite un número a buscar: ";
    cin >> dato;

    i = 0;
    while ((i < nElementos) && (band == false)) {
        if (*(elemento + i) == dato) {
            band = true;
        }

        i++;
    }

    if (band == false) {
        cout << "\nEl número no existe en el arreglo." << endl;
    } else {
        cout << "\nEl número sí existe en el arreglo, posición: " << i - 1 << endl;
    }
}