
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

  bool buscarNodo(Nodo nodo, int n) {
    if (nodo == null) {
      return false;
    } else if (nodo.dato == n) {
      return true;
    } else if (n < nodo.dato) {
      return buscarNodo(nodo.izq, n);
    } else {
      return buscarNodo(nodo.der, n);
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
    stdout.writeln("3. Buscar un elemento en el árbol.");
    stdout.writeln("4. Salir.");
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
      case 3:
        stdout.write("\nDigite el elemento a buscar: ");
        n = int.parse(stdin.readLineSync());
        if (arbol.buscarNodo(arbol.get_raiz(), n)) {
          print("El elemento $n SÍ se encuentra en el árbol.");
        } else {
          print("El elemento $n NO se encuentra en el árbol.");
        }
        break;
      
      default:
        break;
    }
  } while (opcion != 4);
}

void main() {

  menu();

}