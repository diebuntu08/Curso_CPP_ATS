/*12. Hacer un menú que considere las siguientes opciones:
        Caso 1: Cubo de un número.
        Caso 2: Número par o impar.
        Caso 3: Salir.*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int opcion, num;
    float numero, cubo;
    
    cout << "\t.:Menú:." << endl;
    cout << "1. Cubo de un número" << endl;
    cout << "2. Número par o impar" << endl;
    cout << "3. Salir" << endl;
    
    cout << "Opción: "; cin >> opcion;
    
    switch (opcion) {
        case 1:
            cout << "\nDigite un número: ";
            cin >> numero;
            cubo = pow(numero, 3);
            cout << "\nEl cubo del número es: " << cubo << endl;
            break;
        case 2:
            cout << "\nDigite un número: ";
            cin >> num;
            if (num % 2 == 0) {
                cout << "\nEl número es par" << endl;
            } else {
                cout << "\nEl número es impar" << endl;
            }
            break;
        case 3:
            cout << "\nHasta luego!" << endl;
            break;
        default:
            cout << "\n" << opcion << " no es una opción válida." << endl;
            break;
    }
    
    return 0;
}
