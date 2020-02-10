/*
    08. Pedir una cadena de caracteres (string) al usuario, e indicar cuántas
    veces aparece cada vocal en la cadena.
    NOTA: Usar punteros.
*/

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <boost/algorithm/string.hpp>

using namespace std;

char palabraUsuario[50];
string palabra;

void pedirCadena();
void contarVocal(char *, char);

int main() {

    pedirCadena();

    cout << "\n";
    contarVocal(palabraUsuario, 'A');
    contarVocal(palabraUsuario, 'E');
    contarVocal(palabraUsuario, 'I');
    contarVocal(palabraUsuario, 'O');
    contarVocal(palabraUsuario, 'U');

    system("pause");
    return 0;
}

string convertirAString(char* a, int size) {
    string s(a);
    return s;
}

void pedirCadena() {
    cout << "Digite una palabra o frase: ";
    cin.getline(palabraUsuario, 50, '\n');

    palabra = convertirAString(palabraUsuario, 50);

    boost::to_upper(palabra);

    strcpy(palabraUsuario, palabra.c_str());

}

void contarVocal(char *palabra, char vocal) {
    int cont = 0;

    while (*palabra) { // mientras palabra no sea nulo '\0'
        if (*palabra == vocal) {
            cont++;
        }

        palabra++;
    }

    cout << "Número de veces que aparece la vocal " << vocal << ": " << cont << endl; 
}