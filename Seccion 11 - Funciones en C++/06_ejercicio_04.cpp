/*
* 4. Escriba un programa que devuelva la parte fraccionaria de cualquier
* número introducido por el ususario. Por ejemplo, si se introduce el
* número 256.879, debería desplegarse el número 0.0879.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

// Prototipos de función
void pedirDatos();
float parteFraccionaria(float r);

float numero;

int main() {

    pedirDatos();

    cout << "La parte fraccionaria del número " << numero << " es: " << parteFraccionaria(numero) << endl;

    system("pause");
    return 0;
}

void pedirDatos() {
    cout << "Digite un número: ";
    cin >> numero;
}

// 24.567 => 0.567
float parteFraccionaria(float r) {
    int entero = r;

    float resultado = r - entero;

    return resultado;
}