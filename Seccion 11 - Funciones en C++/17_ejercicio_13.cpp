/*
* 13. Escriba una función que tome como parámetros un vector de números
* y su tamaño. Esta función deberá cambiar el signo de los elementos del
* vector.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void cambiarSigno(int vec[], int);
void mostrarVector(int vec[], int);

int vec[100], tam;

int main() {

    pedirDatos();
    cambiarSigno(vec, tam);
    mostrarVector(vec, tam);

    system("pause");
    return 0;
}

void pedirDatos() {
    cout << "Digite el tamaño del vector: ";
    cin >> tam;

    for (int i = 0; i < tam; i++) {
        cout << i + 1 << ". Digite un número: ";
        cin >> vec[i];
    }
}

void cambiarSigno(int vec[], int tam) {
    for (int i = 0; i < tam; i++) {
        vec[i] *= -1;
    }
}

void mostrarVector(int vec[], int tam) {
    cout << "\nMostrando los elementos del vector con signo cambiado:\n";

    for (int i = 0; i < tam; i++) {
        cout << vec[i] << " ";
    }

    cout << "\n";
}