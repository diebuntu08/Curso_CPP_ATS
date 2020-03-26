
import 'dart:io';

class Vehiculo {

  String marca, modelo;
  double precio;

  Vehiculo();
  Vehiculo.datos(this.marca, this.modelo, this.precio);

  double getPrecio() {
    return precio;
  }

  void mostrarDatos() {
    print("Marca: $marca");
    print("Modelo: $modelo");
    print("Precio: $precio");
  }

  static int indiceMasBarato(List<Vehiculo> coches, int n) {
    int indice = 0;
    double precio = coches[0].getPrecio();

    for (int i = 1; i < n; i++) {
      if (coches[i].getPrecio() < precio) {
        precio = coches[i].getPrecio();
        indice = i;
      }
    }

    return indice;
  }
}

void main() {

  List<Vehiculo> coches;
  int numVehiculos, cocheBarato;
  String marca, modelo;
  double precio;

  stdout.write("Digite el número de vehículos: ");
  numVehiculos = int.parse(stdin.readLineSync());

  coches = new List<Vehiculo>(numVehiculos);

  for (int i = 0; i < numVehiculos; i++) {
    print("Digite los datos del vehículo ${i + 1}:");
    stdout.write("Marca: ");
    marca = stdin.readLineSync();
    stdout.write("Modelo: ");
    modelo = stdin.readLineSync();
    stdout.write("Precio: ");
    precio = double.parse(stdin.readLineSync());

    coches[i] = new Vehiculo.datos(marca, modelo, precio);
  }

  cocheBarato = Vehiculo.indiceMasBarato(coches, numVehiculos);

  print("\nEl vehículo más barato es: ");
  coches[cocheBarato].mostrarDatos();
}