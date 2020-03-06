
import 'dart:io';

class Nodo {

  int dato;
  Nodo izq;
  Nodo der;

  Nodo();
}

Nodo arbol = new Nodo();

// Función para crear un nuevo nodo
Nodo crearNodo(int n) {
  Nodo nuevo_nodo = new Nodo();

  nuevo_nodo.dato = n;
  nuevo_nodo.izq = null;
  nuevo_nodo.der = null;

  return nuevo_nodo;
}

// Función para insertar un nuevo nodo
void insertarNodo(Nodo arbol, int n) {
  if (arbol.dato == null) { // Si el árbol está vacío
    arbol = crearNodo(n); 
  } else { // Si el árbol tiene un nodo o más
    int valorRaiz = arbol.dato; // Obtener el valor de la raiz

    if (n < valorRaiz) {
      insertarNodo(arbol.izq, n); // Si el elemento es menor que la raiz
    } else {
      insertarNodo(arbol.der, n); // Si el elemento es mayor que la raiz
    }
  }
}

// Función del menú
void menu() {
  int dato, opcion;

  do {
    stdout.writeln("\t.:MENU:.");
    stdout.writeln("1. Insertar un nuevo nodo.");
    stdout.writeln("2. Salir.");
    stdout.write("Opción: ");
    opcion = int.parse(stdin.readLineSync());

    switch (opcion) {
      case 1:
        stdout.write("\nDigite un número: ");
        dato = int.parse(stdin.readLineSync());
        insertarNodo(arbol, dato);
        print("");
        break;
      
      default:
        break;
    }
  } while (opcion != 2);
}

void main() {

  menu();
  
}