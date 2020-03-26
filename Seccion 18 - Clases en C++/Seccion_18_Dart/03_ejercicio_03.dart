
import 'dart:io';

class Tablero {

  int x, y;

  Tablero(this.x, this.y);

  void moverArriba(int n) {
    y += n;
  }

  void moverAbajo(int n) {
    y -= n;
  }

  void moverDerecha(int n) {
    x += n;
  }

  void moverIzquierda(int n) {
    x -= n;
  }

  int getX() {
    return x;
  }

  int getY() {
    return y;
  }
}

void main() {

  Tablero obj1;
  int opcion, n, x, y;

  print("Digite la posición inicial del objeto: ");
  stdout.write("Posición X: ");
  x = int.parse(stdin.readLineSync());
  stdout.write("Posición Y: ");
  y = int.parse(stdin.readLineSync());

  obj1 = new Tablero(x, y);

  do {
    print("\n\t.:MENU:.");
    print("1. Mover Arriba.");
    print("2. Mover Abajo.");
    print("3. Mover Derecha.");
    print("4. Mover Izquierda.");
    print("5. Salir.");
    stdout.write(("Opción: "));
    opcion = int.parse(stdin.readLineSync());

    if (opcion > 0 && opcion <= 4) {
      stdout.write("Digite las posiciones para mover: ");
      n = int.parse(stdin.readLineSync());
    }

    switch (opcion) {
      case 1:
        obj1.moverArriba(n);
        break;
      
      case 2:
        obj1.moverAbajo(n);
        break;
      
      case 3:
        obj1.moverDerecha(n);
        break;
      
      case 4:
        obj1.moverIzquierda(n);
        break;
      
      case 5:
        break;
      
      default:
        print("Opción inválida.");
        break;
    }

    print("Posición actual del objeto -> (X, Y) : (${obj1.getX()}, ${obj1.getY()})");
  } while (opcion != 5);
}