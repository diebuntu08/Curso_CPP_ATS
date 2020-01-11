/* Cadenas de caracteres
 * Crear una cadena que tenga la siguiente frase: "Hola que tal", luego
 * crear otra cadena para preguntarle al usuario su nombre, por último
 * añadir el nombre al final de la primera cadena y mostrar el mensaje
 * completo "Hola que tal (nombre del usuario)"
*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {

    char cad[] = "Hola que tal ";
    char cad2[20];
    
    cout << "Digite su nombre: ";
    cin.getline(cad2, 20, '\n');
    
    strcat(cad, cad2); // Concatenando las dos cadenas de caracteres
    
    cout << "Frase: " << cad << endl;

    system("pause");
    return 0;
}
