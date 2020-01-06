/* Transformar una cadena de caracteres a números - Función atoi() y atof()
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

    char cad[] = "123.456";
    float numero;

    numero = atof(cad);

    cout << numero << endl;

    system("pause");
    return 0;
}
