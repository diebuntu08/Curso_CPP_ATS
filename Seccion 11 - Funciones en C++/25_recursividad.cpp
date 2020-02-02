/*
* Recursividad.
* Factorial de un número 3! = 3 * 2 * 1
* 
* factorial(n) = 1                    , si n = 0
*                n * factorial(n - 1) , si n > 0
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int factorial(int);

int main() {

    cout << "Factorial: " << factorial(5) << endl;

    system("pause");
    return 0;
}

int factorial(int n) {
    if (n == 0) { // Caso base
        return 1;
    } else { // Caso general
        return n * factorial(n - 1);
    }
}