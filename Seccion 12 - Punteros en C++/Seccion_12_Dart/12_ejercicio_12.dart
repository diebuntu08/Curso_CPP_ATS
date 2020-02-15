
import 'dart:io';

class Etapa {
  int horas, min, seg;

  Etapa(this.horas, this.min, this.seg);
}

List<Etapa> etapas = new List<Etapa>(3);

void pedirDatos() {
  int horas, minutos, segundos;

  print('Digite los tiempos empleados: ');
  for (int i = 0; i < 3; i++) {
    stdout.write('Horas: ');
    horas = int.parse(stdin.readLineSync());
    stdout.write('Minutos: ');
    minutos = int.parse(stdin.readLineSync());
    stdout.write('Segundos: ');
    segundos = int.parse(stdin.readLineSync());

    Etapa etapa = new Etapa(horas, minutos, segundos);
    etapas[i] = etapa;
    print('');
  }
}

void calcularTiempo(List<Etapa> etapas) {
  int horasT = 0, minT = 0, segT = 0;

  for (Etapa etapa in etapas) {
      horasT += etapa.horas;
      minT += etapa.min;
      if (minT >= 60) {
        minT -= 60;
        horasT++;
      }
      segT += etapa.seg;
      if (segT >= 60) {
        segT -= 60;
        minT++;
      }
  }

  print('\nMostrando el tiempo total:');
  print('Horas totales: $horasT');
  print('Minutos totales: $minT');
  print('Segundos totales: $segT');
}

void main() {

  pedirDatos();

  calcularTiempo(etapas);
  
}