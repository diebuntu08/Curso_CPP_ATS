/*
    03. Crear un programa para un equipo de fútbol (futbolista, entrenador y doctor),
    para lo cual tendremos lo siguiente:

        * Una clase base persona, que tendrá los siguientes datos: nombre, apellido, edad.
        * La clase derivada Futbolista tendrá los siguientes datos: dorsal y posición.
        * La clase derivada Entrenador tendrá de dato la estrategia que utiliza.
        * La clase derivada Médico, la titulación y los años de experiencia.
    
    Hacer un menú donde se tengan las siguientes opciones:

        a) Viaje en equipo
        b) Entrenamiento
        c) Partido de fútbol
        d) Planificar el entrenamiento
        e) Entrevistas
        f) Curar lesión
*/

#include <iostream>
#include <stdlib.h>
#include "Persona.h"
#include "Futbolista.h"
#include "Entrenador.h"
#include "Medico.h"

using namespace std;

Persona* equipo[4];

void viajarEquipo() {
    for (int i = 0; i < 4; i++) {
        cout << equipo[i]->getNombre() << " " << equipo[i]->getApellido() << " -> ";
        equipo[i]->viajar();
    }
}

void entrenamientoEquipo() {
    for (int i = 0; i < 4; i++) {
        cout << equipo[i]->getNombre() << " " << equipo[i]->getApellido() << " -> ";
        equipo[i]->entrenamiento();
    }
}

void partidoFutbol() {
    for (int i = 0; i < 4; i++) {
        cout << equipo[i]->getNombre() << " " << equipo[i]->getApellido() << " -> ";
        equipo[i]->partidoFutbol();
    }
}

void planificarEntrenamiento() {
    cout << equipo[2]->getNombre() << " " << equipo[2]->getApellido() << " -> ";
    ((Entrenador *)equipo[2])->planificarEntrenamiento();
}

void entrevista() {
    cout << equipo[0]->getNombre() << " " << equipo[0]->getApellido() << " -> ";
    ((Futbolista *)equipo[0])->entrevista();
    cout << equipo[1]->getNombre() << " " << equipo[1]->getApellido() << " -> ";
    ((Futbolista *)equipo[1])->entrevista();
}

void curarLesion() {
    cout << equipo[3]->getNombre() << " " << equipo[3]->getApellido() << " -> ";
    ((Medico *)equipo[3])->curarLesion();
}

void menu() {
    int opcion;

    do {
        cout << "\t.:MENU:." << endl;
        cout << "1. Viaje en equipo" << endl;
        cout << "2. Entrenamiento" << endl;
        cout << "3. Partido de fútbol" << endl;
        cout << "4. Planificar entrenamiento" << endl;
        cout << "5. Entrevista" << endl;
        cout << "6. Curar lesión" << endl;
        cout << "7. Salir" << endl;
        cout << "Opción: ";
        cin >> opcion;
        cout << endl;

        switch (opcion) {
            case 1: // Viaje en equipo
                viajarEquipo();
                break;
            case 2: // Entrenamiento
                entrenamientoEquipo();
                break;
            case 3: // Partido de fútbol
                partidoFutbol();
                break;
            case 4: // Planificar entrenamiento
                planificarEntrenamiento();
                break;
            case 5: // Entrevista
                entrevista();
                break;
            case 6: // Curar lesión
                curarLesion();
                break;
            case 7: // Salir
                break;
            default:
                cout << "Opción no válida!!" << endl;
                break;
        }
        cout << endl;
    } while (opcion != 7);
}

int main() {

    equipo[0] = new Futbolista("Gonzalo", "Higuain", 30, 9, "Delantero");
    equipo[1] = new Futbolista("Paulo", "Dybala", 24, 10, "Delantero");
    equipo[2] = new Entrenador("Massimiliano", "Allegri", 50, "Defensiva");
    equipo[3] = new Medico("Alex", "Marroni", 59, "Fisioterapeuta", 20);

    //MENU
    menu();

    system("pause");
    return 0;
}