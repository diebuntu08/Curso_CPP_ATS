/*
    03. Defina una plantilla de clase Materia, de tal manera que el tipo de dato del atributo
    calificacion sea del tipo T. Esto permitirá crear objetos de tipo materia que tengan 
    calificaciones que sean: números enteros, números decimales y letras.

        a) Crear un objeto de tipo Materia usando el tipo int. Imprima los valores de los atributos
        del objeto crado.
        b) Crear un objeto de tipo Materia usando atributos float.
        c) Crear un objeto de tipo Materia usando atributos float.
        d) Incluya un método en la clase que permita modificar la calificación de una materia.
*/

#include <iostream>
#include <stdlib.h>
#include "Materia.h"

using namespace std;

int main() {

    Materia <int> curso1("Algoritmos", 1, 15);
    curso1.mostrarDatos();

    Materia <float> curso2("Matemáticas", 2, 18.89);
    Materia <char> curso3("Lenguaje", 3, 'A');

    cout << "\n";
    curso2.mostrarDatos();

    cout << "\n";
    curso3.mostrarDatos();

    system("pause");
    return 0;
}