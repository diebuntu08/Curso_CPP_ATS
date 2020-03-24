// Miembros static en C++

#include <iostream>
#include <stdlib.h>
#include "Estatico.h"

using namespace std;

int main() {

    Estatico* obj1 = new Estatico();
    Estatico* obj2 = new Estatico();
    Estatico* obj3 = new Estatico();

    cout << "Objeto número: " << obj1->getContador() << endl;

    cout << "La suma es: " << Estatico::sumar(4, 5) << endl;

    system("pause");
    return 0;
}