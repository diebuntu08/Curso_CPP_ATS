/*
* 02. Determinar si un número es primo o no con punteros, y además, indicar
* en qué posición de memoria se guardó el número.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int numero, *dir_numero, cont = 0;

    cout << "Digite el número: "; cin >> numero;

    dir_numero = &numero;

    for (int i = 1; i < *dir_numero; i++) {
        if (*dir_numero % i == 0) {
            cont++;
        }
    }

    if (cont > 2) {
        cout << "El número " << *dir_numero << " no es primo." << endl;
        cout << "Posición: " << dir_numero << endl;
    } else {
        cout << "El número " << *dir_numero << " es primo." << endl;
        cout << "Posición: " << dir_numero << endl;
    }

    system("pause");
    return 0;
}