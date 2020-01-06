/* Método de ordenamiento por inserción
*/ 

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {

    int numeros[] = {4, 2, 3, 5, 1};
    int i, pos, aux;

    // Algoritmo de ordenamiento por inserción
    for (i = 0; i < 5; i++) {
        pos = i;
        aux = numeros[i];

        while ((pos > 0) && (numeros[pos - 1] > aux)) {
            numeros[pos] = numeros[pos - 1];
            pos--;
        }

        numeros[pos] = aux;
    }

    cout << "Orden ascendente: ";
    
    for (i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }

    cout << "\n";

    
    system("pause");
    return 0;
}
