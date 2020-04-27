// Algoritmos - Matemáticos

#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric> // Para uilizar su función accumulate()

using namespace std;

// Función lógica para comprobar si un número es positivo
template <class T>
bool esPositivo(T valor) {
    return (valor >= 0);
}

int main() {

    vector<float> numeros;

    // Abrimos el archivo en modo lectura
    ifstream archivo("numeros.txt", ios::in);

    // Copiamos todos los números del archivo al vector numeros
    copy(istream_iterator<float>(archivo), istream_iterator<float>(), back_inserter(numeros));

    // Calculamos el máximo y mínimo de los elementos del vector
    cout << "\nMáximo: " << *max_element(numeros.begin(), numeros.end()) << endl;
    cout << "Mínimo: " << *min_element(numeros.begin(), numeros.end()) << endl;

    // Valor promedio de todos los elementos del vector

    cout << "\nPromedio: "
    << accumulate(numeros.begin(), numeros.end(), 0.0) / numeros.size() << endl;

    // Vamos a calcular el conteo de los números positivos
    cout << "Cantidad de números positivos: "
    <<  count_if(numeros.begin(), numeros.end(), esPositivo<float>) << endl;

    return 0;
}