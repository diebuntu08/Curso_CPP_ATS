
import 'dart:io';

class Persona {
    String nombre;
    bool discapacidad;
    
    Persona({this.nombre = 'Sin nombre', this.discapacidad = false});
}

void main() {
    
    int n_personas, j = 0, k = 0;
    String nombre;
    String discapacidad;
    
    stdout.writeln('Digite el número de personas: ');
    n_personas = int.parse(stdin.readLineSync());

    List<Persona> personas = new List(n_personas);
    List<Persona> personasConD = new List()..length = 100;
    List<Persona> personasSinD = new List()..length = 100;

    // Rellenando el vector con los datos de las personas
    for (int i = 0; i < n_personas; i++) {
      stdout.writeln('${i + 1}. Digite el nombre de la persona: ');
      nombre = stdin.readLineSync();
      stdout.writeln('${i + 1}. La persona tiene discapacidad? (S/N): ');
      discapacidad = stdin.readLineSync();

      // Almacenando las personas en las correspondientes listas
      if (discapacidad.toLowerCase() == 's') {
        personasConD[j] = new Persona(nombre: nombre, discapacidad: true);
        personas[i] = new Persona(nombre: nombre, discapacidad: true);
        j++;
      } else {
        personasSinD[k] = new Persona(nombre: nombre);
        personas[i] = new Persona(nombre: nombre);
        k++;
      }
    }

    print('\nMostrar a las personas sin discapacidad:\n');
    for (int i = 0; i < k; i++) {
      print('${personasSinD[i].nombre}');
    }

    print('\nMostrar a las personas con discapacidad:\n');
    for (int i = 0; i < j; i++) {
      print('${personasConD[i].nombre}');
    }

    print(personas);
}
