
import 'dart:io';

class Fecha {
  int anio, mes, dia;

  Fecha();
}

void calc_anios(int totalDias, Fecha fecha) {
  fecha.anio = (totalDias / 365).floor();
  totalDias %= 365;
  fecha.mes = (totalDias / 30).floor();
  fecha.dia = totalDias % 30;
}

void main() {

  int totalDias;

  stdout.writeln('Digite el número total de días: ');
  totalDias = int.parse(stdin.readLineSync());

  Fecha fecha = new Fecha();

  calc_anios(totalDias, fecha);

  print('Fecha actual: ${fecha.dia + 1}/${fecha.mes + 1}/${fecha.anio + 2000}');


}