/* Cadenas de caracteres
 * 3. Pedir al usuario que digite 2 cadenas de caracteres, e indicar si
 * ambas cadenas son iguales, en caso de no serlo, indicar cual es mayor
 * alfabéticamente.
*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {

    char palabra1[30], palabra2[30];
    
    cout << "Digite una palabra: ";
    cin.getline(palabra1, 30, '\n');
    cout << "Digite otra palabra: ";
    cin.getline(palabra2, 30, '\n');
    
    if (strcmp(palabra1, palabra2) == 0) {
        cout << "Ambas palabras son iguales";
    } else if (strcmp(palabra1, palabra2) > 0) {
        cout << palabra1 << " es mayor alfabéticamente";
    } else {
        cout << palabra2 << " es mayor alfabéticamente";
    }

    system("pause");
    return 0;
}
