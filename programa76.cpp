/* Ordenamiento por selección Shell
*/ 

#include <iostream>
#include <stdlib.h>

using namespace std;

void intercambio(float &x, float &y) {
    float aux;

    aux = x;
    x = y;
    y = aux;
}

void ordenacion_Shell(float a[], int n) {
    int salto, i, j, k;
    salto = n / 2;

    while (salto > 0) {
        for (i = salto; i < n; i++) {
            j = i - salto;
            while ( j >= 0) {
                k = j + salto;
                if (a[j] <= a[k]) { // Par de elementos están ordenados
                    j = -1;
                } else { // Par de elementos están desordenados
                    intercambio(a[j], a[k]);
                    j -= salto;
                }
            }
        }
        salto = salto / 2;
    }
}

int main() {

    float arreglo[] = {4, 6, 1, 9, 5, 10, 2, 11, 19, 7, 8, 15, 21, 3, 16, 12};

    ordenacion_Shell(arreglo, 16);

    cout << "Arreglo ordenado en forma ascendente: " << endl;

    for (int i = 0; i < 16; i++) {
        cout << arreglo[i] << " | ";
    }

    cout << "\nArreglo ordenado en forma descendente: " << endl;

    for (int i = 15; i >= 0; i--) {
        cout << arreglo[i] << " | ";
    }

    cout << "\n";
    
    system("pause");
    return 0;
}
