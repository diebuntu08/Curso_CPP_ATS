
import 'dart:io';

double numero;

void pedirDatos() {
  stdout.writeln('Digite un número: ');
  numero = double.parse(stdin.readLineSync());
}

void al_cuadrado(double n) {
  double elevacion;

  elevacion = n * n;

  print('El número $n al cuadrado es: $elevacion');
}

void main() {
  pedirDatos();
  al_cuadrado(numero);
}