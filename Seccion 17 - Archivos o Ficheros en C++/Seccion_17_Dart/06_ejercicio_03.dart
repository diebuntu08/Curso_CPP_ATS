
import 'dart:io';

void agregar() {
  String nombreArchivo, texto, rpt;

  stdout.write("\nDigite el nombre o la ubicación del archivo: ");
  nombreArchivo = stdin.readLineSync();

  final File archivo = new File(nombreArchivo);
  var sink = archivo.openWrite(mode: FileMode.append);

  do {
    stdout.write("\nDigite la frase que desea añadir al archivo: ");
    texto = stdin.readLineSync();

    sink.write(texto + '\n');

    stdout.write("\nDesea añadir otra frase? (s/n): ");
    rpt = stdin.readLineSync();
  } while ((rpt == 'S') || (rpt == 's'));

  sink.close();
}

void main() {

  agregar();

}