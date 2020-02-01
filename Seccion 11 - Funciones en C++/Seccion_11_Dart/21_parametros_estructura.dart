
import 'dart:io';

class Persona {
  String nombre;
  int edad;

  Persona();
}

Persona p1 = new Persona();

void pedirDatos(Persona p) {
  stdout.writeln('Digite su nombre: ');
  p.nombre = stdin.readLineSync();
  stdout.writeln('Digite su edad: ');
  p.edad = int.parse(stdin.readLineSync());
}

void mostrarDatos(Persona p) {
  print('\n\nNombre: ${p.nombre}');
  print('Edad: ${p.edad}');
}

void main() {

  pedirDatos(p1);
  mostrarDatos(p1);
  
}