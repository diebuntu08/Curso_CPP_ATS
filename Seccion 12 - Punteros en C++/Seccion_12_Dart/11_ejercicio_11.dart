
import 'dart:io';

class Alumno {
  String nombre;
  int edad;
  double promedio;

  Alumno(this.nombre, this.edad, this.promedio);
}

List<Alumno> alumnos = new List<Alumno>(3);

void pedirDatos() {
  String nombre;
  int edad;
  double promedio;

  for (int i = 0; i < 3; i++) {
    stdout.write('Digite su nombre: ');
    nombre = stdin.readLineSync();
    stdout.write('Digite su edad: ');
    edad = int.parse(stdin.readLineSync());
    stdout.write('Digite su promedio: ');
    promedio = double.parse(stdin.readLineSync());

    Alumno alumno = new Alumno(nombre, edad, promedio);
    alumnos[i] = alumno;
    print('');
  }
}

void mostrarMejorPromedio(List<Alumno> alumnos) {
  double mayor = 0.0;
  int pos = 0;

  for (int i = 0; i < 3; i++) {
    if (alumnos[i].promedio > mayor) {
      mayor = alumnos[i].promedio;
      pos = i;
    }
  }

  print('\nEl alumno con mejor promedio es:');
  print('Nombre: ${alumnos[pos].nombre}');
  print('Edad: ${alumnos[pos].edad}');
  print('Promedio: ${alumnos[pos].promedio}');
}

void main() {

  pedirDatos();

  mostrarMejorPromedio(alumnos);
  
}