/*
    10. Realice un programa que lea una matriz dinámica de NxM y obtenga
    su matriz transpuesta. La matriz transpuesta es aquella en la que la
    columna i era la fila i de la matriz original.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void mostrarMatriz(int **, int, int);

int **puntero_matriz, nFilas, nCols;

int main() {

    pedirDatos();

    mostrarMatriz(puntero_matriz, nFilas, nCols);

    // Liberando memoria de la matriz
    for (int i = 0; i < nFilas; i++) {
        delete[] puntero_matriz[i];
    }
    delete[] puntero_matriz;

    system("pause");
    return 0;
}

void pedirDatos() {
    cout << "Digite el número de filas: ";
    cin >> nFilas;
    cout << "Digite el número de columnas: ";
    cin >> nCols;

    puntero_matriz = new int*[nFilas]; // Reservando memoria para el número de filas
    for (int i = 0; i < nFilas; i++) {
        puntero_matriz[i] = new int[nCols]; // Reservando memoria para las columnas
    }

    for (int i = 0; i < nFilas; i++) {
        for (int j = 0; j < nCols; j++) {
            cout << "Digite un número[" << i << "][" << j << "]: ";
            cin >> *(*(puntero_matriz + i) + j); // puntero_matriz[i][j]
        }
    }
}

void mostrarMatriz(int **puntero_matriz, int nFilas, int nCols) {
    cout << "\nImprimiendo la matriz original:\n";
    for (int i = 0; i < nFilas; i++) {
        for (int j = 0; j < nCols; j++) {
            cout << *(*(puntero_matriz + i) + j) << " ";
        }
        cout << "\n";
    }

    cout << "\nImprimiendo la matriz transpuesta:\n";
    for (int i = 0; i < nFilas; i++) {
        for (int j = 0; j < nCols; j++) {
            cout << *(*(puntero_matriz + j) + i) << " ";
        }
        cout << "\n";
    }
}