
import 'dart:io';

abstract class Mamifero {

  int _anioNacimiento;
  String _lugarNacimiento, _raza;

  Mamifero(this._anioNacimiento, this._lugarNacimiento, this._raza);

  String imprimirDieta();

  int getAnioNacimiento() {
    return _anioNacimiento;
  }

  String getLugarNacimiento() {
    return _lugarNacimiento;
  }

  String getRaza() {
    return _raza;
  }
}

class Felino extends Mamifero {

  String nombreCirco;

  Felino(int anioNacimiento, String lugarNacimiento, String raza, this.nombreCirco) : super(anioNacimiento, lugarNacimiento, raza);

  @override
  String imprimirDieta() {
    return "La dieta del felino es a base de carne.\n";
  }

  void setNombreCirco(String nuevoNombre) {
    nombreCirco = nuevoNombre;
  }

  String getNombreCirco() {
    return nombreCirco;
  }

}

class GatoDomestico extends Felino {

  String nombreDuenio;

  GatoDomestico(int anioNacimiento, String lugarNacimiento, String raza, this.nombreDuenio) : super(anioNacimiento, lugarNacimiento, raza, "");

  @override
  String imprimirDieta() {
    return "La dieta del gato es con Whiskas.\n";
  }

  void setNombreDuenio(String nuevoNombre) {
    nombreDuenio = nuevoNombre;
  }

  String getNombreDuenio() {
    return nombreDuenio;
  }
}

void main() {

  final GatoDomestico minino = new GatoDomestico(2015, "Trujillo", "Gato Persa", "Diego");
  final Felino estrellaCirco = new Felino(2014, "La India", "Tigre de Bengala", "Espectacular");
    
  print("\nDietas:");
  print("Gato: ${minino.imprimirDieta()}Felino: ${estrellaCirco.imprimirDieta()}");
    
  print("\nAños de nacimiento y lugar de nacimiento: ");
  print("Gato: ${minino.getAnioNacimiento()} - ${minino.getLugarNacimiento()}");
  print("Felino: ${estrellaCirco.getAnioNacimiento()} - ${estrellaCirco.getLugarNacimiento()}");
    
  print("\nCambiar el nombre del dueño del gato:");
  String nuevoNombre;
  stdout.write("Digite el nombre del nuevo dueño: ");
  nuevoNombre = stdin.readLineSync();
  minino.setNombreDuenio(nuevoNombre);
  print("El nuevo dueño del Gato es: ${minino.getNombreDuenio()}");
    
  print("\nRaza:");
  print("Gato: ${minino.getRaza()}\nFelino: ${estrellaCirco.getRaza()}");
    
  print("\nCambiar el nombre del Circo:");
  stdout.write("Digite el nuevo nombre del circo: ");
  nuevoNombre = stdin.readLineSync();
  estrellaCirco.setNombreCirco(nuevoNombre);
  print("El nuevo nombre del circo es: ${estrellaCirco.getNombreCirco()}");
}