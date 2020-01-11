/* 8. Pedir al usuario dos cadenas de caracteres de números, uno entero y el otro real,
 * convertirlos a sus respectivos vlores y por último sumarlos.
*/ 

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {

    char cad1[10], cad2[10];
    int valorEntero;
    float valorFlotante;

    // Guardar los números como cadenas
    cout << "Digite un valor entero: ";
    cin.getline(cad1, 10, '\n');

    cout << "Digite un valor flotante: ";
    cin.getline(cad2, 10, '\n');

    // Transformar las cadenas a números
    valorEntero = atoi(cad1);
    valorFlotante = atof(cad2);

    // Sumar los dos números
    cout << "La suma es: " << valorEntero + valorFlotante << endl;
    
    system("pause");
    return 0;
}
