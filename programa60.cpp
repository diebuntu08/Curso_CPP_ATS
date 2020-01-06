/* Cadenas de caracteres
 * Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y
 * copiar todo su contenido hacia otro arreglo de caracteres.
*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {

    char frase[20], frase2[20];
    
    cout << "Digite una frase: ";
    cin.getline(frase, 20, '\n');
    
    strcpy(frase2, frase); // Guardando dentro de la cadena frase2 todo lo que contiene frase
    
    cout << frase2 << endl;

    system("pause");
    return 0;
}
