
#include <iostream>
#include <stdlib.h>
#include "ClaseDerivada.h"

using namespace std;

int main() {

    ClaseDerivada* obj1 = new ClaseDerivada(5, 10);

    cout << endl;

    delete obj1;

    system("pause");
    return 0;
}