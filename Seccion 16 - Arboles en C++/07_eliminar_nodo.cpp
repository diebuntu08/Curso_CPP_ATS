// Insertar nuevos nodos al arbol

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo {
    int dato;
    Nodo *der;
    Nodo *izq;
    Nodo *padre;
};

// Prototipos de funcion
void menu();
Nodo *crearNodo(int, Nodo *);
void insertarNodo(Nodo *&, int, Nodo *);
void mostrarArbol(Nodo *, int);
bool buscarNodo(Nodo *, int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void eliminarNodo(Nodo *, int);
void eliminar(Nodo *);
Nodo *minimo(Nodo *);
void reemplazar(Nodo *, Nodo *);
void destruirNodo(Nodo *);

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
        cout << "5. Recorrer el árbol en InOrden." << endl;
        cout << "6. Recorrer el árbol en PostOrden." << endl;
        cout << "7. Eliminar un nodo del árbol." << endl;
        cout << "8. Salir." << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "\nDigite un numero: ";
                cin >> dato;
                insertarNodo(arbol, dato, NULL); // Insertamos un nuevo nodo
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
            case 5:
                cout << "\nReccorrido en InOrden:\n";
                inOrden(arbol);
                cout << "\n\n";
                break;
            case 6:
                cout << "\nRecorrido en PostOrden:\n";
                postOrden(arbol);
                cout << "\n\n";
                break;
            case 7:
                cout << "\nDigite el número a eliminar: ";
                cin >> dato;
                eliminarNodo(arbol, dato);
                cout << "\n";
                break;
            
            default:
                break;
        }

        system("cls");
    } while (opcion != 8);
    
}

// Funcion para crear un Nodo
Nodo *crearNodo(int n, Nodo *padre) {
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;
    nuevo_nodo->padre = padre;

    return nuevo_nodo;
}

// Funcion para insertar elementos en el arbol
void insertarNodo(Nodo *&arbol, int n, Nodo *padre) {
    if (arbol == NULL) { // Si el arbol esta vacio 
        Nodo *nuevo_nodo = crearNodo(n, padre);
        arbol = nuevo_nodo;
    } else { // Si el arbol tiene un nodo o mas
        int valorRaiz = arbol->dato; // Obtenemos el valor de la raiz

        if (n < valorRaiz) {
            insertarNodo(arbol->izq, n, arbol); // Si el elemento es menor que la raiz
        } else {
            insertarNodo(arbol->der, n, arbol); // Si el elemento es mayor que la raiz
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

// Función para recorrido en profundidad - InOrden
void inOrden(Nodo *arbol) {
    if (arbol == NULL) {
        return;
    } else {
        inOrden(arbol->izq);
        cout << arbol->dato << " - ";
        inOrden(arbol->der);
    }
}

// Función para recorrido en profundidad - PostOrden
void postOrden(Nodo *arbol) {
    if (arbol == NULL) {
        return;
    } else {
        postOrden(arbol->izq);
        postOrden(arbol->der);
        cout << arbol->dato << " - ";
    }
}

// Función para buscar un nodo y eliminarlo
void eliminarNodo(Nodo *arbol, int n) {
    if (arbol == NULL) { // Si el árbol está vacío
        return;
    } else if (n < arbol->dato) { // Si el valor es menor
        eliminarNodo(arbol->izq, n); // Busca por la izquierda
    } else if (n > arbol->dato) { // Si el valor es mayor
        eliminarNodo(arbol->der, n); // Busca por la derecha    
    } else { // Si ya encontraste el valor
        eliminar(arbol);
    }
}

// Función para determinar el nodo más izquierdo posible
Nodo *minimo(Nodo *arbol) {
    if (arbol == NULL) { // Si el árbol está vacío
        return NULL;
    }
    if (arbol->izq) { // Si tiene hijo izquierdo
        return minimo(arbol->izq); // Buscamos la parte más izquierda posible
    } else { // Si no tiene hijo zquierdo
        return arbol; // Retornamos el mismo nodo
    }
}

// Función para reemplazar un nodo por otro
void reemplazar(Nodo *arbol, Nodo *nuevo_nodo) {
    if (arbol->padre) {
        // arbol->padre hay que asignarle su nuevo hijo
        if (arbol->dato == arbol->padre->izq->dato) {
            arbol->padre->izq = nuevo_nodo;
        } else if (arbol->dato == arbol->padre->der->dato) {
            arbol->padre->der = nuevo_nodo;
        }
    }
    if (nuevo_nodo) {
        // Procedemos a asignarle su nuevo padre
        nuevo_nodo->padre = arbol->padre;
    }
}

// Función para destruir un nodo
void destruirNodo(Nodo *nodo) {
    nodo->izq = NULL;
    nodo->der = NULL;
    delete nodo;
}

// Función para eliminar el nodo encontrado
void eliminar(Nodo *nodoEliminar) {
    if (nodoEliminar->izq && nodoEliminar->der) {// Si el noto tiene hijos izq y der
        Nodo *menor = minimo(nodoEliminar->der);
        nodoEliminar->dato = menor->dato;
        eliminar(menor);
    } else if (nodoEliminar->izq) { // Si tiene hijo izquierdo
        reemplazar(nodoEliminar, nodoEliminar->izq);
        destruirNodo(nodoEliminar);
    } else if (nodoEliminar->der) { // Si tiene hijo derecho
        reemplazar(nodoEliminar, nodoEliminar->der);
        destruirNodo(nodoEliminar);
    } else { // No tiene hijos
        reemplazar(nodoEliminar, NULL);
        destruirNodo(nodoEliminar);
    }
}