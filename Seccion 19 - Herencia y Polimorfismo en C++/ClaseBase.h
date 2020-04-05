
#include <iostream>

using namespace std;

class ClaseBase {

    private:
        int numero;

    public:
        ClaseBase(int numero) { // Constructor
            this->numero = numero;
            cout << "Constructor de la clase base" << endl;
        }

        ~ClaseBase() { // Destructor
            cout << "Destructor de la clase base" << endl;
        }
};