
import 'dart:io';

List<int> vector = new List();
int tam;

void pedirDatos() {
  int valor;

  stdout.writeln('Digite el tamaño del vector: ');
  tam = int.parse(stdin.readLineSync());

  for (int i = 0; i < tam; i++) {
    stdout.writeln('${i + 1}. Digite un número: ');
    valor = int.parse(stdin.readLineSync());
    vector.insert(i, valor);
  }
}

void cambiarSigno() {
  for (int i = 0; i < tam; i++) {
    vector[i] *= -1;
  }
}

void mostrarVector() {
  print('\nMostrando los elementos del vector con signo cambiado:\n');

  for (int i = 0; i < tam; i++) {
    print(vector[i]);
  }
}

void main() {

  pedirDatos();
  cambiarSigno();
  mostrarVector();

}