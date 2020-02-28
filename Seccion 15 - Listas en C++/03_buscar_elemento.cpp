// Buscar elementos en una lista

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo {
    int dato;
    Nodo *siguiente;
};

// Prototipos de función
void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void menu();
void buscarLista(Nodo *, int);

Nodo *lista = NULL;

int main() {

    menu();

    system("pause");
    return 0;
}

void menu() {
    int opcion, dato;

    do {
        cout << "\t.:MENU:.\n";
        cout << "1. Insertar elementos a la lista.\n";
        cout << "2. Mostrar elementos de la lista.\n";
        cout << "3. Buscar un elemento en la lista.\n";
        cout << "4. Salir.\n";
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Digite un número: ";
            cin >> dato;
            insertarLista(lista, dato);
            cout << "\n";
            break;
        case 2:
            mostrarLista(lista);
            cout << "\n";
            break;
        case 3:
            cout << "\nDigite un número a buscar: ";
            cin >> dato;
            buscarLista(lista, dato);
            cout << "\n";
            break;
        }

        system("cls");
    } while (opcion != 4);
}

void insertarLista(Nodo *&lista, int n) {
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;

    Nodo *aux1 = lista;
    Nodo *aux2;

    while ((aux1 != NULL) && (aux1->dato < n)) {
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if (lista == aux1) {
        lista = nuevo_nodo;
    } else {
        aux2->siguiente = nuevo_nodo;
    }

    nuevo_nodo->siguiente = aux1;

    cout << "\tElemento " << n << " insertado a la lista correctamente." << endl;
}

void mostrarLista(Nodo *lista) {
    Nodo *actual = new Nodo();
    actual = lista;

    while (actual != NULL) {
        cout << actual->dato << " -> ";
        actual = actual->siguiente;
    }
}

void buscarLista(Nodo *lista, int n) {
    bool band = false;

    Nodo *actual = new Nodo();
    actual = lista;

    while ((actual != NULL) && (actual->dato <= n)) {
        if (actual->dato == n) {
            band = true;
        }

        actual = actual->siguiente;
    }

    if (band == true) {
        cout << "Elemento " << n << " SÍ ha sido encontrado en la lista.\n";
    } else {
        cout << "Elemento " << n << " NO ha sido encontrado en la lista.\n";
    }
}