
#include <iostream>

using namespace std;

int main() {

    int numero;
    
    cout << "Digite un número: ";
    cin >> numero;
    
    if (numero == 0) {
        cout << "\nEl número es cero." << endl;
    } else if (numero > 0) {
        cout << "\nEl número es positivo." << endl;
    } else {
        cout << "\nEl número es negativo." << endl;
    }
    
    return 0;
}
