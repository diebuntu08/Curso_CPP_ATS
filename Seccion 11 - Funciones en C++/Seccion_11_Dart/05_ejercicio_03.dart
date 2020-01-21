
import 'dart:io';

int numero, exponente;

void pedirDatos() {
  stdout.writeln('Digite el número: ');
  numero = int.parse(stdin.readLineSync());
  stdout.writeln('Digite el exponente: ');
  exponente = int.parse(stdin.readLineSync());
}

void funpot(int x, int y) {
  int resultado = 1;

  for (int i = 1; i <= y; i++) {
    resultado *= x;
  }

  print('El resultado de $x elevado a $y es: $resultado');
}

void main() {
  pedirDatos();
  funpot(numero, exponente);
}