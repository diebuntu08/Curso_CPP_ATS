/*
    01. Definir una plantilla dentro de un archivo de cabecera llamado "intercamio.h"
    que pueda intercambiar el valor de dos elementos del mismo tipo.
*/

#include <iostream>
#include <stdlib.h>
#include "Intercambio.h"

using namespace std;

int main() {

    int dato1, dato2;

    cout << "Digite el valor de dato1: ";
    cin >> dato1;
    cout << "Digite el valor de dato2: ";
    cin >> dato2;

    // Intercambiar el valor de las dos variables
    intercambiar(dato1, dato2);

    cout << "\nLos nuevos valores son: " << endl;
    cout << "dato1: " << dato1 << endl;
    cout << "dato2: " << dato2 << endl;

    system("pause");
    return 0;
}