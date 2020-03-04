// Recorrer el árbol en PreOrden

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
void mostrarArbol(Nodo *, int);
bool buscarNodo(Nodo *, int);
void preOrden(Nodo *);

Nodo *arbol = NULL;

int main() {

    menu();

    system("pause");
    return 0;
}

// Funcion del menu
void menu() {
    int dato, opcion, contador = 0;

    do {
        cout << "\t.:MENU:." << endl;
        cout << "1. Insertar un nuevo nodo." << endl;
        cout << "2. Mostrar el árbol completo." << endl;
        cout << "3. Buscar un elemento en el árbol." << endl;
        cout << "4. Recorrer el árbol en PreOrden." << endl;
        cout << "5. Salir." << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "\nDigite un numero: ";
                cin >> dato;
                insertarNodo(arbol, dato); // Insertamos un nuevo nodo
                cout << "\n";
                break;
            case 2:
                cout << "\nMostrando el arbol completo:\n\n";
                mostrarArbol(arbol, contador);
                cout << "\n";
                break;
            case 3:
                cout << "\nDigite el elemento a buscar: ";
                cin >> dato;
                if (buscarNodo(arbol, dato) == true) {
                    cout << "\nEl elemento " << dato << " ha sido encontrado en el arbol." << endl;
                } else {
                    cout << "\nElemento no encontrado.\n" << endl;
                }
                cout << "\n";
                break;
            case 4:
                cout << "\nRecorrido en PreOrden:\n";
                preOrden(arbol);
                cout << "\n\n";
                break;
            
            default:
                break;
        }

        system("cls");
    } while (opcion != 5);
    
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

// Funcion para mostrar el arbol completo
void mostrarArbol(Nodo *arbol, int cont) {
    if (arbol == NULL) { // Si el arbol esta vacio
        return;
    } else { // Si el arbol no esta vacio
        mostrarArbol(arbol->der, cont+1);

        for (int i = 0; i < cont; i++) {
            cout << "   ";
        }
        cout << arbol->dato << endl;
        mostrarArbol(arbol->izq, cont+1);
    }
}

// Funcion para buscar un elemento en el arbol
bool buscarNodo(Nodo *arbol, int n) {
    if (arbol == NULL) { // si el arbol esta vacio
        return false;
    } else if (arbol->dato == n) {
        return true;
    } else if (n < arbol->dato) {
        return buscarNodo(arbol->izq, n);
    } else {
        return buscarNodo(arbol->der, n);
    }
}

// Función para recorrido en profundidad - PreOrden
void preOrden(Nodo *arbol) {
    if (arbol == NULL) { // Si el árbol está vacío
        return;
    } else {
        cout << arbol->dato << " - ";
        preOrden(arbol->izq);
        preOrden(arbol->der);
    }
}