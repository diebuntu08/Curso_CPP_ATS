/*
    11. Hacer una estructura llamada alumno, en la cual se tendrán los siguientes campos:
    * Nombre
    * Edad
    * Promedio
    Pedir datos al usuario para tres alumnos, comprobar cuál de los 3 tiene el mejor promedio
    y posteriormente imprimir los datos del alumno.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Alumno {
    char nombre[30];
    int edad;
    float promedio;
} alumno[3], *puntero_alumno = alumno;

// Prototipo de función
void pedirDatos();
void calcularMejorPromedio(Alumno *);

int main() {

    pedirDatos();

    calcularMejorPromedio(puntero_alumno);

    system("pause");
    return 0;
}

void pedirDatos() {
    for (int i = 0; i < 3; i++) {
        cout << "Digite su nombre: ";
        cin.getline((puntero_alumno + i)->nombre, 30, '\n');
        cout << "Digite su edad: ";
        cin >> (puntero_alumno + i)->edad;
        cout << "Digite el promedio: ";
        cin >> (puntero_alumno + i)->promedio;
        cin.ignore();
        cout << "\n";
    }
}

void calcularMejorPromedio(Alumno *puntero_alumno) {
    float mayor = 0.0;
    int pos = 0;

    for (int i = 0; i < 3; i++) {
        if ((puntero_alumno + i)->promedio > mayor) { // puntero_alumno[i].promedio
            mayor = (puntero_alumno + i)->promedio; // Comprobar el mayor promedio
            pos = i; // Guardar la posición del mayor promedio
        }
    }

    // Imprimir los datos del alumno con mayor promedio
    cout << "\nEl alumno con mejor promedio es:\n";
    cout << "Nombre: " << (puntero_alumno + pos)->nombre << endl;
    cout << "Edad: " << (puntero_alumno + pos)->edad << endl;
    cout << "Promedio: " << (puntero_alumno + pos)->promedio << endl;
}