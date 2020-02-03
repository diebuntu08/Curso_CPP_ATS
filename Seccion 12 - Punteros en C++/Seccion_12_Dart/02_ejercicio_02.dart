
import 'dart:io';

void main() {

  int numero, cont = 0;

  stdout.write('Digite un número: ');
  numero = int.parse(stdin.readLineSync());

  for (int i = 1; i < numero; i++) {
    if (numero % i == 0) {
      cont++;
    }
  }

  if (cont > 2) {
    print('El número $numero no es primo.');
  } else {
    print('El número $numero es primo.');
  }

}