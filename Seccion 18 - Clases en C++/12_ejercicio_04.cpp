/*
    04. Construir un programa que dada una serie de vehículos caracterizados
    por su marca, modelo y precio, imprima las propiedades del vehículo más
    barato. Para ello, se deberán leer por teclado las características de cada
    vehículo y crear una clase que represente a cada uno de ellos.
*/

#include <iostream>
#include <stdlib.h>
#include "Vehiculo.h"

using namespace std;

int main() {

    Vehiculo* coches;
    int numVehiculos, cocheBarato;
    string marca, modelo;
    float precio;

    cout << "Digite el número de vehículos: ";
    cin >> numVehiculos;

    coches = new Vehiculo[numVehiculos]; // Arreglo de objetos

    for (int i = 0; i < numVehiculos; i++) {
        cin.ignore();
        cout << "Digite los datos del vehículo " << i + 1 << ": " << endl;
        cout << "Marca: ";
        getline(cin, marca);
        cout << "Modelo: ";
        getline(cin, modelo);
        cout << "Precio: ";
        cin >> precio;

        coches[i] = Vehiculo(marca, modelo, precio);
    }

    cocheBarato = Vehiculo::indiceMasBarato(coches, numVehiculos);

    cout << "\nEl vehículo más barato es: " << endl;
    (coches+cocheBarato)->mostrarDatos();
    // coches[cocheBarato].mostrarDatos();

    delete[] coches;

    system("pause");
    return 0;
}