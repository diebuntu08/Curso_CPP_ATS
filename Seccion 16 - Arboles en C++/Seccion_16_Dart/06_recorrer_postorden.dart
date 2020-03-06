
import 'dart:io';

class Nodo {

  int dato = null;
  Nodo izq = null;
  Nodo der = null;

  Nodo();
}

Nodo arbol = new Nodo();

// Función para crear un nuevo nodo
Nodo crearNodo(int n) {
  Nodo nuevo_nodo = new Nodo();

  nuevo_nodo.dato = n;
  nuevo_nodo.izq = new Nodo();
  nuevo_nodo.der = new Nodo();

  return nuevo_nodo;
}

// Función para insertar un nuevo nodo
Nodo insertarNodo(Nodo arbol, int n) {
  if (arbol.dato == null) { // Si el árbol está vacío
    arbol = crearNodo(n); 
  } else { // Si el árbol tiene un nodo o más
    int valorRaiz = arbol.dato; // Obtener el valor de la raiz

    if (n < valorRaiz) {
      arbol.izq = insertarNodo(arbol.izq, n); // Si el elemento es menor que la raiz
    } else {
      arbol.der = insertarNodo(arbol.der, n); // Si el elemento es mayor que la raiz
    }
  }

  return arbol;
}

// Función para mostrar el arbol completo
String mostrarArbol(Nodo arbol, int cont) {
  if (arbol.dato == null) { // Si el árbol está vacío
    return "";
  } else { // Si el árbol no está vacío
    mostrarArbol(arbol.der, cont+1);

    for (int i = 0; i < cont; i++) {
      stdout.write("   ");
    }

    print(arbol.dato);
    mostrarArbol(arbol.izq, cont+1);
  }
}

// Función para buscar un elemento en el árbol
bool buscarNodo(Nodo arbol, int n) {
  if (arbol.dato == null) {
    return false;
  } else if (arbol.dato == n) {
    return true;
  } else if (n < arbol.dato) {
    return buscarNodo(arbol.izq, n);
  } else {
    return buscarNodo(arbol.der, n);
  }
}

// Función para recorrer el árbol en PreOrden
String preOrden(Nodo arbol) {
  if (arbol.dato == null) {
    return "";
  } else {
    stdout.write("${arbol.dato} - ");
    preOrden(arbol.izq);
    preOrden(arbol.der);
  }
}

// Función para recorrer el árbol en InOrden
String inOrden(Nodo arbol) {
  if (arbol.dato == null) {
    return "";
  } else {
    preOrden(arbol.izq);
    stdout.write("${arbol.dato} - ");
    preOrden(arbol.der);
  }
}

// Función para recorrer el árbol en PostOrden
String postOrden(Nodo arbol) {
  if (arbol.dato == null) {
    return "";
  } else {
    preOrden(arbol.izq);
    preOrden(arbol.der);
    stdout.write("${arbol.dato} - ");
  }
}


// Función del menú
void menu() {
  int dato, opcion, contador = 0;

  do {
    stdout.writeln("\t.:MENU:.");
    stdout.writeln("1. Insertar un nuevo nodo.");
    stdout.writeln("2. Mostrar el árbol completo.");
    stdout.writeln("3. Buscar un elemento en el árbol.");
    stdout.writeln("4. Recorrer el árbol en PreOrden.");
    stdout.writeln("5. Recorrer el árbol en InOrden.");
    stdout.writeln("6. Recorrer el árbol en PostOrden.");
    stdout.writeln("7. Salir.");
    stdout.write("Opción: ");
    opcion = int.parse(stdin.readLineSync());

    switch (opcion) {
      case 1:
        stdout.write("\nDigite un número: ");
        dato = int.parse(stdin.readLineSync());
        arbol = insertarNodo(arbol, dato);
        print("");
        break;
      case 2:
        print("\nMostrando el árbol completo:");
        String _a = mostrarArbol(arbol, contador);
        print("");
        break;
      case 3:
        stdout.write("\nDigite el elemento a buscar: ");
        dato = int.parse(stdin.readLineSync());
        if (buscarNodo(arbol, dato)) {
          print("El elemento $dato ha sido encontrado en el árbol.");
        } else {
          print("El elemento $dato no ha sido encontrado en el árbol.");
        }
        break;
      case 4:
        print("\nRecorrido en PreOrden.");
        String _a = preOrden(arbol);
        print("");
        break;
      case 5:
        print("\nRecorrido en InOrden.");
        String _a = inOrden(arbol);
        print("");
        break;
      case 6:
        print("\nRecorrido en PostOrden.");
        String _a = postOrden(arbol);
        print("");
        break;
      
      default:
        break;
    }
  } while (opcion != 7);
}

// Función principal main()
void main() {

  menu();
  
}