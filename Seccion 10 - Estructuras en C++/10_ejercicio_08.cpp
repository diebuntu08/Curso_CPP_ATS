/*
* Defina una estructura que sirva para representar a una persona. La estructura
* debe contener dos campos:
* - El nombre de la persona
* - Y un valor de tipo lógico que indica si la persona tiene algún tipo de 
*   discapacidad.
* Realice un programa que dado un vector de personas, rellene dos nuevos vectores:
* - Uno que contenga las personas que no tienen discapacidad
* - Y otro que contenga las personas con discapacidad.
*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct Persona {
    char nombre[30];
    bool discapacidad;
} personas[100], personasSinD[100], personasConD[100];
// personasSinD: personas sin discapacidad
// personasConD: personas con dicapacidad

int main() {

    int n_personas, j = 0, k = 0;

    cout << "Digite el número de personas: ";
    cin >> n_personas;

    // Rellenando el vector con los datos de las personas
    for (int i = 0; i < n_personas; i++) {
        cin.ignore();
        cout << i + 1 << ". Digite el nombre de la persona: ";
        cin.getline(personas[i].nombre, 30, '\n');
        cout << i + 1 << ". La persona tiene discapacidad (1/0): ";
        cin >> personas[i].discapacidad;

        // Almacenando personas con discapacidad
        if (personas[i].discapacidad == 1) {
            strcpy(personasConD[j].nombre, personas[i].nombre);
            j++;
        } else {
            strcpy(personasSinD[k].nombre, personas[i].nombre);
            k++;
        }
    }

    cout << "\nMostrar a las personas sin discapacidad:\n";
    for (int i = 0; i < k; i++) {
        cout << personasSinD[i].nombre << endl;
    }

    cout << "\nMostrar a las personas con discapacidad:\n";
    for (int i = 0; i < j; i++) {
        cout << personasConD[i].nombre << endl;
    }

    cout << "\n";

    system("pause");
    return 0;
}