/*
* 4. Hacer un arreglo de estructura llamado atleta para N atletas que contenga los
* siguientes campos:
* - Nombre
* - País
* - Numero de medallas
* Y que devuelva los datos (Nombre, país) del atleta que ha ganado el mayor número de
* medallas.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Atleta {
    char nombre[20];
    char pais[20];
    int numero_medallas;
} atletas[100];

int main() {

    int n_atletas, mayor = 0, pos;

    cout << "Digite el número de atletas: ";
    cin >> n_atletas;

    for (int i = 0; i < n_atletas; i++) {
        cin.ignore();
        cout << i + 1 << ". Digite el nombre del atleta: ";
        cin.getline(atletas[i].nombre, 20, '\n');
        cout << i + 1 << ". Digite el país: ";
        cin.getline(atletas[i].pais, 20, '\n');
        cout << i + 1 << ". Digite el número de medallas: ";
        cin >> atletas[i].numero_medallas;
        cout << "\n";

        if (atletas[i].numero_medallas > mayor) {
            mayor = atletas[i].numero_medallas;
            pos = i;
        }
    }

    // Imprimiendo los datos del mejor atleta
    cout << "Nombre: " << atletas[pos].nombre << endl;
    cout << "País: " << atletas[pos].pais << endl;

    system("pause");
    return 0;
}