
#include <iostream>

using namespace std;

class Atleta {

    private:
        int numAtleta;
        string nombre;
        float tiempoCarrera;
    
    public:
        Atleta(int numAtleta, string nombre, float tiempoCarrera) {
            this->numAtleta = numAtleta;
            this->nombre = nombre;
            this->tiempoCarrera = tiempoCarrera;
        }

        Atleta(){}

        ~Atleta(){}

        float getTiempoCarrera();
        void mostrarDatos();
        static int indiceGanador(Atleta atletas[], int n);
};