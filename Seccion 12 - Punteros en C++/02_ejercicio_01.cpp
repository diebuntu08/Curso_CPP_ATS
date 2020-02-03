/*
* 01. Comprobar si un número es par o impar, y señalar la posición de memoria
* donde se está guardando el número con punteros.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int numero, *dir_numero;

    cout << "Digite un número: "; cin >> numero;

    dir_numero = &numero; // Guardando la posición de memoria

    if (*dir_numero % 2 == 0) {
        cout << "El número " << *dir_numero << " es par" << endl;
        cout << "La posición de memoria es: " << dir_numero << endl;
    } else {
        cout << "El número " << *dir_numero << " es impar" << endl;
        cout << "La posición de memoria es: " << dir_numero << endl;
    }


    system("pause");
    return 0;
}