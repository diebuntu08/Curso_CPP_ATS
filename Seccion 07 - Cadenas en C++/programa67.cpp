// Pasar una palabra a MAYÚSCULAS - Función strupr()

#include <iostream>
#include <stdlib.h>
#include <boost/algorithm/string.hpp>
#include <string.h>

using namespace std;

int main() {

    string palabra = "diego";
    
    boost::to_upper(palabra);
    
    cout << palabra << endl;

    system("pause");
    return 0;
}
