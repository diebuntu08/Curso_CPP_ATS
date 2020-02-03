
import 'dart:io';

int escribeNumeros(int ini, int fin) {
  if (ini == fin) {
    return ini;
  } else {
    return escribeNumeros(ini, fin - 1);
  }
}

void main() {

  int ini, fin;

  stdout.writeln('Digite un inicio: ');
  ini = int.parse(stdin.readLineSync());
  stdout.writeln('Digite un final: ');
  fin = int.parse(stdin.readLineSync());

  for (int i = ini; i <= fin; i++) {
    stdout.write('${escribeNumeros(i, fin)}, ');
  }

  print('');
}