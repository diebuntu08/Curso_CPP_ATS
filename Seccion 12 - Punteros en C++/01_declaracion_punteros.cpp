/*
* Punteros - Declaración de Punteros
* 
* &n = La dirección de n
* *n = La variable cuya dirección está almacenada en n
*
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int num, *dir_num; // *dir_num duarda la dirección de memoria donde se almacena num

    num = 20;
    dir_num = &num;

    cout << "Número: " << *dir_num << endl;
    cout << "Dirección de memoria: " << dir_num << endl;

    system("pause");
    return 0;
}