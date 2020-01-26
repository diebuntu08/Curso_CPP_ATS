/*
* 11. Realice una función que tome como parámetros un vector de números
* enteros y devuelva la suma de sus elementos.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
int calcularSuma(int vec[], int);

int vec[100], tam;

int main() {

    pedirDatos();

    cout << "\nLa suma de los elementos del vector es: " << calcularSuma(vec, tam) << endl;

    system("pause");
    return 0;
}

void pedirDatos() {
    cout << "Digite el número de elementos del vector: ";
    cin >> tam;

    for (int i = 0; i < tam; i++) {
        cout << i + 1 << ". Digite un número: ";
        cin >> vec[i];
    }
}

int calcularSuma(int vec[], int tam) {
    int suma = 0;

    for (int i = 0; i < tam; i++) {
        suma += vec[i];
    }

    return suma;
}