// Estructura básica en C++

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Persona {
    char nombre[20];
    int edad;
}
persona1 = {"Diego", 33},
persona2 = {"Melina", 32},
persona3;

int main() {

    cout << "Nombre1: " << persona1.nombre << endl;
    cout << "Edad1: " << persona1.edad << endl;

    cout << "\nNombre2: " << persona2.nombre << endl;
    cout << "Edad2: " << persona2.edad << endl;

    cout << "Digite un nombre: ";
    cin.getline(persona3.nombre, 20, '\n');
    cout << "Digite una edad: ";
    cin >> persona3.edad;

    cout << "\nImprimiendo los datos digitados\n";
    cout << "Nombre: " << persona3.nombre << endl;
    cout << "Edad: " << persona3.edad << endl;

    system("pause");
    return 0;
}