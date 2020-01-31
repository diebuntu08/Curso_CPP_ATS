// Paso de parámetros tipo matriz

// Elevar al cuadrado todos los elementos de una matriz

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

void mostrarMatriz(int m[][3], int, int, string estado);
void calcularCuadrado(int m[][3], int, int);

int main() {

    const int NFILAS = 2;
    const int NCOLS = 3;
    int m[NFILAS][NCOLS] = {{1,2,3}, {4,5,6}};

    mostrarMatriz(m, NFILAS, NCOLS, "original");
    calcularCuadrado(m, NFILAS, NCOLS);

    mostrarMatriz(m, NFILAS, NCOLS, "elevada");
    

    system("pause");
    return 0;
}

void mostrarMatriz(int m[][3], int nfilas, int ncols, string estado) {
    cout << "Mostrando matriz " << estado << ":\n";

    for (int i = 0; i < nfilas; i++) {
        for (int j = 0; j < ncols; j++) {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
}

void calcularCuadrado(int m[][3], int nfilas, int ncols) {
    for (int i = 0; i < nfilas; i++) {
        for (int j = 0; j < ncols; j++) {
            m[i][j] *= m[i][j];
        }
    }
}