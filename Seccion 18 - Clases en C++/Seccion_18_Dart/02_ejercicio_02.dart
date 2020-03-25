
import 'dart:io';

class Cuadrilatero {

  double lado1, lado2;

  Cuadrilatero.rectangle(this.lado1, this.lado2);

  Cuadrilatero.square(double lado) {
    lado1 = lado2 = lado;
  }

  double obtenerPerimetro() {
    return 2 * (lado1 + lado2);
  }

  double obtenerArea() {
    return lado1 * lado2;
  }
}

void main() {

  Cuadrilatero c1;
  double lado1, lado2;

  stdout.write("Digite el lado 1: ");
  lado1 = double.parse(stdin.readLineSync());
  stdout.write("Digite el lado 2: ");
  lado2 = double.parse(stdin.readLineSync());

  if (lado1 == lado2) {
    c1 = new Cuadrilatero.square(lado1);
  } else {
    c1 = new Cuadrilatero.rectangle(lado1, lado2);
  }

  print("El perímetro del cuadrilátero es: ${c1.obtenerPerimetro()}");
  print("El área del cuadrilátero es: ${c1.obtenerArea()}");
}