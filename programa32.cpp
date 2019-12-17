/*
 * 8. Escriba un programa que calcule el valor de: 1 + 3 + 5 + ... + 2n-1.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int n, resultado=0;
    
    cout << "Digite el valor de n: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        resultado += 2 * i - 1;
        cout << 2 * i - 1 << endl;
    }
    
    cout << "El resultado de la suma 1 + ... + 2n-1 es: " << resultado << endl;
    system("pause");
    
    return 0;
}
