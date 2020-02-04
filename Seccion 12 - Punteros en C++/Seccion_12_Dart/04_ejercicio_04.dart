
import 'dart:io';

void main() {

  int nElementos, menor = 99999;
  List<int> numeros = new List();

  stdout.write('Digite el número de elementos: ');
  nElementos = int.parse(stdin.readLineSync());

  for (int i = 0; i < nElementos; i++) {
    stdout.write('digite un número[$i]: ');
    numeros.add(int.parse(stdin.readLineSync()));
  }

  for (int val in numeros) {
    if (val < menor) {
      menor = val;
    }
  }

  print('El menor elemento de números es: $menor');

}