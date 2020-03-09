/*
    01. Realice un programa que pida al usuario el nombre de un fichero
    de texto y, a continuación permita almacenar al usuario tantas frases
    como el mismo desee.
*/

#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

void escribirFrase();

int main() {

    escribirFrase();

    system("pause");
    return 0;
}

void escribirFrase() {
    ofstream archivo;
    string nombreArchivo, frase;
    char rpt;

    cout << "\nDigite el nombre del archivo: ";
    getline(cin, nombreArchivo);

    archivo.open(nombreArchivo.c_str(), ios::out); // Abriendo el archivo

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo." << endl;
        exit(1);
    }

    do {
        cin.ignore();
        cout << "\nDigite una frase: ";
        getline(cin, frase);
        archivo << frase << endl;

        cout << "\nDesea agregar otra frase? (s/n): ";
        cin >> rpt;
    } while((rpt == 's') || (rpt == 'S'));

    archivo.close(); // Cerramos el archivo
}