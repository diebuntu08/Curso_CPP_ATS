/*
    04. Defina una plantilla para la clase Arreglo, la cual podrá definir valores de
    distinto tipo, el cual se definirá en el momento de la instancia, el programa deberá
    tener un menú con las siguientes opciones:

        a) Agregar un nuevo elemento en el arreglo
        b) Comprobar el espacio en el arreglo
        c) Ver arreglo
        d) Vaciar el arreglo
        e) Salir
*/

#include <iostream>
#include <stdlib.h>
#include "Arreglo.h"

using namespace std;

void opciones() {
    cout << "\t.:MENU:." << endl;
    cout << "1. Agregar un nuevo elemento al arreglo." << endl;
    cout << "2. Comprobar el espacio en el arreglo." << endl;
    cout << "3. Ver arreglo." << endl;
    cout << "4. Vaciar arreglo." << endl;
    cout << "5. Salir." << endl;
    cout << "OPCIÓN: ";
}

int main() {

    Arreglo <int> arreglo1(5);
    int opcion;
    int elemento;

    do {
        opciones();
        cin >> opcion;

        switch (opcion) {
            case 1:
                if (arreglo1.arregloLleno()) {
                    cout << "\nEl arreglo está lleno, no puede agregar más elementos." << endl;
                } else {
                    cout << "\nDigite un elemento para agregar: ";
                    cin >> elemento;
                    arreglo1.agregar(elemento);
                }
                break;
            case 2:
                if (arreglo1.arregloLleno()) {
                    cout << "\nEl arreglo está lleno." << endl;
                } else {
                    cout << "\nEl arreglo aún no está lleno." << endl;
                }
                break;
            case 3:
                cout << "\nLos elementos del arreglo son: " << endl;;
                arreglo1.mostrarArreglo();
                break;
            case 4:
                cout << "\nVaciando el arreglo..." << endl;
                arreglo1.vaciarArreglo();
                break;
            case 5:
                break;
            default:
                cout << "\nOpción inválida." << endl;
        }
        cout << "\n";
    } while (opcion != 5);

    system("pause");
    return 0;
}