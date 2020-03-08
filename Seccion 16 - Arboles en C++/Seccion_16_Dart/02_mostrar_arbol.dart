
import 'dart:io';

class Nodo {

  int dato = null;
  Nodo izq = null;
  Nodo der = null;
  Nodo padre = null;

  Nodo(this.dato);

  String str() {
    return "$dato -> ";
  }
}

class Arbol {

  Nodo raiz = null;

  Arbol();

  void agregarNodo(Nodo nodo) {
    if (raiz == null) {
      raiz = nodo;
    } else {
      Nodo aux = this.raiz;
      Nodo padre;

      while (aux != null) {
        padre = aux;
        if (nodo.dato >= aux.dato) {
          aux = aux.der;
        } else {
          aux = aux.izq;
        }
      }

      nodo.padre = padre;
      if (nodo.dato >= padre.dato) {
        padre.der = nodo;
      } else {
        padre.izq = nodo;
      }
    }
  }

  void mostrarArbol(Nodo nodo, int cont) {
    if (nodo == null) {
      stdout.write("");
    } else {
      mostrarArbol(nodo.der, cont+1);

      for (int i = 0; i < cont; i++) {
        stdout.write("   ");
      }

      print(nodo.dato);
      mostrarArbol(nodo.izq, cont+1);
    }
  }

  Nodo get_raiz() {
    return raiz;
  }
}

void menu() {
  int n;
  int opcion = 0;
  Nodo nodo;
  int contador = 0;

  Arbol arbol = new Arbol();

  do {
    stdout.writeln("\t.:MENU:.");
    stdout.writeln("1. Insertar un nuevo nodo.");
    stdout.writeln("2. Mostrar el árbol completo.");
    stdout.writeln("3. Salir.");
    stdout.write("Opción: ");
    opcion = int.parse(stdin.readLineSync());

    switch (opcion) {
      case 1:
        stdout.write("\nDigite un número entero: ");
        n = int.parse(stdin.readLineSync());
        nodo = new Nodo(n);
        arbol.agregarNodo(nodo);
        break;
      case 2:
        stdout.writeln("\nMostrando el árbol completo:");
        arbol.mostrarArbol(arbol.get_raiz(), contador);
        break;
      
      default:
        break;
    }
  } while (opcion != 3);
}

void main() {

  menu();

}