/*
* 5. Hacer dos estructuras, una llamada promedio que tendrá los siguientes campos:
* - nota1
* - nota2
* - nota 3
* Y otra llamada alumno que tendrá los siguientes campos:
* - nombre
* - sexo
* - edad
* Hacer que la estructura promedio esté anidada dentro dela estructura alumno,
* luego pedir todos los datos para un alumno, luego calcular su promedio y por
* último imprimir todos sus datos incluidos el promedio.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Promedio {
    float nota1;
    float nota2;
    float nota3;
};

struct Alumno {
    char nombre[20];
    char sexo[10];
    int edad;
    struct Promedio prom;
} alumno1;

int main() {

    float promedio_alumno;

    cout << "Digite su nombre: ";
    cin.getline(alumno1.nombre, 20, '\n');
    cout << "Digite su sexo: ";
    cin.getline(alumno1.sexo, 10, '\n');
    cout << "Digite su edad: ";
    cin >> alumno1.edad;

    cout << "\n.:Notas del alumno:.\n";
    cout << "Nota 1: "; cin >> alumno1.prom.nota1;
    cout << "Nota 2: "; cin >> alumno1.prom.nota2;
    cout << "Nota 3: "; cin >> alumno1.prom.nota3;

    promedio_alumno = (alumno1.prom.nota1 + alumno1.prom.nota2 + alumno1.prom.nota3) / 3;

    cout << "\nDatos del alumno:\n";
    cout << "Nombre: " << alumno1.nombre << endl;
    cout << "Sexo: " << alumno1.sexo << endl;
    cout << "Edad: " << alumno1.edad << endl;
    cout << "Promedio: " << promedio_alumno << endl;

    system("pause");
    return 0;
}