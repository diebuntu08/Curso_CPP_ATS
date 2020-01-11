// Promedio de tres notas de un alumno

#include <iostream>

using namespace std;

int main() {

    float n1, n2, n3, promedio = 0;
    
    cout << "Digite la primera nota: "; cin >> n1;
    cout << "Digite la segunda nota: "; cin >> n2;
    cout << "Digite la tercera nota: "; cin >> n3;
    
    promedio = (n1 + n2 + n3) / 3;
    
    cout.precision(2);
    cout << "\nEl promedio de las notas es: " << promedio << endl;
    
    
    return 0;
}
