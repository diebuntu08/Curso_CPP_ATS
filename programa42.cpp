/* Arreglos
 * 3. Escriba un programa que lea de la entrada estándar un vector de números
 * y muestre en la salida estándarlos números del vectorcon sus índices
 * asociados.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int numeros[100], n;
    
    cout << "Digite el número de elementos que va a tener el arreglo: ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cout << "Digite un número: ";
        cin >> numeros[i]; // Guardando todos los elementos del vector
    }
    
    // Ahora vamos a mostrar los elementos con sus indices asociados
    
    for (int i = 0; i < n; i++) {
        cout << i << " -> " << numeros[i] << endl;
    }
    
    
    system("pause");
    return 0;
}
