
#include <iostream>

using namespace std;

class Expediente {

    private:
        int nroExpediente;
    
    public:
        Expediente(int nroExp) {
            this->nroExpediente = nroExp;
        }

        Expediente(){}

        ~Expediente() {}

        int getNroExpediente() {
            return nroExpediente;
        }
};