
#include <iostream>
#include <string.h>
#include "Perro.h"

using namespace std;

void Perro::mostrarDatos() {
    cout << "Nombre del perro: " << nombre << endl;
    cout << "Raza del perro: " << raza << endl;
}

void Perro::jugar() {
    cout << "El perrito " << nombre << " está jugando." << endl;
}