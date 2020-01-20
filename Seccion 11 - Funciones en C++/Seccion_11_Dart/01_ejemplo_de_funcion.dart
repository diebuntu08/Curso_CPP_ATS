
import 'dart:io';

int encontrarMax(int x, int y) {
  int numMax;

  if (x > y) {
    numMax = x;
  } else {
    numMax = y;
  }

  return numMax;
}

void main() {

  int n1, n2;
  int mayor;

  stdout.writeln('Digite el primer número: ');
  n1 = int.parse(stdin.readLineSync());
  stdout.writeln('Digite el segundo número: ');
  n2 = int.parse(stdin.readLineSync());

  mayor = encontrarMax(n1, n2);

  print('\El mayor de los dos números es: $mayor\n');

}