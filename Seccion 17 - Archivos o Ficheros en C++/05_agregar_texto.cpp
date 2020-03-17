// Añadir texto al final del archivo

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>

using namespace std;

void agregar();

int main() {

    agregar();


    system("pause");
    return 0;
}

void agregar() {
    ofstream archivo;
    string texto;

    archivo.open("programacion.txt", ios::app); // Abrimos el archivo en modo añadir texto

    if (archivo.eof()) {
        cout << "No se pudo abrir el archivo." << endl;
        exit(1);
    }

    cout << "\nDigite el texto que quiere añadir al archivo: ";
    getline(cin, texto);

    archivo << "\n" << texto;

    archivo.close(); // Cerramos el archivo
}