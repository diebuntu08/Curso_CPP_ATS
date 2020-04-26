// Contenedor lineal - List

#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> datos;

    // Agregar elementos
    datos.push_back(5); // Agrega elementos por el final
    datos.push_back(1);
    datos.push_back(6);

    datos.push_front(2); // Agregar elementos por el principio
    datos.push_front(7);

    // Ordenar los elementos
    datos.sort();

    // 1 2 5 6 7
    list<int>::iterator i;

    i = datos.begin();

    cout << "| ";
    while (i != datos.end()) {
        cout << *i << " | ";
        i++;
    }

    cout << endl;

    // Eliminar elementos
    datos.pop_back();
    datos.pop_front();


    i = datos.begin();

    cout << "| ";
    while (i != datos.end()) {
        cout << *i << " | ";
        i++;
    }

    cout << endl;
    
    return 0;
}