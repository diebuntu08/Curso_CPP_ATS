// Insertar elementos en la pila

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo {
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, int); // Prototipo
void sacarPila(Nodo *&, int &);


int main() {

    Nodo *pila = NULL;

    int dato;

    cout << "Digite un número: ";
    cin >> dato;
    agregarPila(pila, dato);

    cout << "Digite otro número: ";
    cin >> dato;
    agregarPila(pila, dato);

    cout << "\nSacando los elementos de la pila: ";
    while (pila != NULL) { // Mientras no sea el final de la pila
        sacarPila(pila, dato);
        if (pila != NULL) {
            cout << dato << " , ";
        } else {
            cout << dato << ".";
        }
    }

    cout << "\n";

    system("pause");
    return 0;
}

void agregarPila(Nodo *&pila, int n) {
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;

    cout << "\tElemento " << n << " agregado a la PILA correctamente." << endl;
}

void sacarPila(Nodo *&pila, int &n) {
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}