// Destructor de objetos

#include <string.h>

using namespace std;

class Perro {

    // Atributos
    private:
        string nombre, raza;
    
    // Métodos
    public:
        Perro(string nombre, string raza) {
            this->nombre = nombre;
            this->raza = raza;
        }

        ~Perro() { // Destructor

        }

        void mostrarDatos();
        void jugar();
};