/* Ordenamiento por selección
*/ 

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {

    int numeros[] = {3, 2, 1, 5, 4};
    int i, j, aux, min;

    for (i = 0; i < 5; i++) {
        min = i;

        for (j = i + 1; j < 5; j++) {
            if (numeros[j] < numeros[min]) {
                min = j;
            }
        }

        aux = numeros[i];
        numeros[i] = numeros[min];
        numeros[min] = aux;
    }

    cout << "Orden ascendente: ";
    
    for (i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }

    cout << '\n';
    
    system("pause");
    return 0;
}
