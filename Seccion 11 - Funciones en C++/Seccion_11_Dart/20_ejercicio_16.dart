
import 'dart:io';

int nfilas, ncols;
List<List> m = new List<List>();

void pedirDatos() {
  int val;

  stdout.writeln('Digite el número de filas: ');
  nfilas = int.parse(stdin.readLineSync());
  stdout.writeln('Digite el número de columnas: ');
  ncols = int.parse(stdin.readLineSync());

  for (int i = 0; i < nfilas; i++) {
    m.insert(i, new List<int>());
    for (int j = 0; j < ncols; j++) {
      stdout.writeln('[$i][$j] Digite un número: ');
      val = int.parse(stdin.readLineSync());
      m[i].insert(j, val);
    }
  }
}

int comprobarMenorElemento() {
  int fila, menor = 99999;

  stdout.writeln('\nDigite un número de fila para comprobar menor elemento: ');
  fila = int.parse(stdin.readLineSync());

  for (int i = 0; i < nfilas; i++) {
    for (int j = 0; j < ncols; j++) {
      if (i == fila) {
        if (m[i][j] < menor) {
          menor = m[i][j];
        } 
      }
    }
  }

  return menor;
}

void main() {

  pedirDatos();

  int menorElemento = comprobarMenorElemento();

  print('\nEl menor elemento es: $menorElemento');
}