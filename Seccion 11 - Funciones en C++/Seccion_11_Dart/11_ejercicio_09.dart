
import 'dart:io';

class Tiempo {
  int horas, min, seg;

  Tiempo();
}

void tiempo(int totalSeg, Tiempo tiempo_hms) {
  tiempo_hms.horas = (totalSeg / 3600).floor();
  totalSeg %= 3600;
  tiempo_hms.min = (totalSeg / 60).floor();
  tiempo_hms.seg = totalSeg % 60;
}

void main() {

  int totalSeg;

  stdout.writeln('Digite el número total de segundos: ');
  totalSeg = int.parse(stdin.readLineSync());

  Tiempo tiempo_hms = new Tiempo();

  tiempo(totalSeg, tiempo_hms);

  print('El tiempo equivalente a la cantidad $totalSeg de segundos es: ${tiempo_hms.horas}:${tiempo_hms.min}:${tiempo_hms.seg}');
  
}