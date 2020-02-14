
import 'dart:io';

int nFilas, nCols;
List<List> matriz = new List<List>();

void pedirDatos() {

  stdout.write('Digite el número de filas: ');
  nFilas = int.parse(stdin.readLineSync());
  stdout.write('Digite el número de columnas: ');
  nCols = int.parse(stdin.readLineSync());

  for (int i = 0; i < nFilas; i++) {
    List<int> filas = new List<int>();
    for (int j = 0; j < nCols; j++) {
      stdout.write('Digite un número[$i][$j]: ');
      filas.insert(j, int.parse(stdin.readLineSync()));
    }
    matriz.insert(i, new List<int>.from(filas));
    filas.clear();
  }
}

void mostrarMatriz() {
  print('\nImprimiendo la matriz original:');
  for (int i = 0; i < nFilas; i ++) {
    stdout.write('| ');
    for (int j = 0; j < nCols; j++) {
      stdout.write('${matriz[i][j]} ');
    }
    print('|');
  }

  print('\nImprimiendo la matriz transpuesta:');
  for (int i = 0; i < nFilas; i ++) {
    stdout.write('| ');
    for (int j = 0; j < nCols; j++) {
      stdout.write('${matriz[j][i]} ');
    }
    print('|');
  }
}

void main() {

  pedirDatos();

  mostrarMatriz();

  //print(matriz);

}