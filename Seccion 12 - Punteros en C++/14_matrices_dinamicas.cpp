/*
    Matrices dinámicas

    Ejemplo: Rellenar una matriz de NxM y mostrar su contenido

    **puntero_matriz -> *puntero_fila -> [int] [int] ... [int]
                        *puntero_fila -> [int] [int] ... [int]
                        ...
                        *puntero_fila -> [int] [int] ... [int]
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void mostrarMatriz(int **, int, int);

int **punteroMatriz, nFilas, nCols;

int main() {

    pedirDatos();

    mostrarMatriz(punteroMatriz, nFilas, nCols);

    for (int i = 0; i < nFilas; i++) {
        delete[] punteroMatriz[i];
    }

    delete[] punteroMatriz;

    system("pause");
    return 0;
}

void pedirDatos() {
    cout << "Digite el número de filas: ";
    cin >> nFilas;
    cout << "Digite el número de columnas: ";
    cin >> nCols;

    // Reservando memoria para la matriz dinámica
    punteroMatriz = new int*[nFilas]; // Reservando memoria para las filas
    for (int i = 0; i < nFilas; i++) {
        punteroMatriz[i] = new int[nCols]; // Reservando memoria para las columnas
    }

    cout << "\nDigitando los elementos de la matriz:\n";
    for (int i = 0; i < nFilas; i++) {
        for (int j = 0; j < nCols; j++) {
            cout << "Digite un número[" << i << "][" << j << "]: ";
            cin >> *(*(punteroMatriz + i) + j); // punteroMatriz[i][j]
        }
    }
}

void mostrarMatriz(int **punteroMatriz, int nFilas, int nCols) {
    cout << "\n\nImprimiendo matriz:\n";
    for (int i = 0; i < nFilas; i++) {
        for (int j = 0; j < nCols; j++) {
            cout << *(*(punteroMatriz + i) + j) << " ";
        }
        cout << "\n";
    }
}