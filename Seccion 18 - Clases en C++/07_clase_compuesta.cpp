// Autorreferencia del objeto: this

#include <iostream>
#include <stdlib.h>
#include "Estudiante.h"

using namespace std;

int main() {

    Estudiante* estudiante1 = new Estudiante("34FG", 15.0, 56, "Calle las Palmas #389");

    estudiante1->mostrarDatos();

    system("pause");
    return 0;
}