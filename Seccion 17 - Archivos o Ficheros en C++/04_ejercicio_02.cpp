/*
    02. Lectura de un archivo de texto preguntando el nombre o la 
    ubicación.
*/

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;

void lectura();

int main() {

    lectura();

    system("pause");
    return 0;
}

void lectura() {
    ifstream archivo;
    string nombreArchivo, texto;

    cout << "\nDigite el nombre o la ubicación del archivo: ";
    getline(cin, nombreArchivo);

    archivo.open(nombreArchivo.c_str(), ios::in); // Abrimos el archivo en modo lectura

    if (archivo.fail()) {
        cout << "\nNo se pudo abrir el archivo." << endl;
        exit(1);
    }

    while (!archivo.eof()) { // Mientras no sea el final del archivo
        getline(archivo, texto);
        cout << texto << endl;
    }

    archivo.close();
}