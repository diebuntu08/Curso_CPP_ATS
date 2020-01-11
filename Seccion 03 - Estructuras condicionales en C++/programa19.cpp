
#include <iostream>

using namespace std;

int main() {

    int edad;
    
    cout << "Digite una edad: ";
    cin >> edad;
    
    if ((edad >= 18) && (edad <= 25)) {
        cout << "\nLa edad está entre 18 y 25 años.";
    } else {
        cout << "\nLa edad no está en el rango especificado.";
    }
    
    return 0;
}
