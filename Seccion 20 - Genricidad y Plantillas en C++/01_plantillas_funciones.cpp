
#include <iostream>
#include <stdlib.h>

using namespace std;

// Pkantilla de Función
template <class T> // Se puede usar typename o class, no hay diferencia en el funcionamiento
T mayor(T dato1, T dato2) {
    if (dato1 >= dato2) {
        return dato1;
    } else {
        return dato2;
    }
}

int main() {

    cout << "El mayor de dos números enteros es: " << mayor(5, 9) << endl;
    cout << "El mayor de dos números reales es: " << mayor(9.87, 4.56) << endl;
    cout << "El mayor de dos caracteres es: " << mayor('r', 'z') << endl;

    system("pause");
    return 0;
}