// Implementación de la clase Persona

#include <iostream>
#include <string.h>

using namespace std;

class Persona {

    // Atributos
    private:
        string nombre;
        int edad;
        string dni;
    
    // Métodos
    public:
        Persona(string _nombre, int _edad) { // Constructor 1
            nombre = _nombre;
            edad = _edad;
        }

        Persona(string _dni) { // Constructor 2
            dni = _dni;
        }

        void correr() {
            cout << "Soy " << nombre << ", tengo " << edad << " años y estoy corriendo una maratón." << endl;
        }

        void correr(int km) {
            cout << "He corrido " << km << " kilómetros." << endl;
        }

};