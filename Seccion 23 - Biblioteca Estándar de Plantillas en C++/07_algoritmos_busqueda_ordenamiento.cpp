// Algoritmos - Búsqueda y ordenamiento

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cstdlib>

using namespace std;

// Función para generar valores aleatorios
int numerosAleatorios() {
    return rand() % 30;
}

// Función lógica para calcular si un número es par
template <class T>
bool esPar(T valor) {
    return ((valor % 2) == 0);
}

int main() {

    vector<int> valores(10);

    // Generamos números aleatorios y los guardamos dentro del vector
    generate(valores.begin(), valores.end(), numerosAleatorios);

    // Mostrar en pantalla el vector
    copy(valores.begin(), valores.end(), ostream_iterator<int> (cout, " | "));
    cout << "\n\n";

    // Creamos un nuevo vector para almacenar los elementos pares
    vector<int> pares;

    // Iterador para recorrer el vector valores
    vector<int>::iterator i = valores.begin();

    while ((i = find_if(i, valores.end(), esPar<int>)) != valores.end()) {
        pares.push_back(*i);
        i++;
    }

    // Ordenar los números pares
    sort(pares.begin(), pares.end());

    // Mostramos el vector pares en pantalla
    cout << "Arreglo de números pares:" << endl;
    copy(pares.begin(), pares.end(), ostream_iterator<int> (cout, " | "));
    cout << "\n";


    return 0;
}