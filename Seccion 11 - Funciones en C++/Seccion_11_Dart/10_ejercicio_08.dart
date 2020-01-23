

import 'dart:io';

class Cambio {
  int cien = 0, cincuenta = 0, veinte = 0, diez = 0, cinco = 0, uno = 0;

  Cambio();
}

void cambio(int valor, Cambio exchange) {
  exchange.cien = (valor / 100).floor();
  valor %= 100;
  exchange.cincuenta = (valor / 50).floor();
  valor %= 50;
  exchange.veinte = (valor / 20).floor();
  valor %= 20;
  exchange.diez = (valor / 10).floor();
  valor %= 10;
  exchange.cinco = (valor / 5).floor();
  exchange.uno = valor % 5;
}

void main() {

  stdout.writeln('Digite la cantidad en dólares: ');
  int valor = int.parse(stdin.readLineSync());

  Cambio exchange = new Cambio();

  cambio(valor, exchange);

  print('Cantidad de billetes a entregar como cambio: ');
  print('Cien: ${exchange.cien}');
  print('Cincuenta: ${exchange.cincuenta}');
  print('Veinte: ${exchange.veinte}');
  print('Diez: ${exchange.diez}');
  print('Cinco: ${exchange.cinco}');
  print('Uno: ${exchange.uno}');

}