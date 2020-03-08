
import 'dart:io';

class Nodo {

  int dato;
  Nodo izq;
  Nodo der;
  Nodo padre;

  Nodo(this.dato);

  String str() {
    return "$dato -> ";
  }
}

class Arbol {

  Nodo raiz;

  Arbol();

  void agregarNodo(Nodo nodo) {
    if (raiz == null) {
      raiz = nodo;
    } else {
      Nodo aux = raiz;
      Nodo padre;

      while (aux != null) {
        padre = aux;
        if (nodo.dato >= aux.dato) {
          aux = aux.der;
        } else {
          aux = aux.izq;
        }

        nodo.padre = padre;
        if (nodo.dato >= padre.dato) {
          padre.der = nodo;
        } else {
          padre.izq = nodo;
        }
      }
    }
  }
}

void menu() {
  int n;
  int opcion = 0;
  Nodo nodo;

  Arbol arbol = new Arbol();

  do {
    stdout.writeln("\t.:MENU:.");
    stdout.writeln("1. Insertar un nuevo nodo.");
    stdout.writeln("2. Salir.");
    stdout.write("Opción: ");
    opcion = int.parse(stdin.readLineSync());

    switch (opcion) {
      case 1:
        stdout.write("\nDigite un número entero: ");
        n = int.parse(stdin.readLineSync());
        nodo = new Nodo(n);
        arbol.agregarNodo(nodo);
        break;
      
      default:
        break;
    }
  } while (opcion != 2);
}

void main() {

  menu();

}