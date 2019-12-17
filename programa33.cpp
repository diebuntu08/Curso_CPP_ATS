/*
 * 10. Escriba un programa que calcule el valor de: 1! * 2! * 3! * ... n!.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int n, factorial=1, suma=0;
    
    cout << "Digite el número de elementos a sumar: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        factorial *= i;
        suma += factorial;
    }
    
    cout << "\nLa suma de factoriales es: " << suma << endl;
    
    system("pause");
    
    return 0;
}
