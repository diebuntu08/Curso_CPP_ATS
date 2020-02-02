
import 'dart:io';

int suma(int n) {
  if (n == 1) {
    return 1;
  } else {
    return n + suma(n - 1);
  }
}

void main() {

  int nElementos;

  do {
    stdout.writeln('Digite el número de elementos: ');
    nElementos = int.parse(stdin.readLineSync());
    if (nElementos <= 0) {
      print('\nEl número de elementos debe ser un entero positivo, no cero!!');
    }
  } while (nElementos <= 0);

  print('La suma es: ${suma(nElementos)}');
}