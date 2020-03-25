/*
    02. Construir un programa que calcule el área y el perímetro de un
    cuadrilátero dada la longitud de sus lados. Los valores de la longitud
    deberán introducirse por línea de órdenes. Si es un cuadrado, sólo se
    proporcionará la longitud de uno de los lados al constructor.
*/

#include <iostream>
#include <stdlib.h>
#include "Cuadrilatero.h"

using namespace std;

int main() {

    Cuadrilatero* c1;
    float lado1, lado2;

    cout << "Digite el lado 1: ";
    cin >> lado1;
    cout << "Digite el lado 2: ";
    cin >> lado2;

    if (lado1 == lado2) {
        c1 = new Cuadrilatero(lado1);
    } else {
        c1 = new Cuadrilatero(lado1, lado2);
    }

    cout << "El perímetro es: " << c1->obtenerPerimetro() << endl;
    cout << "El área es: " << c1->obtenerArea() << endl;

    system("pause");
    return 0;
}