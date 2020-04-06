
#include <iostream>
#include "Animal.h"

using namespace std;

class AnimalHervivoro : public Animal {

    public:
        void alimentarse() {
            cout << "El animal hervívoro se alimenta de plantas" << endl;
        }
};