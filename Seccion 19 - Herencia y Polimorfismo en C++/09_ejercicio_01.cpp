/*
    01. Considere la siguiente relación de herencia: Defina las clases Mamifero, Felino y
    GatoDomesticom decida que atributos y métodos incluir de tal manera que su programa
    pueda:

        a) Declarar un objeto llamado minino de tipo GatoDomestico y otro llamado
        estrellaCirco de tipo Felino.
        b) Imprimir la dieta de minino y estrellaCirco.
        c) Imprimir el año y el lugar de nacimiento de minino y estrellaCirco.
        d) Cambiar el nombre del dueño de minino.
        e) Imprimir la raza de minino y estrellaCirco.
        f) Cambiar el nombre del circo en el que actúa estrellaCirco.
*/

#include <iostream>
#include <stdlib.h>
#include "GatoDomestico.h"
#include "Felino.h"

using namespace std;

int main() {

    GatoDomestico* minino = new GatoDomestico(2015, "Trujillo", "Gato Persa", "Diego Garro");
    Felino* estrellaCirco = new Felino(2014, "La India", "Tigre de Bengala", "Espectacular");

    cout << "Dietas: " << endl;
    cout << "Gato: " << minino->imprimirDieta();
    cout << "Felino: " << estrellaCirco->imprimirDieta();

    cout << "\nAños de nacimiento y lugar de nacimiento: " << endl;
    cout << "Gato: " << minino->getAnioNacimiento() << " - " << minino->getLugarNacimiento() << endl;
    cout << "Felino: " << estrellaCirco->getAnioNacimiento() << " - " << estrellaCirco->getLugarNacimiento() << endl;

    cout << "\nCambiar el nombre del dueño del gato: " << endl;
    string nuevoDuenio;
    cout << "Digite el nombre del nuevo dueño: ";
    getline(cin, nuevoDuenio);
    minino->setNombreDuenio(nuevoDuenio);
    cout << "El nuevo dueño del gato es: " << minino->getNombreDuenio() << endl;

    cout << "\nRaza: " << endl;
    cout << "Gato: " << minino->getRaza() << endl;
    cout << "Felino: " << estrellaCirco->getRaza() << endl;

    cout << "\nCambiar el nombre del circo: " << endl;
    string nuevoCirco;
    cout << "Digite el nombre del nuevo circo: ";
    getline(cin, nuevoCirco);
    estrellaCirco->setNombreCirco(nuevoCirco);
    cout << "El nuevo circo de Felino es: " << estrellaCirco->getNombreCirco() << endl;

    delete minino;
    delete  estrellaCirco;

    system("pause");
    return 0;
}