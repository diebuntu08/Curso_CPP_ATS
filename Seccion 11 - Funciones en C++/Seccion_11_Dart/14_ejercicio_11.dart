
import 'dart:io';

class Vector {
  int tam = 0;
  List<int> valores = new List();

  Vector();
}

void pedirDatos(Vector vector) {

  int valor;

  stdout.writeln('Digite el número de elementos del vector: ');
  vector.tam = int.parse(stdin.readLineSync());

  for (int i = 0; i < vector.tam; i++) {
    stdout.writeln('${i + 1}. Digite un número: ');
    valor = int.parse(stdin.readLineSync());
    vector.valores.insert(i, valor);
  }
}

int calcularSuma(List<int> valores) {
  int suma = 0;

  for (int i = 0; i < valores.length; i++) {
    suma += valores[i];
  }

  return suma;
}

void main() {

  Vector vector = new Vector();

  pedirDatos(vector);

  print('\nLa suma de los elementos del vector es: ${calcularSuma(vector.valores)}');
}