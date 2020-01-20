// Ejemplo: encontrar el mayor de dos numeros

#include <iostream>
#include <stdlib.h>

using namespace std;

// Prototipo de función
int encontrarMax(int x, int y);

int main() {

    int n1, n2;
    int mayor;

    cout << "Digite dos números: ";
    cin >> n1 >> n2;

    mayor = encontrarMax(n1, n2);

    cout << "El mayor de los dos números es: " << mayor << endl;

    system("pause");
    return 0;
}

// Definición de la función
int encontrarMax(int x, int y) {
    int numMax;

    if (x > y) {
        numMax = x;
    } else {
        numMax = y;
    }

    return numMax;
}