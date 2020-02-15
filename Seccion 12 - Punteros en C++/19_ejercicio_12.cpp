/*
    12. Defina una estructura que indique el tiempo empleado por un ciclista en
    recorrer una etapa. La estructura debe tener tres campos:
    * Horas
    * Minutos
    * Segundos
    Escriba un programa que dadas 3 etapas calcule el tiempo total empleado en
    correrlas todas.
    NOTA: Usar punteros.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Etapa {
    int horas, min, seg;
} etapas[3], *puntero_etapa = etapas;

void pedirDatos();
void calcularTiempo(Etapa *);

int main() {

    pedirDatos();

    calcularTiempo(puntero_etapa);

    system("pause");
    return 0;
}

void pedirDatos() {
    cout << "Digite los tiempo empleados:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Horas: "; cin >> (puntero_etapa + i)->horas;
        cout << "Minutos: "; cin >> (puntero_etapa + i)->min;
        cout << "Segundos: "; cin >> (puntero_etapa + i)->seg;
        cout << "\n";
    }
}

void calcularTiempo(Etapa *puntero_etapa) {
    int horasT = 0, minT = 0, segT = 0;

    for (int i = 0; i < 3; i++) {
        horasT += (puntero_etapa + i)->horas;
        minT += (puntero_etapa + i)->min;
        if (minT >= 60) {
            minT -= 60;
            horasT++;
        }
        segT += (puntero_etapa + i)->seg;
        if (segT >= 60) {
            segT -= 60;
            minT++;
        }
    }

    cout << "\nMostrando el tiempo total:\n";
    cout << "Horas totales: " << horasT << endl;
    cout << "Minutos totales: " << minT << endl;
    cout << "Segundos totales: " << segT << endl;
}