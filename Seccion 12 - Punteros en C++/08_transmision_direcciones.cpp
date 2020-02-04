/*
* Transmisión de direcciones
*
* Ejemplo: intercambiar el valor de 2 variables
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void intercambio(float *, float *);

int main() {

    float num1 = 20.8, num2 = 6.78;

    cout << "Primer número: " << num1 << endl;
    cout << "Segundo número: " << num2 << endl;

    intercambio(&num1, &num2);

    cout << "\n\nNuevo valor del primer número: " << num1 << endl;
    cout << "Nuevo valor del segundo número: " << num2 << endl;

    system("pause");
    return 0;
}

void intercambio(float *dirNum1, float *dirNum2) {
    float aux;

    // Intercambiar los valores de las variables
    aux = *dirNum1;
    *dirNum1 = *dirNum2;
    *dirNum2 = aux;
}