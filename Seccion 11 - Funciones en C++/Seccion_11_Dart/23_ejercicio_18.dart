
import 'dart:io';

class Fecha {
  int dia, mes, anio;

  Fecha();
}

Fecha f1 = new Fecha();
Fecha f2 = new Fecha();

void pedirDatos(Fecha f1, Fecha f2) {
  print('Digite la primera fecha: ');
  stdout.writeln('Digite el día: ');
  f1.dia = int.parse(stdin.readLineSync());
  stdout.writeln('Digite el mes: ');
  f1.mes = int.parse(stdin.readLineSync());
  stdout.writeln('Digite el año: ');
  f1.anio = int.parse(stdin.readLineSync());

  print('Digite la segunda fecha: ');
  stdout.writeln('Digite el día: ');
  f2.dia = int.parse(stdin.readLineSync());
  stdout.writeln('Digite el mes: ');
  f2.mes = int.parse(stdin.readLineSync());
  stdout.writeln('Digite el año: ');
  f2.anio = int.parse(stdin.readLineSync());
}

Fecha mayor(Fecha f1, Fecha f2) {
  Fecha mayorFecha = new Fecha();

  if ((f1.anio >= f2.anio) && (f1.mes >= f2.mes) && (f1.dia >= f2.dia)) {
    mayorFecha = f1;
  } else {
    mayorFecha = f2;
  }

  return mayorFecha;
}

void muestra(Fecha x) {
  print('\nLa fecha más reciente es: ${x.dia}/${x.mes}/${x.anio}');
}

void main() {

  pedirDatos(f1, f2);

  Fecha mayorFecha = mayor(f1, f2);

  muestra(mayorFecha);
  
}