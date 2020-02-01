
import 'dart:io';

class Complejo {
  double real, imaginaria;

  Complejo();
}

Complejo z1 = new Complejo();
Complejo z2 = new Complejo();

void pedirDatos(Complejo z1, Complejo z2) {
  print('Digite los datos para el primer número complejo: ');
  stdout.writeln('Parte Real: ');
  z1.real = double.parse(stdin.readLineSync());
  stdout.writeln('Parte Imaginaria: ');
  z1.imaginaria = double.parse(stdin.readLineSync());

  print('Digite los datos para el segundo número complejo: ');
  stdout.writeln('Parte Real: ');
  z2.real = double.parse(stdin.readLineSync());
  stdout.writeln('Parte Imaginaria: ');
  z2.imaginaria = double.parse(stdin.readLineSync());
}

Complejo suma(Complejo z1, Complejo z2) {
  Complejo z = new Complejo();

  z.real = z1.real + z2.real;
  z.imaginaria = z1.imaginaria + z2.imaginaria;

  return z;
}

void muestra(Complejo x) {
  print('\n\nResultado de la suma: ${x.real} , ${x.imaginaria}');
}

void main() {

  pedirDatos(z1, z2);

  Complejo x = suma(z1, z2);

  muestra(x);
  
}