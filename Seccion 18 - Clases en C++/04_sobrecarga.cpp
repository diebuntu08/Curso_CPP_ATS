// Sobrecarga de funciones miembro

#include <iostream>
#include <stdlib.h>
#include "Persona.h"

using namespace std;

int main() {

    Persona* persona1 = new Persona("Diego", 33);
    persona1->correr();

    Persona* persona2 = new Persona("603580727");
    persona2->correr(10);

    system("pause");
    return 0;
}