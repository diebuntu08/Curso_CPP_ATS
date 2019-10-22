// Intercambio entre los valores de dos variables

#include <iostream>

using namespace std;

int main() {

    int x, y, aux;
    
    cout << "Digite el valor de x: "; cin >> x;
    cout << "Digite el valor de y: "; cin >> y;
    
    /*
    x = 10
    y = 5
    */
    
    aux = x;
    x = y;
    y = aux;
    
    cout << "Las variables cambiaron sus valores\nx = " << x << "\ny = " << y << endl;
    
    
    return 0;
}
