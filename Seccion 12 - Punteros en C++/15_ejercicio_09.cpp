/*
    09. Realice un programa que calcule la suma de dos matrices dinámicas.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void sumarMatrices(int **, int **, int, int);
void mostrarMatriz(int **, int, int);

int **puntero_matriz1, **puntero_matriz2, nFilas, nCols;

int main() {

    pedirDatos();

    sumarMatrices(puntero_matriz1, puntero_matriz2, nFilas, nCols);

    mostrarMatriz(puntero_matriz1, nFilas, nCols);

    // Liberar la memoria utilizada
    for (int i = 0; i < nFilas; i++) {
        delete[] puntero_matriz2[i];
    }
    delete[] puntero_matriz2;

    for (int i = 0; i < nFilas; i++) {
        delete[] puntero_matriz1[i];
    }
    delete[] puntero_matriz1;

    system("pause");
    return 0;
}

void pedirDatos() {
    cout << "Digite el número de filas: ";
    cin >> nFilas;
    cout << "Digite el número de columnas: ";
    cin >> nCols;

    // Reservando memoria para las matrices dinámicas
    // Primera matriz
    puntero_matriz1 = new int*[nFilas]; //Reservar memoria para las filas
    for (int i = 0; i < nFilas; i++) {
        puntero_matriz1[i] = new int[nCols]; // Reservar memoria para las columnas
    }

    cout << "\nDigite los elementos de la primera matriz:\n";
    for (int i = 0; i < nFilas; i++) {
        for (int j = 0; j < nCols; j++) {
            cout << "Digite un número[" << i << "][" << j << "]: ";
            cin >> *(*(puntero_matriz1 + i) + j); // puntero_matriz1[i][j]
        }
    }

    // Segunda matriz
    puntero_matriz2 = new int*[nFilas]; //Reservar memoria para las filas
    for (int i = 0; i < nFilas; i++) {
        puntero_matriz2[i] = new int[nCols]; // Reservar memoria para las columnas
    }

    cout << "\nDigite los elementos de la segunda matriz:\n";
    for (int i = 0; i < nFilas; i++) {
        for (int j = 0; j < nCols; j++) {
            cout << "Digite un número[" << i << "][" << j << "]: ";
            cin >> *(*(puntero_matriz2 + i) + j); // puntero_matriz1[i][j]
        }
    }
}

void sumarMatrices(int **puntero_matriz1, int **puntero_matriz2, int nFilas, int nCols) {
    for (int i = 0; i < nFilas; i++) {
        for (int j = 0; j < nCols; j++) {
            *(*(puntero_matriz1 + i) + j) += *(*(puntero_matriz2 + i) + j);
        }
    }
}

void mostrarMatriz(int **puntero_matriz, int nFilas, int nCols) {
    cout << "\nLa matriz resultante es:\n";
    for (int i = 0; i < nFilas; i++) {
        for (int j = 0; j < nCols; j++) {
            cout << *(*(puntero_matriz + i) + j) << " "; // puntero_matriz[i][j]
        }
        cout << "\n";
    }
}