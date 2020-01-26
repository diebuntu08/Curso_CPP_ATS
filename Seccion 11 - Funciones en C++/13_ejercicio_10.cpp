/*
* 10. Escriba una función llamada calc_anios() con un parámetro entero que
* represente el número total de días desde la fecha 1/1/2000 y parámetros
* por referencia llamados anio, mes y dia. La función debe calcular el año,
* mes y día actual para el número total de días que se le pase. Para este
* problema suponga que cada año tiene 365 días y cada mes 30 días.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void calc_anios(int, int&, int&, int&);

int main() {

    int totalDias, anio, mes, dia;

    cout << "Digite el número total de días: ";
    cin >> totalDias;

    calc_anios(totalDias, anio, mes, dia);

    cout << "Fecha actual: " << dia + 1 << "/" << mes + 1 << "/" << anio + 2000 << endl;

    system("pause");
    return 0;
}

void calc_anios(int totalDias, int& anio, int& mes, int& dia) {
    anio = totalDias / 365;
    totalDias %= 365;
    mes = totalDias / 30;
    dia = totalDias % 30;
}