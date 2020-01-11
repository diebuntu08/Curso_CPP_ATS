// Búsqueda secuencial

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int a[] = {3, 4, 2, 1, 5};
    int i, dato;
    char flag = 'F';

    dato = 1;
    // Búsqueda secuencial
    i = 0;
    while ((flag == 'F' ) && (i < 5)) {
        if (a[i] == dato) {
            flag = 'V';
        }

        i++;
    }

    if ( flag == 'F') {
        cout << "El número a buscar no existe en el arreglo." << endl;
    } else {
        cout << "El número ha sido encontrado en la posición: " << i - 1 << endl;
    }
    system("pause");
    return 0;
}