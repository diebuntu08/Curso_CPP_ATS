// Funciones amigas en C++

#include <iostream>
#include <stdlib.h>
#include "Personaje.h"

using namespace std;

// Función para modificar los valores de ataque y defensa de un objeto Personaje
void modificar(Personaje &p, int at, int def) {
    p.ataque = at;
    p.defensa = def;
}

int main() {

    Personaje* principal = new Personaje(100, 90);

    principal->mostrarDatos();

    modificar(*principal, 60, 50);

    principal->mostrarDatos();

    system("pause");
    return 0;
}