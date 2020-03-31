// Herencia en C++

#include <iostream>
#include <stdlib.h>
#include "Triangulo.h"

using namespace std;

int main() {

    Triangulo* t1 = new Triangulo(3, 5, 6, 7);
    cout << "Número de lados del triángulo: " << t1->getNLados() << endl;
    cout << "Área: " << t1->areaTriangulo() << endl;

    system("pause");
    return 0;
}