
import 'dart:io';

class Datos {

  String nombre, apellidos, telefono;

  Datos();
}

void menu() {

  int opcion;

  do {
    stdout.writeln("\tMENU");
    stdout.writeln("1. Crear (nombre, apellidos, teléfono)");
    stdout.writeln("2. Agregar más contactos (nombre, apellidos, teléfono)");
    stdout.writeln("3. Visualizar contactos existentes");
    stdout.writeln("4. Salir");
    stdout.write("Opción: ");
    opcion = int.parse(stdin.readLineSync());

    switch (opcion) {
      case 1:
        crearContacto();
        break;
      case 2:
        agregarContacto();
        break;
      case 3:
        visualizarContactos();
        break;

      default:
        break;
    }


  } while (opcion != 4);
}

void crearContacto() {
  
  String rpt;
  Datos datos = new Datos();

  final File file = new File("AgendaTelefonica.txt");
  var sink = file.openWrite();
  sink.write("\tAgenda Telefónica\n\n");

  do {
    stdout.write("Nombre: ");
    datos.nombre = stdin.readLineSync();
    stdout.write("Apellidos: ");
    datos.apellidos = stdin.readLineSync();
    stdout.write("Teléfono: ");
    datos.telefono = stdin.readLineSync();

    sink.write("Nombre: ${datos.nombre}\n");
    sink.write("Apellidos: ${datos.apellidos}\n");
    sink.write("Teléfono: ${datos.telefono}\n\n");

    stdout.write("Desea agregar otro contacto? (s/n): ");
    rpt = stdin.readLineSync();

  } while ((rpt == "s") || (rpt == "S"));

  sink.close();

}

void agregarContacto() {

  String rpt;
  Datos datos = new Datos();

  final File file = new File("AgendaTelefonica.txt");
  var sink = file.openWrite(mode: FileMode.append);

  do {
    stdout.write("Nombre: ");
    datos.nombre = stdin.readLineSync();
    stdout.write("Apellidos: ");
    datos.apellidos = stdin.readLineSync();
    stdout.write("Teléfono: ");
    datos.telefono = stdin.readLineSync();

    sink.write("Nombre: ${datos.nombre}\n");
    sink.write("Apellidos: ${datos.apellidos}\n");
    sink.write("Teléfono: ${datos.telefono}\n\n");

    stdout.write("Desea agregar otro contacto? (s/n): ");
    rpt = stdin.readLineSync();

  } while ((rpt == "s") || (rpt == "S"));

  sink.close();
}

void visualizarContactos() {

  String texto;

  final File file = new File("AgendaTelefonica.txt");
  texto = file.readAsStringSync();

  print(texto);

}

void main() {

  menu();

}