
import 'dart:io';

List<int> vector = new List();
int tam;

void pedirDatos() {
  int valor;

  stdout.writeln('Digite el tamaño del vector: ');
  tam = int.parse(stdin.readLineSync());

  for (int i = 0; i < tam; i++) {
    stdout.writeln('${i +1}. Digite un número: ');
    valor = int.parse(stdin.readLineSync());
    vector.insert(i, valor);
  }
}

void impares() {
  List<int> vecImpares = new List();
  int j = 0;

  for (int i = 0; i < tam; i++) {
    if (vector[i] % 2 != 0) {
      vecImpares.insert(j, vector[i]);
      j++;
    }
  }

  print('\nImprimiendo los elementos impares del vector:\n');
  print(vecImpares);
}

void main() {

  pedirDatos();
  impares();
}