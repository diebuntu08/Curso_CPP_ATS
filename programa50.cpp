/* Matrices
 * 3. Hacer una matriz de tipo entera 2x2, llenarla de números y luego
 * copiar todo su contenido en otra matriz.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int numeros[2][2] = {{1, 2}, {3, 4}};
    int matriz[2][2];
    
    // Pasando el contenido de números hacia matriz
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matriz[i][j] = numeros[i][j];
        }
    }
    
    // Mostrando la nueva matriz
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matriz[i][j] << " ";
        }
        
        cout << "\n";
    }
    
    system("pause");
    return 0;
}
