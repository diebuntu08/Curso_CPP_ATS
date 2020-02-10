
import 'dart:io';

String palabraUsuario;

void pedirCadena() {

  stdout.write('Digite una palabra o frase: ');
  palabraUsuario = stdin.readLineSync().toUpperCase();

}

void contarVocal(String palabra, String vocal) {

  int cont = 0;

  for (int i = 0; i < palabra.length; i++) {
    if (palabra[i] == vocal) {
      cont++;
    }
  }

  stdout.writeln('Número de veces que aparece la vocal $vocal: $cont');
}

void main() {

  pedirCadena();

  print('');
  contarVocal(palabraUsuario, 'A');
  contarVocal(palabraUsuario, 'E');
  contarVocal(palabraUsuario, 'I');
  contarVocal(palabraUsuario, 'O');
  contarVocal(palabraUsuario, 'U');
  
}