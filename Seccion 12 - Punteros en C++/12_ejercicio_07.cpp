/*
    07. Pedir su nombre al usuario y devolver el número de vocales que hay
    en él.
    NOTA: Recuerda que debes utilizar punteros.
*/

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <boost/algorithm/string.hpp>

using namespace std;

string convertirAString(char*, int);
void pedirNombre();
int contandoVocales(char *);

char nombreUsuario[30];
string nombreUs;

int main() {

    pedirNombre();
    cout << "\nEl número de vocales en el nombre es: " << contandoVocales(nombreUsuario) << endl;

    system("pause");
    return 0;
}

string convertirAString(char* a, int size) {
    string s(a);
    return s;
}

void pedirNombre() {
    cout << "Digite su nombre: ";
    cin.getline(nombreUsuario, 30, '\n');

    nombreUs = convertirAString(nombreUsuario, 30);

    boost::to_upper(nombreUs); // Transformando a mayúscula el nombre

    strcpy(nombreUsuario, nombreUs.c_str());
}

int contandoVocales(char *nombre) {
    int cont = 0;

    while (*nombre) { // mientras nombre no sea nulo '\0'
        switch (*nombre) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                cont++;
        }

        nombre++;
    }

    return cont;
}