
#include <iostream>

using namespace std;

class Alumno {

    private:
        string nombreCarrera;

    public:
        Alumno(string nombreCarrera) {
            this->nombreCarrera = nombreCarrera;
        }

        void mostrarDatos() {
            cout << "Nombre de la carrera: " << nombreCarrera << endl;
        }

        void setNombreCarrera(string nuevoNombre) {
            this->nombreCarrera = nuevoNombre;
        }

        string getNombreCarrera() {
            return nombreCarrera;
        }
};