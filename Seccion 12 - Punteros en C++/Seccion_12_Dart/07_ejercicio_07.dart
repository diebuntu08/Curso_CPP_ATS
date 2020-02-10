
import 'dart:io';

String nombreUsuario;

void pedirNombre() {

  stdout.write('Digite su nombre: ');
  nombreUsuario = stdin.readLineSync().toUpperCase();

}

int contarVocales(String nombre) {
  print(nombre);
  int cont = 0, i = 0;

  while (i < nombre.length) {
    switch (nombre[i]) {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        cont++;
    }

    i++;
  }

  return cont;
}

void main() {

  pedirNombre();

  print('\nEl número de vocales en el nombre es: ${contarVocales(nombreUsuario)}');

}