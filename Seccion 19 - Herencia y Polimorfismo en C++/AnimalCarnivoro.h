
#include <iostream>
#include "Animal.h"

using namespace std;

class AnimalCarnivoro : public Animal {

    public:
        void alimentarse() {
            cout << "El animal carnívoro se alimenta de carne" << endl;
        }
};