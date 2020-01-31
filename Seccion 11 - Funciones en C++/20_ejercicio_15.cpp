/*
* 15. Desarrollar una función que determine si una matriz es simétrica o no.
*
* Una matriz es simétrica si A = A^t.
*
* La matriz debe ser cuadrada: Aij = Aji.
* 
* |  2  5  9  |            |  2  5   9 |
* |  5  8 -1  |    ->      |  5  8  -1 |
* |  9 -1 10  |            |  9 -1  10 |
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();

int m[100][100], nfilas, ncols;
void comprobarSimetria(int m[][100], int, int);

int main() {

    pedirDatos();
    comprobarSimetria(m, nfilas, ncols);

    system("pause");
    return 0;
}

void pedirDatos() {
    cout << "Digite el número de filas: ";
    cin >> nfilas;
    cout << "Digite el número de columnas: ";
    cin >> ncols;

    for (int i = 0; i < nfilas; i++) {
        for  (int j = 0; j < ncols; j++) {
            cout << "[" << i << "][" << j << "] Digite un número: ";
            cin >> m[i][j];
        }
    }
}

void comprobarSimetria(int m[][100], int nfilas, int ncols) {
    int cont = 0;

    if (nfilas == ncols) {
        for (int i = 0; i < nfilas; i++) {
            for (int j = 0; j < ncols; j++) {
                if (m[i][j] == m[j][i]) {
                    cont++;
                }
            }
        }
    }

    if (cont == nfilas * ncols) {
        cout << "\nLa matriz es Simétrica!" << endl;
    } else {
        cout << "\nLa matriz NO es Simétrica!" << endl;
    }
}