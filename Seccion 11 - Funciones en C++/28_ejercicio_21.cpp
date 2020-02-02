/*
* 21. Escriba una función recursiva que calcule un número elevado a una
* potencia entera mayor o igual que cero: x^y
*
*    potencia(x, y) = x                    , y = 1
                      x * potencia(x, y-1) , y > 1
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int potencia(int, int);

int main() {

    int base, exponente;

    cout << "Digite la base: "; cin >> base;
    cout << "Digite el exponente: "; cin >> exponente;

    cout << "\nLa potencia de " << base << "^" << exponente << " es: " << potencia(base, exponente) << endl;

    system("pause");
    return 0;
}

int potencia(int x, int y) {
    if (y == 0) {
        return 1;
    } else if (y == 1) {
        return x;
    } else {
        return x * potencia(x, y - 1);
    }
}