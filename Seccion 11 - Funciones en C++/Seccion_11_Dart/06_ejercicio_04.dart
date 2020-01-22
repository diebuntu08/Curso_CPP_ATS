
import 'dart:io';

double numero;

void pedirDatos() {
  stdout.writeln('Digite un número de punto flotante: ');
  numero = double.parse(stdin.readLineSync());
}

double parteFraccionaria(double r) {
  int entero = r.toInt();

  double resultado = r - entero;

  return resultado;
}

void main() {

  pedirDatos();
  print('LA parte fraccionaria del número $numero es: ${parteFraccionaria(numero)}');
}