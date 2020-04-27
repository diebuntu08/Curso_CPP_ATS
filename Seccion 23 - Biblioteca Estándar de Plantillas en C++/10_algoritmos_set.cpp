// Contenedores asociativos - Set y Multiset

#include <iostream>
#include <iterator>
#include <algorithm>
#include <set> // Para set y multiset

using namespace std;

int main() {

    set<int> valores; // Creando un conjunto de datos

    // Insertamos elementos
    valores.insert(5);
    valores.insert(3);
    valores.insert(10);
    valores.insert(1);
    valores.insert(15);

    // Mostrar nuestro set en pantalla
    copy(valores.begin(), valores.end(), ostream_iterator<int> (cout, " | "));
    cout << endl;

    // Si agregamos elementos que ya están en el set, los ignora
    valores.insert(3);
    valores.insert(10);

    // Mostrar nuestro set en pantalla
    copy(valores.begin(), valores.end(), ostream_iterator<int> (cout, " | "));
    cout << endl;

    // Búsqueda de un elemento
    set<int>::iterator i = valores.find(2);

    if (i != valores.end()) {
        cout << "\nEl elemento " << *i << " ha sido encontrado" << endl;
    } else {
        cout << "\nEl elemento no ha sido encontrado" << endl;
    }

    // Eliminar un elemento
    valores.erase(1);

    // Mostrar nuestro set en pantalla
    copy(valores.begin(), valores.end(), ostream_iterator<int> (cout, " | "));
    cout << endl;

    return 0;
}