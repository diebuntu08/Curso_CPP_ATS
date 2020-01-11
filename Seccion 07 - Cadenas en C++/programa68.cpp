/* Cadenas de caracteres
 * 6. Convertir dos cadenas de minúsculas a MAYÚSCULAS. Compararlas y
 * decir si son iguales.
*/ 

#include <iostream>
#include <stdlib.h>
#include <boost/algorithm/string.hpp>
#include <string.h>

using namespace std;

string convertToString(char* a, int size) {
    string s(a);
    return s;
}

int main() {

    char palabra[20], palabra2[20];

    cout << "Digite una palabra: ";
    cin.getline(palabra, 20, '\n');

    cout << "Digite otra palabra: ";
    cin.getline(palabra2, 20, '\n');

    string palabra_s = convertToString(palabra, 20);
    string palabra_s2 = convertToString(palabra2, 20);

    // Pasando a mayúsculas ambas cadenas
    boost::to_upper(palabra_s);
    boost::to_upper(palabra_s2);

    if (palabra_s.compare(palabra_s2) == 0) {
        cout << "Ambas palabras son iguales." << endl;
    } else {
        cout << "LAs palabras son distintas." << endl;
    }



    system("pause");
    return 0;
}
