
import 'dart:io';

void main() {

  List<int> numeros = new List();

  for (int i = 0; i < 10; i++) {
    stdout.write('Digite un número: ');
    numeros.add(int.parse(stdin.readLineSync()));
  }

  for (int i = 0; i < numeros.length; i++) {
    if (numeros[i] % 2 == 0) {
      print('El número ${numeros[i]} es par.');
    }
  }
}