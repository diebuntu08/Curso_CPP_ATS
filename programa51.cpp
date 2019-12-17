/* Matrices
 * 4. Hacer una matriz preguntando al usuario el número de filas y columnas,
 * llenarla con números aleatorios, copiar el contenido a otra matriz y por
 * último mostrarla en pantalla.
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {

    int numeros[100][100], dato, n_filas, n_cols, matriz[100][100];
    
    cout << "Digite el número de filas: ";
    cin >> n_filas;
    cout << "Digite el número de columnas: ";
    cin >> n_cols;
    
    srand(time(NULL)); // Genera números aleatorios
    
    // Rellenando los números aleatorios
    for (int i = 0; i < n_filas; i++) {
        for (int j = 0; j < n_cols; j++) {
            dato = 1 + rand()%(100); // Generando los números aleatorios 1 - 100
            numeros[i][j] = dato;
        }
    }
    
    // Copiando el contenido de la matriz original
    for (int i = 0; i < n_filas; i++) {
        for (int j = 0; j < n_cols; j++) {
            matriz[i][j] = numeros[i][j];
        }
    }
    
    // Imprimiendo los valores de la matriz copiada
    for (int i = 0; i < n_filas; i++) {
        for (int j = 0; j < n_cols; j++) {
            cout << matriz[i][j] << " ";
        }
        
        cout << "\n";
    }
    
    system("pause");
    return 0;
}
