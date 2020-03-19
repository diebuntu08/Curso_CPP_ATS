// Archivos binarios

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

void escribir();

struct Registro {
    char nombre[20];
    char apellido[20];
};

int main() {

    escribir();

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