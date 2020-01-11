// Pedir dos numeros enteros al usuario y devolver su suma,
// resta, multiplicación y división

#include <iostream>

using namespace std;

int main() {

    int n1, n2, suma = 0, resta = 0, mult = 0, div = 0;

    cout << "Digite el primer número: "; cin >> n1;
    cout << "Digite el segundo número: "; cin >> n2;

    suma = n1 + n2;
    resta = n1 - n2;
    mult = n1 * n2;
    div = n1 / n2;

    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La multiplicación es: " << mult << endl;
    cout << "La división es: " << div << endl;

    return 0;
}