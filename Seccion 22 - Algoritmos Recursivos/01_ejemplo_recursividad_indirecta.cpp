/*
    Hacer un programa que muestre el alfabeto, caracter a caracter, utilizando
    recursividad mutua o indicrecta.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

// Prototipos de funciones
void funcionA(char);
void funcionB(char);

int main() {

    cout << "Alfabeto: ";
    funcionA('Z');
    cout << endl;

    system("pause");
    return 0;
}

void funcionA(char letra) {
    if (letra > 'A') {
        funcionB(letra);
    }

    cout << letra << " ";
}

void funcionB(char letra) {
    funcionA(--letra);
}