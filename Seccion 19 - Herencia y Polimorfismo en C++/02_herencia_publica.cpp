
#include <iostream>
#include <stdlib.h>
#include "Turismo.h"

using namespace std;

int main() {

    Turismo* t1 = new Turismo("Toyota", "Plomo", "Echo", 4);

    cout << "Color del coche: " << t1->getColor() << endl;
    t1->establecerColor("negro");
    cout << "Color del coche: " << t1->getColor() << endl;

    cout << "Modelo: " << t1->retornarModelo() << endl;

    system("pause");
    return 0;
}