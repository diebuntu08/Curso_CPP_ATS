/*
* Plantillas de Función
* Ejemplo: Sacar el valor absoluto de un número
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

// Prototipo de función
template <class TIPOD>
void mostrar_ABS(TIPOD numero);

int main() {

    int num1 = -4;
    float num2 = -56.67;
    double num3 = -123.5678;

    mostrar_ABS(num1);
    mostrar_ABS(num2);
    mostrar_ABS(num3);


    system("pause");
    return 0;
}

template <class TIPOD>
void mostrar_ABS(TIPOD numero) {
    if (numero < 0) {
        numero = numero * -1;
    }

    cout << "El valor absoluto del número es: " << numero << endl;
}