// Arreglos en C++

#include <iostream>
#include <stdlib.h>
#include "Alumno.h"

using namespace std;

int main() {

    Alumno alumnos[4]; // Creación de un arreglo de objetos estáticos
    Alumno* alumnos2 = new Alumno[3]; // Creación de un arreglo de objetos dinámicos

    for (int i = 0; i < 3; i++) {
        (alumnos2 + i)->pedirDatos();
        cout << endl;
    }

    cout << "\nMostrando las notas: " << endl;
    for (int i = 0; i < 3; i++) {
        (alumnos2 + i)->mostrarNotas();
        cout << endl;
    }


    system("pause");
    return 0;
}