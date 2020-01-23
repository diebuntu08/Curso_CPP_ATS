
class Wrapper {
  var value;

  Wrapper(this.value);
}

void intercambiar(Wrapper num1, Wrapper num2) {
  int aux;

  aux = num1.value;
  num1.value = num2.value;
  num2.value = aux;
}

void main() {

  Wrapper num1 = new Wrapper(10);
  Wrapper num2 = new Wrapper(15);

  print('El valor de num1.value es: ${num1.value}');
  print('El valor de num2.value es: ${num2.value}');

  intercambiar(num1, num2);

  print('\nEl nuevo valor de num1.value es: ${num1.value}');
  print('El nuevo valor de num2.value es: ${num2.value}');
}