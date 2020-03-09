
import 'dart:io';

void escribirFrase() {
  String nombreArchivo, frase, rpt;

  stdout.write("\nDigite el nombre del archivo: ");
  nombreArchivo = stdin.readLineSync();

  final File file = new File(nombreArchivo);
  var sink = file.openWrite();

  do {
    stdout.write("\nDigite una frase: ");
    frase = stdin.readLineSync();

    sink.write(frase + "\n");

    stdout.write("\nDesea agregar otra frase? (s/n): ");
    rpt = stdin.readLineSync();

  } while ((rpt == 'S') || (rpt == 's'));

  sink.close();

}

void main() {

  escribirFrase();

}