// obtener hipotenusa usando los catetos dados por el usuario

#include <iostream>
#include <math.h>

using namespace std;

int main() {

    float cat1, cat2, hipotenusa = 0;
    
    cout << "Digite el primer cateto: "; cin >> cat1;
    cout << "Digite el segundo cateto: "; cin >> cat2;
    
    hipotenusa = sqrt(pow(cat1, 2) + pow(cat2, 2));
    
    cout.precision(2);
    cout << "La hipotenusa es: " << hipotenusa << endl;
    
    
    return 0;
}
