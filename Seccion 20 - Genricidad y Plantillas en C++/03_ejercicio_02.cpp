/*
    02. Definir dos plantillas de función dentro de un archivo de cabecera llamado
    "Ordenar.h" que puedan ordenar tanto ascendentemente comoc descendentemente un
    arreglo de N elementos, recuerde que puede utilizar la plantilla intercambiar
    del ejercicio anterior.
*/

#include <iostream>
#include <stdlib.h>
#include "Ordenar.h"

using namespace std;

template <typename T>
void pedirDatos(T *arreglo, int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nDigite un elemento del arreglo[" << i << "]: ";
        cin >> arreglo[i];
    }
}

template <typename T>
void mostrarArreglo(T *arreglo, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Elemento[" << i << "] = " << arreglo[i] << endl;
    }
}

int main() {

    int nElementos;

    cout << "\nDigite la cantidad de elementos del arreglo: ";
    cin >> nElementos;

    int *elementos = new int[nElementos];

    cout << "\nPedir los elementos del arreglo: " << endl;
    pedirDatos(elementos, nElementos);

    // Ordenamos los elementos del arreglo ascendentemente
    ordenarAscendente(elementos, nElementos);
    cout << "\nArreglo ordenado ascendentemente:" << endl;
    mostrarArreglo(elementos, nElementos);

    // Ordenamos los elementos del arreglo descendentemente
    ordenarDescendente(elementos, nElementos);
    cout << "\nArreglo ordenado descendentemente:" << endl;
    mostrarArreglo(elementos, nElementos);

    delete[] elementos;

    system("pause");
    return 0;
}