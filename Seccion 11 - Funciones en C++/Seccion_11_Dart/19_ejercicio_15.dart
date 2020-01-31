
import 'dart:io';

class Matriz {
  int nfilas = 0;
  int ncols = 0;
  List<List> matriz = new List<List>();

  Matriz(this.nfilas, this.ncols) {
    for (int i = 0; i < nfilas; i++) {
      matriz.insert(i, new List());
      for (int j = 0; j < ncols; j++) {
        matriz[i].insert(j, 0);
      }
    }
  }
}

int nfilas, ncols;
List<List> matriz = new List<List>();

void pedirDatos(List<List> m) {
  int val;
  List<int> fila = new List<int>();

  stdout.writeln('Digite el número de filas: ');
  nfilas = int.parse(stdin.readLineSync());
  stdout.writeln('Digite el número de columnas: ');
  ncols = int.parse(stdin.readLineSync());

  //Matriz m = new Matriz(nfilas, ncols);

  for (int i = 0; i < nfilas; i++) {
    for (int j = 0; j < ncols; j++) {
      stdout.writeln('[$i][$j] Digite un número: ');
      val = int.parse(stdin.readLineSync());
      fila.insert(j, val);
    }
    m.insert(i, new List<int>.from(fila));
    fila.clear();
  }

}

void comprobarSimetria(List<List> m) {
  int cont = 0;

  if (nfilas == ncols) {
    for (int i = 0; i < nfilas; i++) {
      for (int j = 0; j < ncols; j++) {
        if (m[i][j] == m[j][i]) {
          cont++;
        }
      }
    }
  }

  if (cont == nfilas * ncols) {
    print('\nLa matriz es Simétrica!\n');
  } else {
    print('\nLa matriz NO es Simétrica!');
  }
}

void main() {

  pedirDatos(matriz);

  print(matriz);

  comprobarSimetria(matriz);

}