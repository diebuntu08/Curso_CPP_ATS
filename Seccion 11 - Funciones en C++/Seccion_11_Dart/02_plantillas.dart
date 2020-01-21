
void mostrar_ABS(dynamic numero) {
  if (numero < 0) {
    numero = numero * -1;
  }

  print('El valor absoluto del número es: $numero');
}

void main() {

  int num1 = -4;
  double num2 = -56.25;

  mostrar_ABS(num1);
  mostrar_ABS(num2);

}