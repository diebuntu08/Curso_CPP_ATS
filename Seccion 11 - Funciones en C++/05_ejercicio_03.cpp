/*
* 3. Escriba una función de nombre funpot() que eleve un número entero a la potencia (número entero
* que se le transmita y que despliegue el resultado. El número entero positivo deberá ser el segundo
* valor pasado a la función.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

// Prototipo de función
void pedirDatos();
void funpot(int x, int y);

// Variables globales
int numero, exponente;

int main() {

    pedirDatos();
    funpot(numero, exponente);


    system("pause");
    return 0;
}

void pedirDatos() {
    cout << "Digite el número: ";
    cin >> numero;
    cout << "Digite el exponente: ";
    cin >> exponente;
}

void funpot(int x, int y) {
    long resultado = 1;

    for (int i = 1; i <= y; i++) {
        resultado *= x;
    }

    cout << "El resultado de " << x << " elevado a " << y << " es: " << resultado << endl;
}