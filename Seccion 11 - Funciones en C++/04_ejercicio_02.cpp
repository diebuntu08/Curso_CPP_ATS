/*
* 2. Escriba una función llamada al_cuadrado() que calcule el cuadrado del valor que se le
* transmite y despliegue el resultado. La función deberá ser capaz de elevar al cuadrado
* números flotantes.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

// Prototipo de la función
void pedirDatos();
void al_cuadrado(float n);

float numero;

int main() {

    pedirDatos();
    al_cuadrado(numero);

    system("pause");
    return 0;
}

void pedirDatos() {
    cout << "Digite un número: ";
    cin >> numero;
}

void al_cuadrado(float n) {
    float elevacion;

    elevacion = n * n;

    cout << "El número al cuadrado es: " << elevacion << endl;
}