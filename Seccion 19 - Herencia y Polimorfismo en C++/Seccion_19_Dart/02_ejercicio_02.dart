
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