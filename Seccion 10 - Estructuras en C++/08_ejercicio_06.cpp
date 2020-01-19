/*
* 6. Utilizar las 2 estructuras del programa 5, pero ahora pedir los datos para N
* alumnos, y calcular cuál de todos tiene el mejor promedio, e imprimir sus datos.
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
} alumnos[100];

int main() {

    int n_alumnos, posM;
    float promedio_alumno[100], mayor = 0;

    cout << "Digite el número de alumnos: ";
    cin >> n_alumnos;

    for (int i = 0; i < n_alumnos; i++) {
        cin.ignore();
        cout << i + 1 << ". Digite el nombre del alumno: "; cin.getline(alumnos[i].nombre, 20, '\n');
        cout << i + 1 << ". Digite el sexo del alumno: "; cin.getline(alumnos[i].sexo, 10, '\n');
        cout << i + 1 << ". Digite la edad del alumno: "; cin >> alumnos[i].edad;

        cout << "\nAhora vamos a pedir las notas: \n";
        cout << "Digite la primera nota: "; cin >> alumnos[i].prom.nota1;
        cout << "Digite la segunda nota: "; cin >> alumnos[i].prom.nota2;
        cout << "Digite la tercera nota: "; cin >> alumnos[i].prom.nota3;
        cout << "\n";

        // Vamos a sacar el promedio del alumno
        promedio_alumno[i] = (alumnos[i].prom.nota1 + alumnos[i].prom.nota2 + alumnos[i].prom.nota3) / 3;

        if (promedio_alumno[i] > mayor) {
            mayor = promedio_alumno[i];
            posM = i;
        }
    }

    cout << "\nMostrando los datos del alumno con mejor promedio." << endl;
    cout << "Nombre: " << alumnos[posM].nombre << endl;
    cout << "Sexo: " << alumnos[posM].sexo << endl;
    cout << "Edad: " << alumnos[posM].edad << endl;
    cout << "Promedio: " << promedio_alumno[posM] << endl;

    system("pause");
    return 0;
}