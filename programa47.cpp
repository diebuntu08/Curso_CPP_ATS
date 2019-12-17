/* Arreglos
 * 8. Hacer un programa que lea 5 números en un arreglo, los copie a otro
 * arreglo multiplicados por 2 y muestre el segundo arreglo.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int numeros[5], numeros2[5];
    
    // Pedimos al usuario los elementos del vector
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". Digite los elementos del arreglo: ";
        cin >> numeros[i];
    }
    
    // Multiplicamos por 2 los elementos de numeros[] y almacenamos en numeros2[]
    for (int i = 0; i < 5; i++) {
        numeros2[i] = numeros[i] * 2;
    }
    
    cout << "\nMostrando los elementos del arreglo * 2: \n";
    for (int i = 0; i < 5; i++) {
        cout << numeros2[i] << endl;
    }
    
    system("pause");
    return 0;
}
