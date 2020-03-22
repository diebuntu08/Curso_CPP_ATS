/*
    01. Definir una clase DiaAnio con los atributos mes y dia, los métodos igual()
    y visualizar(). El mes se registra como un valor entero (1, Enero, 2 , Febrero, etc.).
    El día del mes se registra en otra variable entera día.
    Escribir un programa que compruebe si una fecha es su cumpleaños.
*/

#include <iostream>
#include <stdlib.h>
#include "DiaAnio.h"

using namespace std;

int main() {

    DiaAnio* hoy;
    DiaAnio* cumple;
    int d, m;

    cout << "Introduzca la fecha de hoy, dia: ";
    cin >> d;
    cout << "Mes: ";
    cin >> m;

    hoy = new DiaAnio(d, m);

    cout << "\nIntroduzca la fecha de su cumpleaños, dia: ";
    cin >> d;
    cout << "Mes: ";
    cin >> m;

    cumple = new DiaAnio(d, m);

    // Mosytramos la fecha de hoy
    hoy->visualizar();
    cout << "\n";
    // Mostramos la fecha del cumpleaños
    cumple->visualizar();

    if (hoy->igual(*cumple)) {
        cout << "\nFeliz cumpleaños!!" << endl;
    } else {
        cout << "\nQue tenga un buen día!!" << endl;
    }

    system("pause");
    return 0;
}