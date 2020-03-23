// Destructor de objetos

#include <string.h>

using namespace std;

class Perro {

    // Atributos
    private:
        string nombre, raza;
    
    // Métodos
    public:
        Perro(string _nombre, string _raza) {
            nombre = _nombre;
            raza = _raza;
        }

        ~Perro() { // Destructor

        }

        void mostrarDatos();
        void jugar();
};