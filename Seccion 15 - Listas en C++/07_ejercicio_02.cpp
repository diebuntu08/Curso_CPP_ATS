/*
    02. Crear una lista que almacene n números reales y calcular
    su suma y promedio.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo {
    float dato;
    Nodo *siguiente;
};

// Prototipos de función
void insertarLista(Nodo *&, float);
void mostrarLista(Nodo *);
void calcularSumaPromedio(Nodo *);

int main() {

    Nodo *lista = NULL;
    float dato;
    char respuesta;

    do {
        cout << "Digite un número: ";
        cin >> dato;
        insertarLista(lista, dato); // Insertamos el número en lista

        cout << "Desea agregar un nuevo elemento en lista(s/n): ";
        cin >> respuesta;
    } while ((respuesta == 's') || (respuesta == 'S'));
    
    cout << "\tElementos en la lista: ";
    mostrarLista(lista);

    calcularSumaPromedio(lista);

    system("pause");
    return 0;
}

void insertarLista(Nodo *&lista, float n) {
    Nodo *nuevo_nodo = new Nodo();
    Nodo *aux;

    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if (lista == NULL) { // Si la lista está vacía?
        lista = nuevo_nodo;
    } else {
        aux = lista;
        while (aux->siguiente != NULL) { // recorrer la lista
            aux = aux->siguiente;
        }
        aux->siguiente = nuevo_nodo; // Agregamos el nuevo modo
    }
    cout << "\nEleemnto " << n << " insertado en la lista correctamente.\n";
}

void mostrarLista(Nodo *lista) {
    while (lista != NULL) { // mientras no sea el final de la lista
        cout << lista->dato << " -> ";
        lista = lista->siguiente; // Avanzar en la lista
    }
    cout << "\n";
}

void calcularSumaPromedio(Nodo *lista) {
    float suma = 0, promedio;
    int contador = 0;

    while (lista != NULL) { // Mientras no sea el final de la lista
        suma += lista->dato; // Suma iteraivs
        contador++; // Contar el número de elementos en la lista
        lista = lista->siguiente; // Avanzar una posición en lista
    }

    promedio = suma / contador;

    cout << "\n\nLa suma es: " << suma << endl;
    cout << "El promedio es: " << promedio << endl;
    
}