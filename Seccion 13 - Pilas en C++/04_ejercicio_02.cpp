/*
    02. Hacer un programa que contenga el siguiente menu:
    1. Insertar un carácter a la pila.
    2. Mostrar todos los elementos de la pila.
    3. Salir
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo {
    char dato;
    Nodo *siguiente;
};


// Prototipos
void menu();
void agregarPila(Nodo *&, char);
void sacarPila(Nodo *&, char &);

int main() {

    menu();

    system("pause");
    return 0;
}

void menu() {
    Nodo *pila = NULL;
    int opcion;
    char dato;

    do {
        cout << "\t.:MENU:.\n";
        cout << "1. Insertar un caracter en la pila." << endl;
        cout << "2. Mostrar todos los elementos de la pila." << endl;
        cout << "3. Salir." << endl;
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "\nDigite un caracter: ";
            cin >> dato;
            agregarPila(pila, dato);
            break;
        case 2:
            cout << "\nMostrando todos los elementos de la pila:\n";
            while (pila != NULL) {
                sacarPila(pila, dato);
                if (pila != NULL) {
                    cout << dato << ", ";
                } else {
                    cout << dato << ".\n";
                }
            }
            system("pause");
            break;
        case 3:
            cout << "Hasta luego!" << endl;
            break;
        default:
            break;
        }

        system("cls"); //limpiar la pantalla
    } while (opcion != 3);
}

void agregarPila(Nodo *&pila, char n) {
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
}

void sacarPila(Nodo *&pila, char &n) {
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}