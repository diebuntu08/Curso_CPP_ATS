// Contenedores asociativos - Set y Multiset

#include <iostream>
#include <iterator>
#include <algorithm>
#include <set> // Para set y multiset

using namespace std;

int main() {

    multiset<int> valores;

    // Insertar valores
    valores.insert(10);
    valores.insert(2);
    valores.insert(5);
    valores.insert(20);
    valores.insert(3);

    // Mostrar en pantalla el multiset
    copy(valores.begin(), valores.end(), ostream_iterator<int> (cout, " | "));
    cout << endl;

    // Insertar valores duplicados
    valores.insert(10);
    valores.insert(3);
    valores.insert(3);
    valores.insert(3);

    // Mostrar en pantalla el multiset
    copy(valores.begin(), valores.end(), ostream_iterator<int> (cout, " | "));
    cout << endl;

    // Buscar un elemento en el multiset
    multiset<int>::iterator i = valores.find(10);

    if (i != valores.end()) {
        cout << "\nEl elemento " << *i << " ha sido encontrado" << endl;
    } else {
        cout << "\nEl elemento no ha sido encontrado" << endl;
    }

    // Contar cuantas veces aparece un elemento
    cout << "\nEl número 3 aparece " << valores.count(3) << " veces en el multiset" << endl;

    // Eliminar un elemento del multiset
    valores.erase(3);

    // Mostrar en pantalla el multiset
    copy(valores.begin(), valores.end(), ostream_iterator<int> (cout, " | "));
    cout << endl;

    return 0;
}