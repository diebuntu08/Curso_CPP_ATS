
#include <iostream>
#include "Felino.h"

using namespace std;

class GatoDomestico : public Felino {

    private:
        string nombreDuenio;

    public:
        GatoDomestico(int anioNacimiento, string lugarNacimiento, string raza, string nombreDuenio) : Felino(anioNacimiento, lugarNacimiento, raza,) {
            this->nombreDuenio = nombreDuenio;
        }

        string imprimirDieta() {
            return "La dieta deñ gato es con Whiskas\n";
        }

        void setNombreDuenio(string nuevoNombre) {
            this->nombreDuenio = nuevoNombre;
        }

        string getNombreDuenio() {
            return nombreDuenio;
        }
};