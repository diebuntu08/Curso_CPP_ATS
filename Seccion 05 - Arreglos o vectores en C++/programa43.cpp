/* Arreglos
 * 4. Escriba un programa que defina un vector de números y muestre en la
 * salida estándar el vector en orden inverso - del último elemento al
 * primero.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int numeros[5] = {1, 2, 3, 4, 5};
    
    for (int i = 4; i >= 0; i--) {
        cout << numeros[i] << endl;
    }
    
    system("pause");
    return 0;
}
