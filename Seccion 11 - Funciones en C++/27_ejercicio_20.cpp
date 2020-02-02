/*
* 20. Realice una función recursiva para la serie Fibonacci.
* Nota: La serie Fibonacci está formada por la secuencia de números:
* 0,1,1,2,3,5,8,13,21,34,...
* 
* fibonacci(n) = n                                   , si n < 2
*                fibonacci(n - 1) + fibonacci(n - 2) , si n >= 2
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int fibonacci(int);

int main() {

    int nElementos;

    do {
        cout << "Digite el número de elementoss: ";
        cin >> nElementos;

        if (nElementos <= 0) {
            cout << "El número de elementos debe ser un entero positivo, no cero!!" << endl;
        }
    } while (nElementos <= 0);

    cout << "\nSerie Fibonacci para n = " << nElementos << endl;
    for (int i = 0; i < nElementos; i++) {
        cout << fibonacci(i) << ", ";
    }

    cout << "\n";

    system("pause");
    return 0;
}

int fibonacci(int n) {
    if (n < 2) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}