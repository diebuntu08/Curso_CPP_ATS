
import 'dart:io';

double num1, num2;

void pedirDatos() {
  stdout.writeln('Digite un número: ');
  num1 = double.parse(stdin.readLineSync());
  stdout.writeln('Digite otro número: ');
  num2 = double.parse(stdin.readLineSync());
}

void mult(double x, double y) {
  double multiplicacion = x * y;

  print('La multilicacion es: $multiplicacion');
}

void main() {

  pedirDatos();
  mult(num1, num2);
}
