// Escribir en un archivo de texto

#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

// Prototipo de función
void escribir();

int main() {

    escribir();

    system("pause");
    return 0;
}

void escribir() {
    ofstream archivo;
    string nombreArchivo, frase;

    cout << "Digite el nombre del archivo: ";
    getline(cin, nombreArchivo);

    archivo.open(nombreArchivo.c_str(), ios::out); // Abriendo el archivo en modo de salida, si no existe lo crea

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo." << endl;
        exit(1);
    }

    cout << "\nDigite el texto que se agregará al archivo: ";
    getline(cin, frase);

    archivo << frase;
    archivo << "Hola que tal mi nombre es Diego";
    archivo.close(); // Cerrar el archivo
}