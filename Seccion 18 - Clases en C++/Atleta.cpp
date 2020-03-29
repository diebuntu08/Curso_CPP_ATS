
#include <iostream>
#include "Atleta.h"

using namespace std;

float Atleta::getTiempoCarrera() {
    return tiempoCarrera;
}

void Atleta::mostrarDatos() {
    cout << "Número de atleta: " << numAtleta << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Tiempo de carrera: " << tiempoCarrera << endl;
}

int Atleta::indiceGanador(Atleta atletas[], int n) {
    float tiempoCarrera;
    int indice;

    tiempoCarrera = atletas[0].getTiempoCarrera();
    for (int i = 1; i < n; i++) {
        if (atletas[i].getTiempoCarrera() < tiempoCarrera) {
            tiempoCarrera = atletas[i].getTiempoCarrera();
            indice = i;
        }
    }

    return indice;
}