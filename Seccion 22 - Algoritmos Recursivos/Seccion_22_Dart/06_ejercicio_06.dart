
import 'dart:io';

const int N = 5;
List<List> tablero = new Iterable<List<int>>.generate(
  N,
  (i) => new List<int>.filled(N, 0)
).toList();

// Desplazamientos relativos del caballo
List<List<int>> d = [[2,1],[1,2],[-1,2],[-2,1],[-2,-1],[-1,-2],[1,-2],[2,-1]];

void escribirTablero() {
  int i, j;

  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      stdout.write("${tablero[i][j]}|");
    }
    print("");
  }
  print("");
}

void saltoCaballo(int i, int x, int y, bool exito, List<List<int>> tablero) {
  int nx, ny;
  int k = 0;

  do {
    k++;

    nx = x + d[k-1][0];
    ny = y + d[k-1][1];

    // Verificando si las coordenadas son correctas
    if (nx >= 0 && nx < N && ny >= 0 && ny < N && tablero[nx][ny] == 0) {
      // Guardamos el movimiento
      tablero[nx][ny] = i;
      escribirTablero(); // Mostranos como el caballo se va moviendo

      if (i < N * N) {
        saltoCaballo(i + 1, nx, ny, exito, tablero);

        if (!exito) {
          tablero[nx][ny] = 0;
        }
      } else {
        exito = true;
      }
    } 
  } while (k < 8 && !exito);
}

void main() {
  bool exito = false;
  int fila = 1;
  int col = 0;

  tablero[fila][col] = 1;

  saltoCaballo(2, fila, col, exito, tablero);

  if (exito) {
    print("Camino encontrado");
    escribirTablero();
  } else {
    print("Camino no encontrado");
  }
}