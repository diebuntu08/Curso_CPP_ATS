// Insertar elementos en una cola

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo {
    int dato;
    Nodo *siguiente;
};

// Prototipos de función
void insertarCola(Nodo *&, Nodo *&, int);
bool colaVacia(Nodo *);

int main() {

    Nodo *frente = NULL;
    Nodo *fin = NULL;

    int dato;

    cout << "Digite un número: ";
    cin >> dato;

    insertarCola(frente, fin, dato);

    cout << "Digite un número: ";
    cin >> dato;

    insertarCola(frente, fin, dato);

    cout << "Digite un número: ";
    cin >> dato;

    insertarCola(frente, fin, dato);

    system("pause");
    return 0;
}

// Función para insertar elementos en la cola
void insertarCola(Nodo *&frente, Nodo *&fin, int n) {
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if (colaVacia(frente)) {
        frente = nuevo_nodo;
    } else {
        fin->siguiente = nuevo_nodo;
    }

    fin = nuevo_nodo;

    cout << "\nElemento " << n << " insertado a la cola correctamente." << endl;
}

// Función para determinar si la cola está vacía o no
bool colaVacia(Nodo *frente) {
    return (frente == NULL) ? true : false;

    // if (frente == NULL) {
    //     return true;
    // }
    // return false;
}