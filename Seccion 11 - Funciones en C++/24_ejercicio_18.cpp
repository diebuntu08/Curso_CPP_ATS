/*
* 18. Escriba una función en C++ llamada mayor() que devuelva la fecha más
* reciente de cualquier par de fechas que se le pasen como parámetros. Por
* ejemplo, si se pasan las fechas 10/09/2005 y 11/03/2015 a la función, será
* devuelta la segunda fecha.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Fecha {
    int dia, mes, anio;
} f1, f2;

void pedirDatos();
Fecha mayor(Fecha, Fecha);
void muestra(Fecha);

int main() {

    pedirDatos();

    Fecha x = mayor(f1, f2);

    muestra(x);

    system("pause");
    return 0;
}

void pedirDatos() {
    cout << "Digite la primera fecha: " << endl;
    cout << "Digite el día: "; cin >> f1.dia;
    cout << "Digite el mes: "; cin >> f1.mes;
    cout << "Digite el año: "; cin >> f1.anio;

    cout << "Digite la segunda fecha: " << endl;
    cout << "Digite el día: "; cin >> f2.dia;
    cout << "Digite el mes: "; cin >> f2.mes;
    cout << "Digite el año: "; cin >> f2.anio;
}

Fecha mayor(Fecha f1, Fecha f2) {
    Fecha mayorFecha;

    if ((f1.anio >= f2.anio) && (f1.mes >= f2.mes) && (f1.dia >= f2.dia)) {
        mayorFecha = f1;
    } else {
        mayorFecha = f2;
    }

    return mayorFecha;
}

void muestra(Fecha x) {
    cout << "\nLa fecha más reciente es: " << x.dia << "/" << x.mes << "/" << x.anio << endl;
}