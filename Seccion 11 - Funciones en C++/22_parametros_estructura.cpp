// Paso de parámetros de tipo struct

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Persona {
    char nombre[30];
    int edad;
} p1;

// Prototipo de función
void pedirDatos();
void mostrarDatos(Persona);

int main() {

    pedirDatos();
    mostrarDatos(p1);

    system("pause");
    return 0;
}

void pedirDatos() {
    cout << "Digite su nombre: ";
    cin.getline(p1.nombre, 30, '\n');
    cout << "Digite su edad: ";
    cin >> p1.edad; 
}

void mostrarDatos(Persona p) {
    cout << "\n\nNombre: " << p.nombre << endl;
    cout << "Edad: " << p.edad << endl;
}