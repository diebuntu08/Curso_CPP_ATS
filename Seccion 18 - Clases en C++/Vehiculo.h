
#include <iostream>

using namespace std;

class Vehiculo {

    private:
        string marca, modelo;
        float precio;
    
    public:
        Vehiculo(string marca, string modelo, float precio) { // Constructor 1
            this->marca = marca;
            this->modelo = modelo;
            this->precio = precio;
        }

        Vehiculo() { // Constructor por defecto
        }

        ~Vehiculo() {
        }

        float getPrecio();
        void mostrarDatos();
        static int indiceMasBarato(Vehiculo coches[], int n);
};