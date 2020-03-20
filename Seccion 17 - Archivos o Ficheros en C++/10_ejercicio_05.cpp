/*
    05. Crear un archivo binario donde almacenar un registro que contenga
    las pulsaciones de un atleta en una determinada hora, el programa debe
    tener un menú con las siguientes opciones:
        1. Comenzar a digitar las pulsaciones
        2. Añadir más pulsaciones
        3. Mostrar las pulsaciones registradas
        4. Salir
*/

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>

using namespace std;

void menu();
void escribirPulsacion();
void agregarPulsacion();
void mostrarPulsacion();

struct Registro {
    float hora;
    int pulsaciones;
};

int main() {

    menu();

    system("pause");
    return 0;
}

void menu() {
    int opcion;

    do {
        cout << "\t.:MENU:." << endl;
        cout << "1. Comenzar a digitar las pulsaciones." << endl;
        cout << "2. Añadir más pulsaciones." << endl;
        cout << "3. Mostrar las pulsaciones registradas." << endl;
        cout << "4. Salir." << endl;
        cout << "Digite una opción: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            escribirPulsacion();
            break;
        case 2:
            agregarPulsacion();
            break;
        case 3:
            mostrarPulsacion();
            break;
        case 4:
            break;
        
        default:
            cout << "Se equivocó en la opción del menú." << endl;
            break;
        }
    } while (opcion != 4);
    
}

void escribirPulsacion() {
    ofstream archivoB;

    archivoB.open("pulsaciones.dat", ios::out | ios::binary);

    if (archivoB.fail()) {
        cout << "\nNo se pudo crear el archivo." << endl;
        exit(1);
    }

    Registro pulso;

    cout << "\nDigite la hora: "; cin >> pulso.hora;
    cout << "Digite la cantidad de pulsaciones: "; cin >> pulso.pulsaciones;

    archivoB.write((char *)&pulso, sizeof(Registro));

    archivoB.close();
}

void agregarPulsacion() {
    ofstream archivoB;

    archivoB.open("pulsaciones.dat", ios::app | ios::binary);

    if (archivoB.fail()) {
        cout << "\nNo se pudo crear el archivo." << endl;
        exit(1);
    }

    Registro pulso;

    cout << "\nDigite la hora: "; cin >> pulso.hora;
    cout << "Digite la cantidad de pulsaciones: "; cin >> pulso.pulsaciones;

    archivoB.write((char *)&pulso, sizeof(Registro));

    archivoB.close();
}

void mostrarPulsacion() {
    ifstream archivoB;

    archivoB.open("pulsaciones.dat", ios::in | ios::binary);

    if (archivoB.fail()) {
        cout << "\nNo se pudo crear el archivo." << endl;
        exit(1);
    }

    Registro pulso;

    cout << "\nMostrando las pulsaciones registradas: " << endl;
    while (!archivoB.eof()) {
        archivoB.read((char *)&pulso, sizeof(Registro));

        if (!archivoB.eof()) {
            cout << "\nHora: " << pulso.hora << endl;
            cout << "Pulsaciones: " << pulso.pulsaciones << endl << endl;
        }
    }

    archivoB.close();
}