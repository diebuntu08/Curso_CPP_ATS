/*
* 16. Realice una función que dada una matriz y un número de fila de la
* matriz devuelva el menor de los elementos alamcenamos en dicha fila.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
int comprobarMenorElemento(int m[][100], int, int);

int m[100][100], nfilas, ncols;

int main() {

    pedirDatos();

    int menorElemento = comprobarMenorElemento(m, nfilas, ncols);

    cout << "\nEl menor elemento es: " << menorElemento << endl;

    system("pause");
    return 0;
}

void pedirDatos() {
    cout << "Digite el número de filas: ";
    cin >> nfilas;
    cout << "Digite el número de columnas: ";
    cin >> ncols;

    for (int i = 0; i < nfilas; i++) {
        for (int j = 0; j < ncols; j++) {
            cout << "[" << i << "][" << j << "] Digite un número: ";
            cin >> m[i][j];
        }
    }
}

int comprobarMenorElemento(int m[][100], int nfilas, int ncols) {
    int fila, menor = 99999;

    cout << "\nDigite un número de fila para comprobar menor elemento: ";
    cin >> fila;

    for (int i = 0; i < nfilas; i++) {
        for (int j = 0; j < ncols; j++) {
            if (i == fila) {
                if (m[i][j] < menor) {
                    menor = m[i][j];
                }
            }
        }
    }

    return menor;
}
