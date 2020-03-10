
import 'dart:io';

void lectura() async {

  String contenido;

  final File file = new File("programacion.txt");
  contenido = await file.readAsString();

  print(contenido);

}

void main() {

  lectura();
  
}