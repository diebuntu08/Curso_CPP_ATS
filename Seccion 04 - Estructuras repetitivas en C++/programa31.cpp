/*
 * 7. Escriba un programa que calcule el valor de: 1 + 2 + 3 + ... + n.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int n, resultado=0;
    
    cout << "Digite el valor de n: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        resultado += i;
    }
    
    cout << "El resultado de la suma 1 + ... + n es: " << resultado << endl;
    system("pause");
    
    return 0;
}
