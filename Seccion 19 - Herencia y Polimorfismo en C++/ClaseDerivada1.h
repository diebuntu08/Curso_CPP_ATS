
#include <iostream>
#include "ClaseBase1.h"
#include "ClaseBase2.h"

using namespace std;

class ClaseDerivada1 : public ClaseBase1, public ClaseBase2 {

    private:
        int x;
    
    public:
        ClaseDerivada1(int x1, int x2, int x) : ClaseBase1(x1), ClaseBase2(x2) {
            this->x = x;
        }

        ~ClaseDerivada1() {}

        int getX() {
            //return x;
            //return ClaseBase1::x;
            //return ClaseBase2::x;
            return ClaseBase1::getX();
        }
};