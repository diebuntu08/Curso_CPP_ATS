/*
* 04. Rellenar un arreglo con n números, posteriormente utilizando
* punteros determinar el menor elemento del arreglo.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int nElementos, numeros[100], *dir_numeros, menor = 99999;

    cout << "Digite el número de elementos: "; cin >> nElementos;

    for (int i = 0; i < nElementos; i++) {
        cout << "Digite un número[" << i << "]: "; cin >> numeros[i];
    }

    dir_numeros = numeros;

    for (int i = 0; i < nElementos; i++) {
        if (*dir_numeros < menor) {
            menor = *dir_numeros;
        }

        dir_numeros++;
    }

    cout << "El menor elemento es: " << menor << endl;

    system("pause");
    return 0;
}