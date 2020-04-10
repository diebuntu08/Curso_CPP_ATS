/*
    02. Considere la siguiente relación de herencia, la cual involucra tres clases: Alumno,
    Deportista y BecadoDeporte. Esta última representa a aquellos alumnos que son deportistas
    y que por esa razón han recibido una beca especial del gobierno para premiar sus
    esfuerzos. Decida qué atributos y métodos incluir de tal manera que su programa pueda:

        a) Declarar dos objetos llamados alumnoJuan y alumnoPedro de tipo Alumno.
        b) Declarar un objeto llamado deporLuis de tipo Deportista.
        c) Declarar dos objetos llamados bdAna y bdCarmen de tipo BecadoDeporte.
        d) Imprimir los datos de todos los objetos declarados.
        e) Actualizar el nombre de la carrera que están estudiando alumnoJuan y bdAna. El dato
        suministrado por el usuario será el nombre de la nueva carrera.
        f) Actualizar el nombre del entrenador de deporLuis y bdCarmen. El dato dado por el
        usuario será el nombre del nuevo entrenador.
        g) Actualizar el monto de la beca de bdAna y bdCarmen. El dato dado por el usuario será
        el porcentaje de incremento de la beca actual.
*/

#include <iostream>
#include <stdlib.h>
#include "Alumno.h"
#include "Deportista.h"
#include "BecadoDeporte.h"

using namespace std;

int main() {

    Alumno* alumnoJuan = new Alumno("Informática");
    Alumno* alumnoPedro = new Alumno("Sistemas");

    Deportista* deporLuis = new Deportista("Popeye");

    BecadoDeporte* bdAna = new BecadoDeporte("Administración", "Luis", 1200);
    BecadoDeporte* bdCarmen = new BecadoDeporte("Contabilidad", "La Roca", 1350);

    cout << "Mostrando Datos: " << endl;
    cout << "Alumno Juan: " << endl;
    alumnoJuan->mostrarDatos();
    cout << "Alumno Pedro: " << endl;
    alumnoPedro->mostrarDatos();
    cout << "Deportista Luis: " << endl;
    deporLuis->mostrarDatos();
    cout << "Becado Ana: " << endl;
    bdAna->mostrarDatos();
    cout << "Becado Carmen: " << endl;
    bdCarmen->mostrarDatos();

    string nuevaCarrera;
    cout << "\nDigite la nueva carrera de Juan: ";
    getline(cin, nuevaCarrera);
    alumnoJuan->setNombreCarrera(nuevaCarrera);
    cout << "\nDigite la nueva carrera de Ana: ";
    getline(cin, nuevaCarrera);
    bdAna->setNombreCarrera(nuevaCarrera);

    cout << "\nLa nueva carrera de Juan es: " << alumnoJuan->getNombreCarrera() << endl;
    cout << "La nueva carrera de Ana es: " << bdAna->getNombreCarrera() << endl;

    string nuevoEntrenador;
    cout << "\nDigite el nombre del nuevo entrenador de Luis: ";
    getline(cin, nuevoEntrenador);
    deporLuis->setNombreEntrenador(nuevoEntrenador);
    cout << "Digite el nombre del nuevo entrenador de Carmen: ";
    getline(cin, nuevoEntrenador);
    bdCarmen->setNombreEntrenador(nuevoEntrenador);

    cout << "El nuevo entrenador de Luis es: " << deporLuis->getNombreEntrenador() << endl;
    cout << "El nuevo entrenador de Carmen es: " << bdCarmen->getNombreEntrenador() << endl;

    float incremento;
    cout << "\nDigite el incremento de la beca de Ana: ";
    cin >> incremento;
    bdAna->setMontoBeca(incremento);
    cout << "Digite el incremento de la beca de Carmen: ";
    cin >> incremento;
    bdCarmen->setMontoBeca(incremento);

    cout << "La nueva beca de Ana es: " << bdAna->getMontoBeca() << endl;
    cout << "La nueva beca de Carmen es: " << bdCarmen->getMontoBeca() << endl;


    delete alumnoJuan;
    delete alumnoPedro;

    delete deporLuis;

    delete bdAna;
    delete bdCarmen;

    system("pause");
    return 0;
}