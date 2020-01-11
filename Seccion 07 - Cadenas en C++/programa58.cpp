/* Cadenas de caracteres
 * 1. Hacer un programa que pida al usuario que digite una cadena de caracteres,
 * luego verificar la longitud de la cadena y si ésta supera los 10 caracteres
 * mostrarla en pantalla, en caso contrario no mostrarla.
*/ 

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {

    char frase[50];
    
    cout << "Digite una frase: ";
    cin.getline(frase, 50, '\n');
    
    if (strlen(frase) > 10) {
        cout << frase << endl;
    } else {
        cout << "La cadena no supera los 10 caracteres!" << endl;
    }

    system("pause");
    return 0;
}
