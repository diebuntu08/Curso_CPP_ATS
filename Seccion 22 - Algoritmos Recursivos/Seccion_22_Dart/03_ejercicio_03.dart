
void hanoi(String varInicial, String varCentral, String varFinal, int n) {
  if (n == 1) {
    print("Mover el disco $n de la varilla $varInicial a la varilla $varFinal");
  } else {
    hanoi(varInicial, varFinal, varCentral, n-1);
    print("Mover el disco $n de la varilla $varInicial a la varilla $varFinal");
    hanoi(varCentral, varInicial, varFinal, n-1);
  }
}

void main() {

  hanoi("A", "B", "C", 3);
  
}