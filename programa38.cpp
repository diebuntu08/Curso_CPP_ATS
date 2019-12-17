/*
 * 15. Realice un programa que solicite al usuario que piense un número
 * entero entre 1 y 100. El programa debe generar un número aleatorio en
 * ese mismo rango [1, 100], e indicarle al usuario si el número que digitó
 * es mayor o menor al número aleatorio, así hasta que loa adivine. Y por 
 * último mostrarle el número de intentos que le llevó adivinarlo.
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {

    int numero, dato, contador = 0;
    
    srand(time(NULL)); // generar un número aleatorio;
    dato = 1 + rand()%(100);
    
    do {
        cout << "Digite un número: "; cin >> numero;
        
        if (numero > dato) {
            cout << "\nDigite un número MENOR\n";
        }
        
        if (numero < dato) {
            cout << "\nDigite un número MAYOR\n";
        }
        
        contador++;
    } while (numero != dato);
    
    cout << "\nFELICIDADES ADIVINASTE EL NÚMERO!!!";
    cout << "\nNúmero de intentos: " << contador << endl;
    
    system("pause");
    return 0;
}
