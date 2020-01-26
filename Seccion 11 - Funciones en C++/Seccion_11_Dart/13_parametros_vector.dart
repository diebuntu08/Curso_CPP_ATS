
void cuadrado(List<int> vector, int tam) {
  for (int i = 0; i < tam; i++) {
    vector[i] = vector[i] * vector[i];
  }
}

void muestra(List<int> vector, int tam) {
  for (int i = 0; i < tam; i++) {
    print(vector[i]);
  }
}

void main() {

  const int TAM = 5;
  List<int> vector = [1, 2, 3, 4, 5];

  cuadrado(vector, TAM);
  muestra(vector, TAM);
}