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

    int num, dato = 5;
    
    cout << "Digite un número: "; cin >> num;
    
    if(num == dato){
        cout << "El número es 5";
    }
    else{
        cout << "El número es diferente de 5";
    }
    
    
    return 0;
}
