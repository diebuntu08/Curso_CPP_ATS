// Cadenas de caracteres

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {

    char palabra[] = "hola como estas?";
    int longitud = 0;

    longitud = strlen(palabra);

    cout << "Número de elementos de la cadena es: " << longitud << endl;

    system("pause");
    return 0;
}
