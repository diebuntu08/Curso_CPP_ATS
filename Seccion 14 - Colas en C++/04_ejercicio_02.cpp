/*
    02. Hacer un programa que guarde datos de clientes de un banco, los almacene
    en la cola, y por último muestre los clientes en el orden correcto.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Cliente {
    char nombre[30];
    char clave[10];
    int edad;
};

struct Nodo {
    Cliente c;
    Nodo *siguiente;
};

// Prototipos de función
void cargarCliente(Cliente &);
void insertarCola(Nodo *&, Nodo *&, Cliente);
bool colaVacia(Nodo *);
void suprimirCola(Nodo *&, Nodo *&, Cliente &);

int main() {

    Nodo *frente = NULL;
    Nodo *fin = NULL;
    Cliente c;
    char rpt;

    do {
        cargarCliente(c); // Cargar los datos para el cliente
        insertarCola(frente, fin, c); // Agregar un nuevo cliente a la cola

        cout << "\nDesea agregar un nuevo cliente (s/n): ";
        cin >> rpt;
        cin.ignore();
    } while (rpt == 'S' || rpt == 's');

    cout << "\n====Carga de clientes exitosa====\n\n";

    cout << "\tClientes agregados a la cola:\n\n";
    while (frente != NULL) {
        suprimirCola(frente, fin, c);

        cout << "Nombre: " << c.nombre << endl;
        cout << "Clave: " << c.clave << endl;
        cout << "Edad: " << c.edad << endl;
        cout << "\n";
    }

    system("pause");
    return 0;
}

void cargarCliente(Cliente &c) {
    cout << "\tAgregar nuevo cliente\n";
    cout << "Nombre: "; cin.getline(c.nombre, 30, '\n');
    cout << "Clave: "; cin.getline(c.clave, 10, '\n');
    cout << "Edad: "; cin >> c.edad;
    cout << "\n";
}

// Función para agregar nuevos clientes a la cola
void insertarCola(Nodo *&frente, Nodo *&fin, Cliente c) {
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->c = c;
    nuevo_nodo->siguiente = NULL;

    if (colaVacia(frente)) {
        frente = nuevo_nodo;
    } else {
        fin->siguiente = nuevo_nodo;
    }

    fin = nuevo_nodo;
}

//Función para determinar si la cola está vacía
bool colaVacia(Nodo *frente) {
    return (frente == NULL) ? true : false;
}

// Función para sacar los elementos de la cola
void suprimirCola(Nodo *&frente, Nodo *&fin, Cliente &c) {
    c = frente->c;

    Nodo *aux = frente;

    if (frente == fin) {
        frente = NULL;
        fin = NULL;
    } else {
        frente = frente->siguiente;
    }

    delete aux;
}