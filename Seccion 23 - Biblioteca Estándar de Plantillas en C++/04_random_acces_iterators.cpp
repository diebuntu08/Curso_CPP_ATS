// Iteradores - Random acces iterators

#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

// Función template para mostrar los elementos de un contenedor
template <class Iter>
void mostrarEnPantalla(Iter inicio, Iter final) {
    cout << "| ";
    while (inicio != final) {
        cout << *inicio << " | ";
        inicio++;
    }
    cout << endl;
}

int main() {

    vector<char> letras(10); // Creando el vector de 10 elementos char

    // Agregando elementos al vector
    for (int i = 0; i < 10; i++) {
        letras[i] = 'A' + (rand() % 26);
    }

    // Visualizar los elementos del vector
    mostrarEnPantalla(letras.begin(), letras.end());

    // Visualizar los elementos del vector al revés
    mostrarEnPantalla(letras.rbegin(), letras.rend());

    // Visualizar los elementos del medio del vector
    mostrarEnPantalla(letras.begin()+1, letras.end()-1);

    return 0;
}