// Paso de parámetros por referencia

#include <iostream>
#include <stdlib.h>

using namespace std;

void valNuevo(int&, int&);

int main() {

    int num1, num2;

    cout << "Digite dos números: ";
    cin >> num1 >> num2;

    valNuevo(num1, num2);

    cout << "El nuevo valor del primer número es: " << num1 << endl;
    cout << "El nuevo valor del segundo número es: " << num2 << endl;

    system("pause");
    return 0;
}

void valNuevo(int& xnum, int& ynum) {
    cout << "El valor del primer número es: " << xnum << endl;
    cout << "El valor del segundo número es: " << ynum << endl;

    // Cambiamos los valores de las variables
    xnum = 89;
    ynum = 45;
}