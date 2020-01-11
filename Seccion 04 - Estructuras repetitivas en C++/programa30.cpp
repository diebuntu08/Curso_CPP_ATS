/*
 * 6. Escriba un programa que calcule x^y, donde tanto x como y son
 * enteros positivos, sin utilizar la función pow.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int x, y, resultado=1;
    
    cout << "Digite el valor de x: ";
    cin >> x;
    cout << "\nDigite el valor de y: ";
    cin >> y;
    
    for (int i = 1; i <= y; i++) {
        resultado *= x;
    }
    
    cout << "\nEl resultado de x^y es: " << resultado << endl;
    system("pause");
    
    return 0;
}
