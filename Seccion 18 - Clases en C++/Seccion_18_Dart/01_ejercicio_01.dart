
import 'dart:io';

class DiaAnio {

  int _dia, _mes;

  DiaAnio(this._dia, this._mes);

  bool igual(DiaAnio d) {
    if (_dia == d._dia && _mes == d._mes){
      return true;
    } else {
      return false;
    }
  }

  void visualizar() {
    print("\nMostrando los datos:");
    print("Mes: $_mes\nDía: $_dia");
  }
}

void main() {

  DiaAnio hoy, cumple;
  int dia, mes;

  stdout.write("Introduzca la fecha actual, día: ");
  dia = int.parse(stdin.readLineSync());
  stdout.write("Mes: ");
  mes = int.parse(stdin.readLineSync());

  hoy = new DiaAnio(dia, mes);

  stdout.write("Introduzca la fecha de su cumpleaños, día: ");
  dia = int.parse(stdin.readLineSync());
  stdout.write("Mes: ");
  mes = int.parse(stdin.readLineSync());

  cumple = new DiaAnio(dia, mes);

  // Mostrando las fechas
  hoy.visualizar();
  print("");
  cumple.visualizar();

  if (hoy.igual(cumple)) {
    print("\nFeliz cumpleaños!!");
  } else {
    print("\nQue tenga un buen día!!");
  }
}