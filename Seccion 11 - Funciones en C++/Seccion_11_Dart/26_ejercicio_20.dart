
import 'dart:io';

int fibonacci(int n) {
  if (n < 2) {
    return n;
  } else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

void main() {

  int nElementos;

  do {
    stdout.writeln('Digite el número de elementos: ');
    nElementos = int.parse(stdin.readLineSync());

    if (nElementos <= 0) {
      print('El número de elementos debe ser un entero positivo,no cero!!');
    }
  } while (nElementos <= 0);

  print('\nSerie Fibonacci para n = $nElementos');
  for (int i = 0; i < nElementos; i++) {
    stdout.write('${fibonacci(i)}, ');
  }

  print('');
  

}