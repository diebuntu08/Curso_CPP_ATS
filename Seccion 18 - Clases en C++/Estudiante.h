
#include <iostream>
#include "Expediente.h"
#include "Direccion.h"

using namespace std;

class Estudiante {

    private:
        string codigo;
        float promedio;
        Expediente exp;
        Direccion dir;

    public:
        Estudiante(string codigo, float promedio, int nroExp, string direccion) : exp(nroExp), dir(direccion) {
            this->codigo = codigo;
            this->promedio = promedio;
        }

        void mostrarDatos() {
            cout << "Código: " << codigo << endl;
            cout << "Promedio: " << promedio << endl;
            cout << "Número de Expediente: " << exp.getNroExpediente() << endl;
            cout << "Dirección: " << dir.getDireccion() << endl;
        }

};