// Funciones de posicionamiento - lectura

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>

using namespace std;

void leer();

int main() {

    leer();

    system("pause");
    return 0;
}

void leer() {

    ifstream archivo;

    archivo.open("posicion.txt", ios::in);

    if (archivo.fail()) {
        cout << "\nNo se pudo abrir el archivo." << endl;
        exit(1);
    }

    string linea;
    archivo.seekg(8);
    cout << "Posición actual del archivo: " << archivo.tellg() << endl;
    getline(archivo, linea);
    
    cout << linea << endl;

    archivo.close();
}