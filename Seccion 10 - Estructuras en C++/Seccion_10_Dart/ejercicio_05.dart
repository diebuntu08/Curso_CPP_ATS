
import 'dart:io';

class Promedio {
    double nota1;
    double nota2;
    double nota3;
    
    Promedio({this.nota1 = 0, this.nota2 = 0, this.nota3 = 0});
}

class Alumno {
    String nombre;
    String sexo;
    int edad;
    final Promedio prom = new Promedio();
    
    Alumno({this.nombre = 'Sin nombre', this.sexo = 'Sin sexo', this.edad = 0});
}

void main() {
    
    final Alumno alumno = new Alumno();
    
    stdout.writeln('Digite su nombre: ');
    alumno.nombre = stdin.readLineSync();
    stdout.writeln('Digite su sexo: ');
    alumno.sexo = stdin.readLineSync();
    stdout.writeln('Digite su edad: ');
    alumno.edad = int.parse(stdin.readLineSync());
    
    print('\n.:Notas del alumno:.\n');
    stdout.writeln('Nota 1: ');
    alumno.prom.nota1 = double.parse(stdin.readLineSync());
    stdout.writeln('Nota 2: ');
    alumno.prom.nota2 = double.parse(stdin.readLineSync());
    stdout.writeln('Nota 3: ');
    alumno.prom.nota3 = double.parse(stdin.readLineSync());
    
    final double promedio_alumno = (alumno.prom.nota1 + alumno.prom.nota2 + alumno.prom.nota3) / 3;
    
    print('\n.:Datos del alumno:.\n');
    print('Nombre: ${alumno.nombre}');
    print('Sexo: ${alumno.sexo}');
    print('Edad: ${alumno.edad}');
    print('Promedio: $promedio_alumno');
}

