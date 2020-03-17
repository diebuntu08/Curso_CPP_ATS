
import 'dart:io';

void agregar() {

  String texto;

  final File archivo = new File("programacion.txt");

  stdout.write("\nDigite el texto que desea agregar al archivo: ");
  texto = stdin.readLineSync();

  try {
    archivo.writeAsString("\n" + texto, mode: FileMode.append, flush: true);
  } catch (e) {
    print("\nNo se pudo abrir el archivo, error: $e");
    exit(1);
  }
}

void main() {

  agregar();

}