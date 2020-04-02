// Herencia protegida

#include <iostream>
#include <stdlib.h>
#include "Furgoneta.h"

using namespace std;

int main() {

    Furgoneta* f1 = new Furgoneta("Kia", "Verde", "KI1234", 1200);
    cout << "Carga de la furgoneta: " << f1->getCarga() << endl;
    cout << "Color: " << f1->reportarColor() << endl;

    delete f1;

    system("pause");
    return 0;
}