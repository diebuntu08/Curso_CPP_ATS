
import 'dart:io';

void main() {

  int numero;

  stdout.write('Digite un número: ');
  numero = int.parse(stdin.readLineSync());

  if (numero % 2 == 0) {
    print('El número $numero es par.');
  } else {
    print('El número $numero es impar.');
  }
}