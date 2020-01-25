/*
* 9. Escriba una función nombrada tiempo() que tenga un parámetro de tipo entero
* llamado totalSeg y tres parámetros por referencia de tipo entero llamados horas,
* min y seg. La función debe convertir el valor de totalSeg a su equivalente en
* horas, minutos y segundos.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void tiempo(int, int&, int&, int&);

int main() {

    int totalSeg, horas, min, seg;

    cout << "Digite el número total de segundos: ";
    cin >> totalSeg;

    tiempo(totalSeg, horas, min, seg);

    cout << "Tiempo equivalente a la cantidad de segundos " << totalSeg << " es: " << endl;
    cout << horas << ":" << min << ":" << seg << endl;

    system("pause");
    return 0;
}

void tiempo(int totalSeg, int& horas, int& min, int&seg) {
    horas = totalSeg / 3600;
    totalSeg %= 3600;
    min = totalSeg / 60;
    seg = totalSeg % 60;
}