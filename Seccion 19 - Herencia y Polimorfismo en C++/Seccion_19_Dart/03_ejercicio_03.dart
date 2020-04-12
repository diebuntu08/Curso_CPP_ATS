
import 'dart:io';

abstract class Persona {

  String nombre, apellido;
  int edad;

  Persona(this.nombre, this.apellido, this.edad);

  void viajar() {
    print("Viajar");
  }

  String getNombre() {
    return nombre;
  }

  String getApellido() {
    return apellido;
  }

  int getEdad() {
    return edad;
  }

  void partidoFutbol();
  void entrenamiento();
}

class Futbolista extends Persona {

  int dorsal;
  String posicion;

  Futbolista(String nombre, String apellido, int edad, this.dorsal, this.posicion) : super(nombre, apellido, edad);

  void partidoFutbol() {
    print("Juega el partido de fútbol");
  }

  void entrenamiento() {
    print("Entrena");
  }

  void entrevista() {
    print("Da una entrevista");
  }
}

class Entrenador extends Persona {

  String estrategia;

  Entrenador(String nombre, String apellido, int edad, this.estrategia) : super(nombre, apellido, edad);

  void partidoFutbol() {
    print("Dirige el equipo en el partido de fútbol");
  }

  void entrenamiento() {
    print("Dirige el entrenamiento");
  }

  void planificarEntrenamiento() {
    print("Planificar entrenamiento");
  }
}

class Medico extends Persona {

  String titulacion;
  int aniosExperiencia;

  Medico(String nombre, String apellido, int edad, this.titulacion, int aniosExperiencia) : super(nombre, apellido, edad);

  void partidoFutbol() {
    print("Da asistencia en caso de lesión en el partido de fútbol");
  }

  void entrenamiento() {
    print("Da asistencia en caso de lesión en el entrenamiento");
  }

  void curarLesion() {
    print("Curando la lesión");
  }
}

final Futbolista gonzalo = new Futbolista("Gonzalo", "Higuain", 30, 9, "Delantero");
final Futbolista paulo = new Futbolista("Gonzalo", "Higuain", 30, 9, "Delantero");
final Entrenador entrenador = new Entrenador("Massimiliano", "Allegri", 50, "Defensivo");
final Medico medico = new Medico("Alex", "Marroni", 52, "Fisioterapeuta", 20);
List equipo = [gonzalo, paulo, entrenador, medico];

void viajarEquipo() {
  for (int i = 0; i < 4; i++) {
    stdout.write("${equipo[i].getNombre()} ${equipo[i].getApellido()} -> ");
    equipo[i].viajar();
  }
}

void entrenamientoEquipo() {
  for (int i = 0; i < 4; i++) {
    stdout.write("${equipo[i].getNombre()} ${equipo[i].getApellido()} -> ");
    equipo[i].entrenamiento();
  }
}

void partidoFutbol() {
  for (int i = 0; i < 4; i++) {
    stdout.write("${equipo[i].getNombre()} ${equipo[i].getApellido()} -> ");
    equipo[i].partidoFutbol();
  }
}

void planificarEntrenamiento() {
  stdout.write("${equipo[2].getNombre()} ${equipo[2].getApellido()} -> ");
  equipo[2].planificarEntrenamiento();
}

void entrevista() {
  for (int i = 0; i < 2; i++) {
    stdout.write("${equipo[i].getNombre()} ${equipo[i].getApellido()} -> ");
    equipo[i].entrevista();
  }
}

void curarLesion() {
  stdout.write("${equipo[3].getNombre()} ${equipo[3].getApellido()} -> ");
  equipo[3].curarLesion();
}

void menu() {

  int opcion;

  do {
    print("\t.:MENU:.");
    print("1. Viaje en equipo");
    print("2. Entrenamiento");
    print("3. Partido de fútbol");
    print("4. Planificar entrenamiento");
    print("5. Entrevista");
    print("6. Curar lesión");
    print("7. Salir");
    stdout.write("Opción: ");
    opcion = int.parse(stdin.readLineSync());
    print("");

    switch (opcion) {
      case 1: // Viaje en equipo
        viajarEquipo();
        break;
      case 2: // Entrenamiento
        entrenamientoEquipo();
        break;
      case 3: // Partido de fútbol
        partidoFutbol();
        break;
      case 4: // Planificar entrenamiento
        planificarEntrenamiento();
        break;
      case 5: // Entrevista
        entrevista();
        break;
      case 6: // Curar lesión
        curarLesion();
        break;
      case 7: // Salir
        break;
      default:
        print("Opción inválida");
        break;
    }
    print("");

  } while (opcion != 7);
}

void main() {

  menu();

}