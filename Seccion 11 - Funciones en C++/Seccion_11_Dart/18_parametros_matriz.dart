
import 'dart:io';

void mostrarMatriz(List<List> m, [String estado='']) {
  print('\nMostrando matriz $estado:\n');

  for (int i = 0; i < m.length; i++) {
    for (int j = 0; j < m[0].length; j++) {
      stdout.write('${m[i][j]} ');
    }
    print('');
  }
}

void calcularCuadrado(List<List> m) {
  for (int i = 0; i < m.length; i++) {
    for (int j = 0; j < m[0].length; j++) {
      m[i][j] *= m[i][j];
    }
  }
}

void main() {

  List<List> m = [[1, 2, 3], [4, 5, 6]];

  mostrarMatriz(m, 'original');
  calcularCuadrado(m);
  mostrarMatriz(m, 'elevada');

}