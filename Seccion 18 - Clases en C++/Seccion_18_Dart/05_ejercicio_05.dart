
import 'dart:io';

class Atleta {

  int numAtleta;
  String nombre;
  double tiempoCarrera;

  Atleta();
  Atleta.datos(this.numAtleta, this.nombre, this.tiempoCarrera);

  double getTiempoCarrera() {
    return tiempoCarrera;
  }

  void mostrarDatos() {
    print("Número de atleta: $numAtleta");
    print("Nombre de atleta: $nombre");
    print("Tiempo de carrera: $tiempoCarrera");
  }

  static int indiceGanador(List<Atleta> atletas, int n) {
    double tiempo = atletas[0].getTiempoCarrera();
    int indice;

    for (int i = 1; i < n; i++) {
      if (atletas[i].getTiempoCarrera() < tiempo) {
        tiempo = atletas[i].getTiempoCarrera();
        indice = i;
      }
    }

    return indice;
  }

}

void main() {
  List<Atleta> atletas;
  int numAtletas, numAtleta, indiceAtleta;
  String nombre;
  double tiempo;

  stdout.write("Digite el número de atletas a competir: ");
  numAtletas = int.parse(stdin.readLineSync());

  atletas = new List<Atleta>(numAtletas);

  for (int i = 0; i < numAtletas; i++) {
    print("\nDigite los atributos del atleta ${i + 1}:");
    stdout.write("Digite el número de atleta: ");
    numAtleta = int.parse(stdin.readLineSync());
    stdout.write("Digite el nombre del atleta: ");
    nombre = stdin.readLineSync();
    stdout.write("Digite el tiempo de carrera: ");
    tiempo = double.parse(stdin.readLineSync());

    atletas[i] = new Atleta.datos(numAtleta, nombre, tiempo);
  }

  indiceAtleta = Atleta.indiceGanador(atletas, numAtletas);

  print("\nEl atleta ganador de la carrera es: ");
  atletas[indiceAtleta].mostrarDatos();
}