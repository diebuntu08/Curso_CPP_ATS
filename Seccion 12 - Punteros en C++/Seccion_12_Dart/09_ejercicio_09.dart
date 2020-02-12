
import 'dart:io';

int nFilas, nCols;
List<List> matriz1 = new List<List>();
List<List> matriz2 = new List<List>();

void pedirDatos() {
  List<int> fila = new List<int>();

  stdout.write('Digite el número de filas: ');
  nFilas = int.parse(stdin.readLineSync());
  stdout.write('Digite el número de columnas: ');
  nCols = int.parse(stdin.readLineSync());

  print('\nDigite los elementos de la primera matriz:\n');
  for (int i = 0; i < nFilas; i++) {
    for (int j = 0; j < nCols; j++) {
      stdout.write('Digite un número[$i][$j]: ');
      fila.insert(j, int.parse(stdin.readLineSync()));
    }
    matriz1.insert(i, new List<int>.from(fila));
    fila.clear();
  }

  print('\nDigite los elementos de la segunda matriz:\n');
  for (int i = 0; i < nFilas; i++) {
    for (int j = 0; j < nCols; j++) {
      stdout.write('Digite un número[$i][$j]: ');
      fila.insert(j, int.parse(stdin.readLineSync()));
    }
    matriz2.insert(i, new List<int>.from(fila));
    fila.clear();
  }
}

void sumaMatrices(List<List> m1, List<List> m2, int nFilas, int nCols) {
  for (int i = 0; i < nFilas; i++) {
    for (int j = 0; j < nCols; j++) {
      m1[i][j] += m2[i][j];
    }
  }
}

void mostrarMatriz(List<List> m, int nFilas, int nCols) {
  print('\nLa matriz resultante es:\n');
  for (int i = 0; i < nFilas; i++) {
    for (int j = 0; j < nCols; j++) {
      stdout.write('${m[i][j]} ');
    }
    print('');
  }
}

void main() {

  pedirDatos();

  sumaMatrices(matriz1, matriz2, nFilas, nCols);

  mostrarMatriz(matriz1, nFilas, nCols);

}