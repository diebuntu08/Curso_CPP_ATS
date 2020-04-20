
int busquedaBinaria(List arreglo, int dato, int inferior, int superior) {
  int mitad;

  if (inferior > superior) {
    return -1;
  } else {
    mitad = ((inferior + superior) / 2).floor();

    if (dato == arreglo[mitad]) {
      return mitad;
    } else if (dato > arreglo[mitad]) {
      return busquedaBinaria(arreglo, dato, mitad+1, superior);
    } else {
      return busquedaBinaria(arreglo, dato, inferior, mitad-1);
    }
  }
}

void main() {

  List arreglo = [3,4,5,8,9,10];
  int dato = 7;

  int retorno = busquedaBinaria(arreglo, dato, 0, 5);

  if (retorno == -1) {
    print("\nEl dato no ha sido encontrado.");
  } else {
    print("\nEl dato ha sido encontrado en la posición: $retorno");
  }
}