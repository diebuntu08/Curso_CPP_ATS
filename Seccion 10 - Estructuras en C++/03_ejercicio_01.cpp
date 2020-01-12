/*
* 1. Hacer una estructura llamada corredor, en la cual se tendrán los siguientes campos:
* - Nombre
* - Edad
* - Sexo
* - Club
* Pedir datos al usuario para un corredor y también una categoría de competición:
* - Juvenil <= 18 años
* - Señor <= 40 años
* - Veterano > 40 años
* Posteriormente imprimir todos los datos del corredor, incluida su categoría de competición.
*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct Corredor {
    char nombre[20];
    int edad;
    char sexo[10];
    char club[20];
} c1;

int main() {

    char categoria[20];

    cout << "Nombre: ";
    cin.getline(c1.nombre, 20, '\n');
    cout << "Edad: ";
    cin >> c1.edad;
    cin.ignore();
    cout << "Sexo: ";
    cin.getline(c1.sexo, 10, '\n');
    cout << "Club: ";
    cin.getline(c1.club, 20, '\n');

    if (c1.edad <= 18) {
        strcpy(categoria, "Juvenil");
    } else if (c1.edad <= 40) {
        strcpy(categoria, "Senior");
    } else {
        strcpy(categoria, "Veterano");
    }

    cout << "\n\nDatos del corredor: " << endl;
    cout << "\nNombre: " << c1.nombre;
    cout << "\nEdad: " << c1.edad;
    cout << "\nSexo: " << c1.sexo;
    cout << "\nClub: " << c1.club;
    cout << "\nCategoría: " << categoria << endl;

    system("pause");
    return 0;
}