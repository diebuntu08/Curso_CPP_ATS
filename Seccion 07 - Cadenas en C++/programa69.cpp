/* 7. Pedir su nombre al usuario en MAYÚSCULAS, si su nombre comienza por la letra
 * A convertir su nombre a minúsculas, caso contrario no convertirlo.
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

    char nombre[20];

    cout << "Digite su nombre en mayúsculas: ";
    cin.getline(nombre, 20, '\n');

    string nombre_s = convertToString(nombre, 20);
    char letra = nombre_s[0];

    if (letra == 'A') {
        boost::to_lower(nombre_s);
        cout << nombre_s << endl;
    } else {
        cout << "El nombre no comienza con la letra A" << endl;
    }



    system("pause");
    return 0;
}
