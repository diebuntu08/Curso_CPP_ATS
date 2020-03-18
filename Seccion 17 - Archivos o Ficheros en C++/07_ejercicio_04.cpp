/*
    04. Hacer un programa en C++ para guardar números telefónicos que
    muestre un menú con las siguientes opciones:
        1. Crear (nombre, apellidos, teléfono)
        2. Agregar más contactos (nombre, apellidos, teléfono)
        3. Visualizar contactos existentes
*/

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>

using namespace std;

void menu();
void crearContacto();
void agregarContacto();
void visualizarContacto();

struct Datos {
    string nombre, apellido, telefono;
} datos;

int main() {

    menu();

    system("pause");
    return 0;
}

void menu() {

    int opcion;

    do {
        cout << "\tMENU" << endl;
        cout << "1. Crear (nombre, apellidos, teléfono)" << endl;
        cout << "2. Agregar más contactos (nombre, apellidos, teléfono)" << endl;
        cout << "3. Visualizar contactos existentes" << endl;
        cout << "4. Salir." << endl;
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            crearContacto();
            break;
        case 2:
            agregarContacto();
            break;
        case 3:
            visualizarContacto();
            break;
        
        default:
            break;
        }
    } while (opcion != 4);
}

void crearContacto() {
    ofstream archivo;
    char rpt;

    archivo.open("AgendaTelefonica.txt", ios::out); // Abrimos el archivo en modo escritura

    if (archivo.fail()) {
        cout << "\nNo se pudo abrir el archivo." << endl;
        exit(1);
    }

    archivo << "\tAgenda Telefónica\n" << endl << endl;

    do {
        cin.ignore();
        cout << "Nombre: ";
        getline(cin, datos.nombre);
        cout << "Apellido: ";
        getline(cin, datos.apellido);
        cout << "Teléfono: ";
        getline(cin, datos.telefono);
        cout << "\n";

        archivo << "Nombre: " << datos.nombre << endl;
        archivo << "Apellido: " << datos.apellido << endl;
        archivo << "Teléfono: " << datos.telefono << endl << endl;

        cout << "Desea agregar otro contacto? (s/n): ";
        cin >> rpt;

    } while ((rpt == 'S') || (rpt == 's'));
    
    archivo.close();
}

void agregarContacto() {
    ofstream archivo;
    char rpt;

    archivo.open("AgendaTelefonica.txt", ios::app); // Abrimos el archivo en modo añadir

    if (archivo.fail()) {
        cout << "\nNo se pudo abrir el archivo." << endl;
        exit(1);
    }

    do {
        cin.ignore();
        cout << "\nNombre: ";
        getline(cin, datos.nombre);
        cout << "Apellido: ";
        getline(cin, datos.apellido);
        cout << "Teléfono: ";
        getline(cin, datos.telefono);

        archivo << "Nombre: " << datos.nombre << endl;
        archivo << "Apellidos: " << datos.apellido << endl;
        archivo << "Teléfono: " << datos.telefono << endl << endl;

        cout << "\nDesea agregar otro contacto? (s/n): ";
        cin >> rpt;
    } while ((rpt == 'S') || (rpt == 's'));

    archivo.close();
}

void visualizarContacto() {
    ifstream archivo;
    string texto;

    archivo.open("AgendaTelefonica.txt", ios::in); // Abrimos el archivo en modo lectura

    if (archivo.fail()) {
        cout << "\nNo se pudo abrir el archivo." << endl;
        exit(1);
    }

    while (!archivo.eof()) { // mientras no sea el final del archivo
        getline(archivo, texto);
        cout << texto << endl;
    }

    archivo.close();
}