/* Arreglos
 * 2. Escriba un programa que defina un vector de números y calcule la 
 * multiplicación acumulada de sus elementos.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int numeros[5] = {1, 2 ,3, 4, 5};
    int resultado = 1;
    
    for (int i = 0; i < 5; i++) {
        resultado *= numeros[i];
    }
    
    cout << "La multiplicación de los elementos del vector es: " << resultado << endl;
    
    system("pause");
    return 0;
}
