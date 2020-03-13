
import 'dart:io';

void lectura() async {

  String nombreArchivo, texto;

  stdout.write("\nDigite el nombre o la ubicación del archivo: ");
  nombreArchivo = stdin.readLineSync();

  final File file = new File(nombreArchivo);
  texto = await file.readAsString();

  print(texto);
}

void main() {
  
  lectura();
  
}