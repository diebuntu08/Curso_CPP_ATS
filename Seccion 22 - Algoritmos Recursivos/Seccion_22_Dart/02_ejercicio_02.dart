
import 'dart:io';

int sumaRecursiva(int n) {
  if (n <= 9) {
    return n;
  } else {
    return (sumaRecursiva((n / 10).floor()) + n % 10);
  }
}

int sumaIterativa(int n) {
  int suma = 0;

  while (n > 9) {
    suma += n % 10;
    n = (n / 10).floor();
  }

  return suma + n;
}

void main() {

  int numero;

  stdout.write("Digite un número: ");
  numero = int.parse(stdin.readLineSync());

  print("\nLa suma de los dígitos del número es: ");
  print("Algoritmo recursivo: ${sumaRecursiva(numero)}");
  print("Algoritmo iterativo: ${sumaIterativa(numero)}");
}