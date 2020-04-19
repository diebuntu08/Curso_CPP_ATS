// Torres de Hanoi

#include <iostream>

using namespace std;

void hanoi(char varInicial, char varCentral, char varFinal, int n) {
    if (n == 1) { // Caso base
        cout << "Mover disco " << n << " desde la varilla inicial " << varInicial << " a la varilla " << varFinal << endl;
    } else { // Caso recursivo
        hanoi(varInicial, varFinal, varCentral, n-1);
        cout << "Mover disco " << n << " desde la varilla " << varInicial << " a la varilla " << varFinal << endl;
        hanoi(varCentral, varInicial, varFinal, n-1);
    }
}

int main() {

    hanoi('A', 'B', 'C', 3);

    return 0;
}