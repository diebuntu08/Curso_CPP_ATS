
void mezcla(List<int> a, int izquierda, int medio, int derecha) {
  List<int> aux = new List<int>(derecha+1);
  int i, k, z;
  i = z = izquierda;
  k = medio + 1;

  // Ordenamos los elementos en el arrgelo aux
  while (i <= medio && k <= derecha) {
    if (a[i] < a[k]) {
      aux[z++] = a[i++];
    } else {
      aux[z++] = a[k++];
    }
  }

  // Copiamos los elementos de la lista que no quedó vacía
  while (i <= medio) {
    aux[z++] = a[i++];
  }

  while (k <= derecha) {
    aux[z++] = a[k++];
  }

  // Copiamos los elementos del arreglo aux[] hacia a[]
  for (int j = izquierda; j <= derecha; j++) {
    a[j] = aux[j];
  }
}

void mergeSort(List<int> a, primero, ultimo) {
  int central;

  if (primero < ultimo) {
    central = ((primero + ultimo) / 2).floor();
    mergeSort(a, primero, central);
    mergeSort(a, central+1, ultimo);
    mezcla(a, primero, central, ultimo);
  }
}

void main() {

  List<int> arreglo = [5,7,87,1,3,9];

  mergeSort(arreglo, 0, 5);

  print("Arreglo ordenado: $arreglo");
}