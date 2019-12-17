/*
La sentencia if
* 
* if(condicion){
*    Instrucciones 1;
* }
* else {
*    Instrucciones 2;
* }
*/

#include <iostream>

using namespace std;

int main() {

    int numero;

    cout << "Digite un número entre 1-5: "; cin >> numero;

    switch (numero)
    {
    case 1:
        cout << "Es el número 1" << endl;
        break;
    case 2:
        cout << "Es el número 2" << endl;
        break;
    case 3:
        cout << "Es el número 3" << endl;
        break;
    case 4:
        cout << "Es el número 4" << endl;
        break;
    case 5:
        cout << "Es el número 5" << endl;
        break;    
    default:
        cout << "No es un número entre 1-5" << endl;
        break;
    }
    
    return 0;
}
