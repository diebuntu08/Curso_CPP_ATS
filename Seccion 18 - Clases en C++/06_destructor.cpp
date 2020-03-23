// Destructor de objetos

#include <iostream>
#include <stdlib.h>
#include "Perro.h"

using namespace std;

int main() {

    Perro perro1("Fido", "Doberman");

    perro1.mostrarDatos();
    perro1.jugar();
    

    Perro* perro2 = new Perro("Sasa", "Pitbull");
    perro2->jugar();
    delete perro2;

    perro2->jugar();

    system("pause");
    return 0;
}