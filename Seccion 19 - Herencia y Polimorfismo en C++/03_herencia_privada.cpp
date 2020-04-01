
#include <iostream>
#include <stdlib.h>
#include "Turismo.h"
#include "Deportivo.h"

using namespace std;

int main() {

    Turismo* t1 = new Turismo("Toyota", "Plomo", "Echo", 4);

    cout << "Color del coche: " << t1->getColor() << endl;
    t1->establecerColor("negro");
    cout << "Color del coche: " << t1->getColor() << endl;

    cout << "Modelo: " << t1->retornarModelo() << endl;

    Deportivo* d1 = new Deportivo("Audi", "Blanco", "AU1000", 10);

    cout << "Cilindrada: " << d1->getCilindrada() << endl;
    cout << "Marca: " << d1->reportarMarca() << endl;

    delete t1;
    delete d1;

    system("pause");
    return 0;
}