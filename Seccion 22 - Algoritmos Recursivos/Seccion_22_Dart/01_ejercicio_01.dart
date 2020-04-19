
import 'dart:io';

void funcionA(int numero) {
  if (numero > 0) {
    funcionB(numero);
  }

  stdout.write("$numero ");
}

void funcionB(int numero) {
  funcionA(--numero);
}

void main() {

  stdout.write("Números: ");
  funcionA(100);
  print("");
}