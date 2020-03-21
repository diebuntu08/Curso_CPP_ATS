// Creación de una clase

#include <iostream>
#include <stdlib.h>
#include "Punto.h"

using namespace std;

int main() {

    Punto p1(2, 1); // Creación de un objeto estático

    cout << "El valor de x es: " << p1.getX() << endl;
    cout << "El valor de y es: " << p1.getY() << endl;

    Punto* p2 = new Punto();

    cout << "El valor de x es: " << p2->getX() << endl;
    cout << "El valor de y es: " << p2->getY() << endl;

    p2->setX(5);
    p2->setY(8);

    cout << "El valor de x es: " << p2->getX() << endl;
    cout << "El valor de y es: " << p2->getY() << endl;

    system("pause");
    return 0;
}