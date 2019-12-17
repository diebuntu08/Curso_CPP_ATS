// Cadenas de texto

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {

    char palabra[] = "Diego";
    char palabra2[] = {'D', 'i', 'e', 'g', 'o'};

    cout << "palabra: " << palabra << endl;
    cout << "palabra2: " << palabra2 << endl;

    char nombre[20];
    cout << "Digite su nombre: ";
    cin.getline(nombre, 20, '\n');

    cout << nombre << endl;

    system("pause");
    return 0;
}