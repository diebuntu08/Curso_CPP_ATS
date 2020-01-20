
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
    
    int n_alumnos, posM;
    double mayor = 0;
    
    stdout.writeln('Digite el número de alumnos: ');
    n_alumnos = int.parse(stdin.readLineSync());
    
    List<double> promedio_alumno = new List(n_alumnos);
    List<Alumno> alumnos = new List(n_alumnos);
    
    for (int i = 0; i < n_alumnos; i++) {
        stdout.writeln('${i + 1}. Digite su nombre: ');
        String nombre = stdin.readLineSync();
        stdout.writeln('${i + 1}. Digite su sexo: ');
        String sexo = stdin.readLineSync();
        stdout.writeln('${i + 1}. Digite su edad: ');
        int edad = int.parse(stdin.readLineSync());
        
        alumnos[i] = new Alumno(nombre: nombre, sexo: sexo, edad: edad);
        
        print('\n.:Notas del alumno ${i + 1}:.\n');
        stdout.writeln('Nota 1: ');
        alumnos[i].prom.nota1 = double.parse(stdin.readLineSync());
        stdout.writeln('Nota 2: ');
        alumnos[i].prom.nota2 = double.parse(stdin.readLineSync());
        stdout.writeln('Nota 3: ');
        alumnos[i].prom.nota3 = double.parse(stdin.readLineSync());
        print('\n');
        
        promedio_alumno[i] = (alumnos[i].prom.nota1 + alumnos[i].prom.nota2 + alumnos[i].prom.nota3) / 3;
        
        if (promedio_alumno[i] > mayor) {
            mayor = promedio_alumno[i];
            posM = i;
        }
    }
    
    print('\n.:Datos del alumno:.\n');
    print('Nombre: ${alumnos[posM].nombre}');
    print('Sexo: ${alumnos[posM].sexo}');
    print('Edad: ${alumnos[posM].edad}');
    print('Promedio: ${promedio_alumno[posM].toStringAsFixed(2)}');
}

