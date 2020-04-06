
#include <iostream>
#include "SerVivo.h"

using namespace std;

class Planta : public SerVivo {

    public:
        void alimentarse() {
            cout << "El objeto planta se alimenta mediante fotosíntesis" << endl;
        }
};