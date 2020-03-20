
import 'dart:io';
import 'dart:convert';

class Registro {

  String nombre;
  String apellidos;

  Registro();

}

void escribir() {

  final File file = new File("prueba.dat");

  Registro persona = new Registro();

  stdout.writeln("\tPidiendo datos");
  stdout.write("Digite su nombre: ");
  persona.nombre = stdin.readLineSync();
  stdout.write("Digite sus apellidos: ");
  persona.apellidos = stdin.readLineSync();

  List<int> bytes = utf8.encode("${persona.nombre} ${persona.apellidos}");

  file.writeAsBytesSync(bytes);
}

void leer() async {

  final File file = new File("prueba.dat");

  Registro persona = new Registro();

  List<int> bytes = await file.readAsBytes();
  String datos = utf8.decode(bytes);

  stdout.writeln("\tMostrando datos.");
  persona.nombre = datos.split(" ")[0];
  persona.apellidos = datos.split(" ")[1];
  print("Nombre: ${persona.nombre}\nApellidos: ${persona.apellidos}");

}
void main() {

  escribir();
  leer();

}