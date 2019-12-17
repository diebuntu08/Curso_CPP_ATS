/*
 * 12. Escriba un programa que calcule el valor de: 1 - 2 + 3 - 4 + ... n.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int suma = 0, n;
    
    cout << "Digite el valor de n: ";
    cin >> n;
    
    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            suma -= i;
        } else {
            suma += i;
        }
    }
    
    cout << "La suma total es: " << suma << endl;
    
    system("pause");
    
    return 0;
}
