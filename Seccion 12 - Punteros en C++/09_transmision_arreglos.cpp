/*
* Transmisión de arreglos
*
* Ejemplo: Hallar el máximo elemento de un arreglo.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int hallarMax(int *, int);

int main() {

    const int nElementos = 5;
    int numeros[nElementos] = {3,5,2,8,1};

    cout << "El mayor elemento es: " << hallarMax(numeros, nElementos) << endl;

    system("pause");
    return 0;
}

int hallarMax(int *dirVec, int nElementos) {
    int max = 0;

    for (int i = 0; i < nElementos; i++) {
        if (*(dirVec + i) > max) {
            max = *(dirVec + i);
        }
    }

    return max;
}