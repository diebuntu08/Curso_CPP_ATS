
#include <iostream>

using namespace std;

template <class T>
class Materia {

    private:
        string nombreMateria;
        int clave;
        T calificacion;

    public:
        Materia(string nombre, int clave, T calificacion) {
            this->nombreMateria = nombre;
            this->clave = clave;
            this->calificacion = calificacion;
        }

        void mostrarDatos() {
            cout << "Nombre de la materia: " << nombreMateria << endl;
            cout << "Clave de la materia: " << clave << endl;
            cout << "Calificación: " << calificacion << endl;
        }

        void setCalificacion(T calificacion) {
            this->calificacion = calificacion;
        }

        T getCalificacion() {
            return calificacion;
        }
};