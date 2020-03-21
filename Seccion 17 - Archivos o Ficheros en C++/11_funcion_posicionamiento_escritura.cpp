// Funciones de posicionamiento - escritura

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>

using namespace std;

void escribir();

int main() {

    escribir();

    system("pause");
    return 0;
}

void escribir() {

    ofstream archivo;

    archivo.open("posicion.txt", ios::out);

    if (archivo.fail()) {
        cout << "\nNo se pudo abrir el archivo." << endl;
        exit(1);
    }

    cout << "Posición actual del archivo: " << archivo.tellp() << endl;
    //archivo << "Hola que tal?" << endl;

    archivo.seekp(5);
    archivo << "como estás?";

    cout << "Posición actual del archivo: " << archivo.tellp() << endl;

    archivo.close();
}