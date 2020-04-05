// Herencia múltiple

#include <iostream>
#include <stdlib.h>
#include "HidroAvion.h"

using namespace std;

int main() {

    HidroAvion* obj1 = new HidroAvion("Veloz12", "HA99", "123OP");

    obj1->mostrarDatos();

    cout << endl;

    obj1->indicarBarco();
    obj1->indicarAvion();

    delete obj1;

    system("pause");
    return 0;
}