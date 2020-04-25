// Contenedor lineal - Vector

#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> numeros; // Arreglo de enteros

    numeros.push_back(5); // Agrega elementos al final del arreglo
    numeros.push_back(10);
    numeros.push_back(1);
    numeros.push_back(15);
    numeros.push_back(20);
    
    // Mostrar los elementos del vector
    cout << "|";
    for (int i = 0; i < numeros.size(); i++) {
        cout << numeros[i] << "|";
    }

    cout << endl;


    // Determinando el número de elementos que va a tener el arreglo desde un inicio
    vector<int> numeros2(5);

    numeros2[0] = 5;
    numeros2[1] = 10;
    numeros2[2] = 1;
    numeros2[3] = 15;
    numeros2[4] = 20;

    cout << "\n|";
    for (int i = 0; i < numeros2.size(); i++) {
        cout << numeros2[i] << "|";
    }

    cout << endl;

    //numeros2.pop_back(); // Elimina el último elemento del arreglo
    numeros2.erase(numeros2.begin()+1, numeros2.begin()+3);

    cout << "\n|";
    for (int i = 0; i < numeros2.size(); i++) {
        cout << numeros2[i] << "|";
    }

    cout << endl;

    return 0;
}