
import 'dart:io';

class Alumno {

  String nombreCarrera;

  Alumno(this.nombreCarrera);

  void mostrarDatos() {
    print("Nombre de la carrera: $nombreCarrera");
  }

  void setNombreCarrera(String nuevoNombre) {
    nombreCarrera = nuevoNombre;
  }

  String getNombreCarrera() {
    return nombreCarrera;
  }
}

class Deportista {

  String nombreEntrenador;

  void mostrarDatosDeportista() {
    print("Nombre del entrenador: $nombreEntrenador");
  }

  void setNombreEntrenador(String nuevoNombre) {
    nombreEntrenador = nuevoNombre;
  }

  String getNombreEntrenador() {
    return nombreEntrenador;
  }
}

class DeportistaPersona extends Deportista {

  DeportistaPersona(String nombreEntrenador) {
    this.nombreEntrenador = nombreEntrenador;
  }
}

class BecadoDeporte extends Alumno with Deportista {

  double montoBeca;

  BecadoDeporte(String nombreCarrera, String nombreEntrenador, this.montoBeca) : super(nombreCarrera) {
    setNombreEntrenador(nombreEntrenador);
  }

  void mostrarDatosBecado() {
    mostrarDatos();
    mostrarDatosDeportista();
    print("El monto de la beca es: $montoBeca");
  }

  void setMontoBeca(double porcentajeIncremento) {
    double incremento = (montoBeca * porcentajeIncremento) / 100;
    montoBeca += incremento;
  }

  double getMontoBeca() {
    return montoBeca;
  }

}

void main() {

  final Alumno alumnoJuan = new Alumno("Informática");
  final Alumno alumnoPedro = new Alumno("Sistemas");

  final DeportistaPersona deporLuis = new DeportistaPersona("Popeye");

  final BecadoDeporte bdAna = new BecadoDeporte("Administración", "Luis", 1200);
  final BecadoDeporte bdCarmen = new BecadoDeporte("Contabilidad", "La Roca", 1350);

  stdout.writeln("\nMostrando Datos: ");
  print("Alumno Juan:");
  alumnoJuan.mostrarDatos();
  print("Alumnos Pedro:");
  alumnoPedro.mostrarDatos();
  print("Deportista Luis:");
  deporLuis.mostrarDatosDeportista();
  print("Becado Ana:");
  bdAna.mostrarDatosBecado();
  print("Becado Carmen:");
  bdCarmen.mostrarDatosBecado();

  String nuevaCarrera;
  stdout.write("\nDigite la nueva carrera de Juan: ");
  nuevaCarrera = stdin.readLineSync();
  alumnoJuan.setNombreCarrera(nuevaCarrera);
  stdout.write("Digite la nueva carrera de Ana: ");
  nuevaCarrera = stdin.readLineSync();
  bdAna.setNombreCarrera(nuevaCarrera);

  print("\nLa nueva carrera de Juan es: ${alumnoJuan.getNombreCarrera()}");
  print("La nueva carrera de Ana es: ${bdAna.getNombreCarrera()}");

  String nuevoEntrenador;
  stdout.write("\nDigite el nuevo entrenador de Luis: ");
  nuevoEntrenador = stdin.readLineSync();
  deporLuis.setNombreEntrenador(nuevoEntrenador);
  stdout.write("Digite el nuevo entrenador de Carmen: ");
  nuevoEntrenador = stdin.readLineSync();
  bdCarmen.setNombreEntrenador(nuevoEntrenador);

  print("\nEl nuevo entrenador de Luis es: ${deporLuis.getNombreEntrenador()}");
  print("El nuevo entrenador de Carmen es: ${bdCarmen.getNombreEntrenador()}");

  double incremento;
  stdout.write("\nDigite el incremento de la beca de Ana: ");
  incremento = double.parse(stdin.readLineSync());
  bdAna.setMontoBeca(incremento);
  stdout.write("Digite el incremento de la beca de Carmen: ");
  incremento = double.parse(stdin.readLineSync());
  bdCarmen.setMontoBeca(incremento);

  print("\nLa nueva beca de Ana es: ${bdAna.getMontoBeca()}");
  print("La nueva beca de Carmen es: ${bdCarmen.getMontoBeca()}");
}