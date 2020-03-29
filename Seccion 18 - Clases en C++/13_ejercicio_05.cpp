/*
    05. Construir un programa para una competencia de atletismo, el programa
    debe gestionar una serie de atletas caracterizados por su número de atleta,
    nombre y tiempo de carrera, al final el programa debe montar los datos del
    atleta ganador de la carrera.
*/

#include <iostream>
#include <stdlib.h>
#include "Atleta.h"

using namespace std;

int main() {

    Atleta* atletas;
    int numAtletas, numAtleta, indiceAtleta;
    string nombre;
    float tiempoCarrera;

    cout << "Digite el número de atletas a competir: ";
    cin >> numAtletas;

    atletas = new Atleta[numAtletas];

    for (int i = 0; i < numAtletas; i++) {
        cout << "\nDigite los atributos del atleta " << i + 1 << endl;
        cout << "\nDigite el número de atleta: ";
        cin >> numAtleta;
        cin.ignore();
        cout << "Digite el nombre del atleta: ";
        getline(cin, nombre);
        cout << "Digite el tiempo de carrera: ";
        cin >> tiempoCarrera;

        atletas[i] = Atleta(numAtleta, nombre, tiempoCarrera);
    }

    indiceAtleta = Atleta::indiceGanador(atletas, numAtletas);

    cout << "\nEl atleta ganador de la carrera es: " << endl;
    (atletas + indiceAtleta)->mostrarDatos();

    system("pause");
    return 0;
}