// Insertar nuevos nodos al arbol

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo {
    int dato;
    Nodo *der;
    Nodo *izq;
};

// Prototipos de funcion
void menu();
Nodo *crearNodo(int);
void insertarNodo(Nodo *&, int);

Nodo *arbol = NULL;

int main() {

    menu();

    system("pause");
    return 0;
}

// Funcion del menu
void menu() {
    int dato, opcion;

    do {
        cout << "\t.:MENU:." << endl;
        cout << "1. Insertar un nuevo nodo." << endl;
        cout << "2. Salir." << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "\nDigite un numero: ";
                cin >> dato;
                insertarNodo(arbol, dato); // Insertamos un nuevo nodo
                cout << "\n";
                break;
            
            default:
                break;
        }

        system("cls");
    } while (opcion != 2);
    
}

// Funcion para crear un Nodo
Nodo *crearNodo(int n) {
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;

    return nuevo_nodo;
}

// Funcion para insertar elementos en el arbol
void insertarNodo(Nodo *&arbol, int n) {
    if (arbol == NULL) { // Si el arbol esta vacio 
        Nodo *nuevo_nodo = crearNodo(n);
        arbol = nuevo_nodo;
    } else { // Si el arbol tiene un nodo o mas
        int valorRaiz = arbol->dato; // Obtenemos el valor de la raiz

        if (n < valorRaiz) {
            insertarNodo(arbol->izq, n); // Si el elemento es menor que la raiz
        } else {
            insertarNodo(arbol->der, n); // Si el elemento es mayor que la raiz
        }
    }
}