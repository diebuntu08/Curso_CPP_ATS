
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

void ordenarArreglo() {
  int aux;

  // Ordenar el arreglo con el método burbuja
  for (int i = 0; i < nElementos; i++) {
    for (int j = 0; j < nElementos-1; j++) {
      if (elementos[j] > elementos[j+1]) {
        aux = elementos[j];
        elementos[j] = elementos[j+1];
        elementos[j+1] = aux;
      }
    }
  }
}

void mostrarArreglo() {
  print('\n\nMostrando arreglo ordenado:\n');

  for (int i = 0; i < nElementos; i++) {
    stdout.write('${elementos[i]}, ');
  }

  print('');
}

void main() {

  pedirDatos();

  ordenarArreglo();

  mostrarArreglo();

}