
import 'dart:io';

const int N = 15;
List<int> reinas = new List<int>.filled(N, 0);

void mostrarTablero() {
  List<List> tablero = new Iterable<List<int>>.generate(
    N,
    (i) => new List<int>.filled(N, 0)
  ).toList();

  print("\nMostrando el arreglo:");
  stdout.write("|");
  for (int elemento in reinas) {
    stdout.write("${elemento}|");
  }
  print("\n");

  // Ahora asignamos el valor del arreglo hacia el tablero
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      tablero[reinas[j]][j] = 1;
    }
  }

  print("\nMostrando el tablero:");
  for (int i = 0; i < N; i++) {
    stdout.write("|");
    for (int j = 0; j < N; j++) {
      stdout.write("${tablero[i][j]}|");
    }
    print("");
  }
  print("");
}

bool valido(int i) {
  /*
  Comprobar si la reina de la columna i no se amenaza
  con ninguna reina ya puesta
  */

  bool v = true;

  for (int r = 0; r < i; r++) {
    v = v && (reinas[i] != reinas[r]); // Comprobar si la fila está vacía
    v = v && ((reinas[i]-i) != (reinas[r]-r)); // Diagonal 1
    v = v && ((reinas[i]+i) != (reinas[r]+r)); // Diagonal 2
  }

  return v;
}

bool ponerReina(int i, bool solucion) {
  int k = 0; // Inicializamos el conteo de movimientos
  bool solucion = false;

  do {
    reinas[i] = k; // Copiamos la reina i en la fila k
    k++;

    mostrarTablero();

    if (valido(i)) {
      if (i < N - 1) {
        solucion = ponerReina(i + 1, solucion);

        // Vuelta atrás
        if (!solucion) {
          reinas[i] = 0;
        }
      } else {
        // Ya agregamos todas las reinas
        solucion = true;
      }
    }
  } while (!solucion && k < N);

  return solucion;
}

void main() {

  bool solucion;

  solucion = ponerReina(0, solucion);

  if (solucion) {
    print("Existe combinación de reinas!!!");
    mostrarTablero();
  } else {
    print("NO existe combinación de reinas!!!");
  }

}