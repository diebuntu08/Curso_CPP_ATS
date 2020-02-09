
import 'dart:io';

int nElementos;
List<int> elementos = new List<int>();

void pedirDatos() {
  stdout.write('Digite el número de elementos: ');
  nElementos = int.parse(stdin.readLineSync());

  for (int i = 0; i < nElementos; i++) {
    stdout.write('Digite un número[$i]: ');
    elementos.insert(i, int.parse(stdin.readLineSync()));
  }
}

void buscarElemento() {
  int dato, i;
  bool band = false;

  stdout.write('Digite un número a buscar: ');
  dato = int.parse(stdin.readLineSync());

  i = 0;
  while ((i < nElementos) && (band == false)) {
    if (elementos[i] == dato) {
      band = true;
    }

    i++;
  }

  if (band == false) {
    print('\nEl número no existe en el arreglo.');
  } else {
    print('\nEl número sí existe en el arreglo. posición: ${i - 1}');
  }
}

void main() {

  pedirDatos();

  buscarElemento();

}