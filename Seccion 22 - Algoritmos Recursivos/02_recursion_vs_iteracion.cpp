/*
    Dado un número natural N, obtener la suma de los dígitos de los cuales consta.
    Presentar un algoritmo recursivo y otro iterativo.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

// Solucion recursiva
int sumaRecursiva(int n) {
    if (n <= 9) { // Caso base
        return n;
    } else { // Caso recursivo
        return sumaRecursiva(n / 10) + n % 10;
    }
}

// Solucion iterativa
int sumaIterativa(int n) {
    int suma = 0;

    while (n > 9) {
        suma += n % 10;
        n /= 10;
    }

    return suma + n;
}

int main() {

    int numero;

    cout << "Digite un número: ";
    cin >> numero;

    cout << "\nLa suma de los dígitos del número es: " << endl;
    cout << "Algoritmo recursivo: " << sumaRecursiva(numero) << endl;
    cout << "Algoritmo iterativo: " << sumaIterativa(numero) << endl;

    system("pause");
    return 0;
}