/*
    03. Realice un programa que pida al usuario el nombre o ubicación
    de un fichero de texto y a continucación añada un texto en él hasta
    que el usuario lo decida.
*/

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
    string nombreArchivo, texto;
    char rpt;

    cout << "\nDigite el nombre o la ubicación del archivo: ";
    getline(cin, nombreArchivo);

    archivo.open(nombreArchivo.c_str(), ios::app); // Abrimos el archivo en modo añadir

    if (archivo.fail()) {
        cout << "\nNo se pudo abrir el archivo." << endl;
        exit(1);
    }

    do {
        cout << "\nDigite el texto que desea añadir al archivo: ";
        getline(cin, texto);

        archivo << texto << endl;

        cout << "\nDesea agregar otra frase? (s/n): ";
        cin >> rpt;
        cin.ignore();
    } while ((rpt == 'S') || (rpt == 's'));

    archivo.close(); // Cerramos el archivo
}