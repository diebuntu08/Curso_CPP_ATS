
import 'dart:io';

class Vector {
  int tam;
  List<int> valores = new List();

  Vector();
}

void pedirDatos(Vector vector) {
  stdout.writeln('Digite el número de elementos del vector: ');
  vector.tam = int.parse(stdin.readLineSync());

  for (int i = 0; i < vector.tam; i++) {
    stdout.writeln('${i + 1}. Digite un número: ');
    int valor = int.parse(stdin.readLineSync());
    vector.valores.insert(i, valor);
  }
}

void comprobarOrdenamiento(Vector vector) {
  bool band = false;

  int i = 0;
  while ((band == false) && (i < vector.tam - 1)) {
    if (vector.valores[i] > vector.valores[i + 1]) {
      band = true;
    }

    i++;
  }

  if (band == false) {
    print('El arreglo está ordenado crecientemente!');
  } else {
    print('El arreglo no está ordenado!');
  }
}

void main() {

  Vector vector = new Vector();

  pedirDatos(vector);

  comprobarOrdenamiento(vector);
}