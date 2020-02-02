/*
* 19. Realice una función recursiva que sume los primeros n enteros positivos.
* Nota: para plantear la función recursiva tenga en cuenta que la suma puede
* expresarse mediante la siguiente recurrencia:
*
*         suma(n) = 1               , si n = 1
*                   n + suma(n - 1) , si n > 1
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int suma(int);

int main() {

    int nElementos;

    do {
        cout << "Digite el número de elementos: ";
        cin >> nElementos;
        if (nElementos <= 0) {
            cout << "El número de elementos debe ser un entero positivo, no cero!!" << endl;
        }
    } while (nElementos <= 0);

    cout << "\nLa suma es: " << suma(nElementos) << endl;

    system("pause");
    return 0;
}

int suma(int n) {
    if (n == 1) { // Caso base
        return 1;
    } else { // Caso general
        return n + suma(n - 1);
    }
}