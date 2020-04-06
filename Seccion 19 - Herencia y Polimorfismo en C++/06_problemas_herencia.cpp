// Problemas con la herencia múltiple

#include <iostream>
#include <stdlib.h>
#include "ClaseDerivada1.h"

using namespace std;

int main() {

    ClaseDerivada1* obj1 = new ClaseDerivada1(5, 10, 15);

    cout << "x: " << obj1->getX() << endl;

    system("pause");
    return 0;
}