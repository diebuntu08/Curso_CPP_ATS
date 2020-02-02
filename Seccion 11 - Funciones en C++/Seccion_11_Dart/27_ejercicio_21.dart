
import 'dart:io';

int potencia(int x, int y) {
  if (y == 0) {
    return 1;
  } else if (y == 1){
    return x;
  } else {
    return x * potencia(x, y - 1);
  }
}

void main() {

  int base, exponente;

  stdout.writeln('Digite la base: ');
  base = int.parse(stdin.readLineSync());
  stdout.writeln('Digite el exponente: ');
  exponente = int.parse(stdin.readLineSync());

  print('\nLa potencia de $base^$exponente es: ${potencia(base, exponente)}');
}