
dynamic maximo(dynamic dato1, dynamic dato2, dynamic dato3) {
  dynamic max;

  if ((dato1 >= dato2) && (dato1 >= dato3)) {
    max =dato1;
  } else {
    if ((dato2 >= dato1) && (dato2 >= dato3)) {
      max = dato2;
    } else {
      max = dato3;
    }
  }

  return max;
}

void main() {

  int dato1 = 4, dato2 = 6, dato3 = 8;

  print('El valor máximo es: ${maximo(dato1, dato2, dato3)}');
}