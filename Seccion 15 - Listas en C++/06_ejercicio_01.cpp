/*
    01. Crear una lista que almacene "n" números enteros y colocar el
    menor y mayor de ellos.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo {
    int dato;
    Nodo *siguiente;
};

void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void calcularMayorMenor(Nodo *);

int main() {

    Nodo *lista = NULL;
    int dato;
    char respuesta;

    do {
        cout << "Digite un número: ";
        cin >> dato;
        insertarLista(lista, dato); // Agregando un nuevo elemento a la lista

        cout << "Desea agregar otro nodo(s/n)";
        cin >> respuesta;
    } while ((respuesta == 's') || (respuesta == 'S'));

    mostrarLista(lista);

    calcularMayorMenor(lista);

    system("pause");
    return 0;
}

// Agregar elementos al final de la lista
void insertarLista(Nodo *&lista, int n) {
    Nodo *nuevo_nodo = new Nodo();
    Nodo *aux;

    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if (lista == NULL) { // Si la lista está vacía
        lista = nuevo_nodo; // Agregamos el primer elemento a la lista
    } else {
        aux = lista; // aux apunta al inicio de la lista
        while (aux->siguiente != NULL) { // recorrer la lista
            aux = aux->siguiente; // Avanzamos posiciones en la lista
        }
        aux->siguiente = nuevo_nodo; // Agrego el nuevo nodo a la lista
    }
    cout << "\tElemento " << n << " agregado a la lista correctamente.\n";
}

// Mostrar todos los elementos de la lista
void mostrarLista(Nodo *lista) {
    while (lista != NULL) { // mientras no sea el final de la lista
        cout << lista->dato << " -> ";
        lista = lista->siguiente; // avanzamos hacia el siguiente nodo
    }

    cout << "\n";
    
}

void calcularMayorMenor(Nodo *lista) {
    int mayor = 0, menor = 99999;

    while (lista != NULL) { // Recorremos la lista
        if (lista->dato > mayor) {
            mayor = lista->dato;
        }
        if (lista->dato < menor) {
            menor = lista->dato;
        }

        lista = lista->siguiente;
    }

    cout << "\nEl mayor elemento es: " << mayor << endl;
    cout << "\nEl menor elemento es: " << menor << endl;
}