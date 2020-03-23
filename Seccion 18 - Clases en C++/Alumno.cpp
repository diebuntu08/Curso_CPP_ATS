
#include <iostream>
#include "Alumno.h"

using namespace std;

void Alumno::pedirDatos() {
    cout << "Digite la calificación de matemáticas: ";
    cin >> calMate;

    cout << "Digite la calificación de programación: ";
    cin >> calProgra;
}

void Alumno::mostrarNotas() {
    cout << "Nota de Matemáticas: " << calMate << endl;
    cout << "Nota de Programación: " << calProgra << endl;
    cout << "Promdio: " << (calMate + calProgra) / 2 << endl;
}