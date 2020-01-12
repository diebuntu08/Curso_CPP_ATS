/*
* Hacer una estructura llamada alumno, en la cual se tendrán los siguientes campos:
* - Nombre
* - Edad
* - Promedio
* Pedir datos al usuario para 3 alumnos, comprobar cuál de los 3 tiene el mejor promedio
* y posteriormente imprimir los datos de ese alumno.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Alumno {
    char nombre[20];
    int edad;
    float promedio;
} alumnos[3];

int main() {

    float mayor = 0;
    int pos;

    for (int i = 0; i < 3; i++) {
        // Guardando los datos para tres alumnos
        cout << i + 1 << ". Digite el nombre del alumno: ";
        cin.getline(alumnos[i].nombre, 20, '\n');
        cout << i + 1 <<  ". Digite la edad: ";
        cin >> alumnos[i].edad;
        cout << i + 1 << ". Digite el promedio: ";
        cin >> alumnos[i].promedio;
        cin.ignore();

        cout << "\n";

        // Comprobando cual de los tres alumnos tiene el mejor promedio
        if (alumnos[i].promedio > mayor) {
            mayor = alumnos[i].promedio;
            pos = i;
        }
    }

    // Imprimiendo datos del mejor promedio
    cout << "\nNombre: " << alumnos[pos].nombre << endl;
    cout << "Edad: " << alumnos[pos].edad << endl;
    cout << "Promedio: " << alumnos[pos].promedio << endl;


    system("pause");
    return 0;
}