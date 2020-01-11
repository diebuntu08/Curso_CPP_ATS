/* Matrices 
 * 7. Desarrollar un programa que determine si una matriz es simétrica o no.
 * Una matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int numeros[100][100], filas, cols;
    char band = 'F';

    cout << "Digite el número de filas: "; cin >> filas;
    cout << "Digite el número de columnas: "; cin >> cols;

    for (int i = 0; i < filas; i++) {
        for  (int j = 0; j < cols; j++) {
            cout << "Digite un número [" << i << "][" << j << "]: ";
            cin >> numeros[i][j];
        }
    }

    if (filas == cols) {
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < cols; j++) {
                if (numeros[i][j] == numeros[j][i]) {
                    band = 'V';
                }
            }
        }
    }

    if (band == 'V') {
        cout << "La matriz es simétrica." << endl;
    } else {
        cout << "La matriz NO es simétrica." << endl;
    }

    system("pause");
    return 0;
}