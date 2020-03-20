// Archivos binarios

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

void escribir();
void leer();

struct Registro {
    char nombre[20];
    char apellido[20];
};

int main() {

    escribir();
    leer();

    system("pause");
    return 0;
}

void escribir() {
    ofstream archivoB;

    archivoB.open("prueba.dat", ios::out | ios::binary);

    if (archivoB.fail()) {
        cout << "No se puede crear el archivo." << endl;
        exit(1);
    }

    Registro persona;

    cout << "\tPidiendo datos" << endl;
    cout << "Digite un nombre: ";
    cin.getline(persona.nombre, 20, '\n');
    cout << "Digite un apellido: ";
    cin.getline(persona.apellido, 20, '\n');

    // Escribimos los datos en el archivo binario
    archivoB.write((char *)&persona, sizeof(Registro));

    archivoB.close();

}

void leer() {
    ifstream archivoB;

    archivoB.open("prueba.dat", ios::in | ios::binary);

    if (archivoB.fail()) {
        cout << "\nNo se pudo abrir el archivo." << endl;
        exit(1);
    }

    Registro persona;

    archivoB.read((char *)&persona, sizeof(Registro));

    cout << "\nMostrando los datos leidos: " << endl;
    cout << "Nombre: " << persona.nombre << endl;
    cout << "Apellidos: " << persona.apellido << endl;

    archivoB.close();
}