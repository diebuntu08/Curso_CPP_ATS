
#include <iostream>
#include "ClaseBase.h"

using namespace std;

class ClaseDerivada : public ClaseBase {

    private:
        int numero2;
    
    public:
        ClaseDerivada(int numero, int numero2) : ClaseBase(numero) { // Constructor
            this->numero2 = numero2;
            cout << "Constructor de la clase derivada" << endl;
        }

        ~ClaseDerivada() { // Destructor
            cout << "Destructor de la clase derivada" << endl;
        }
};