
import 'dart:io';

void escribir() {

  String frase, nombreArchivo;

  stdout.write("\nDigite el nombre del archivo: ");
  nombreArchivo = stdin.readLineSync();
  stdout.write("\nDigite el texto a escribir en el archivo: ");
  frase = stdin.readLineSync();

  final file = new File(nombreArchivo);
  file.writeAsString(frase);
}

void main() {

  escribir();
  
}