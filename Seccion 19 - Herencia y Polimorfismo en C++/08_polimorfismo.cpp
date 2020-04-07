// Polimorfismo en C++

#include <iostream>
#include <stdlib.h>
#include "Poligono.h"
#include "Rectangulo.h"
#include "Triangulo_.h"

using namespace std;

int main() {

    Poligono* poligonos[2];

    poligonos[0] = new Rectangulo(7, 4);
    poligonos[1] = new Triangulo(3, 4, 4);

    for (int i = 0; i < 2; i++) {
        cout << "Área: " << poligonos[i]->area() << endl;
        cout << "Perímetro: " << poligonos[i]->perimetro() << endl << endl;
    }

    system("pause");
    return 0;
}