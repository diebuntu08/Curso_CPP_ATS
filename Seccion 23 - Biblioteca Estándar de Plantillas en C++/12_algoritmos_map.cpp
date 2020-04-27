// Contenedores asociativos - Map

#include <iostream>
#include <iterator>
#include <algorithm>
#include <map> // Para map y multimap

using namespace std;

typedef pair<int, string> par;

int main() {

    map<int, string> valores; // Creamos un mapa <clave, valor>

    // Insertar elementos en el map
    valores.insert(par(5, "Diego"));
    valores.insert(par(2, "Samantha"));
    valores.insert(par(1, "Melina"));
    valores.insert(par(3, "Estefany"));

    // Mostrar el map en pantalla
    map<int, string>::iterator i;

    for (i = valores.begin(); i != valores.end(); i++) {
        cout << "Clave: " << i->first << " | Valor: " << i->second << endl;
    }
    cout << endl;

    // Insertar claves duplicadas
    valores.insert(par(1, "Luis"));

    for (i = valores.begin(); i != valores.end(); i++) {
        cout << "Clave: " << i->first << " | Valor: " << i->second << endl;
    }
    cout << endl;

    // Modificar el valor de una clave existente
    valores[1] = "Luis";
    valores[8] = "María";

    for (i = valores.begin(); i != valores.end(); i++) {
        cout << "Clave: " << i->first << " | Valor: " << i->second << endl;
    }
    cout << endl;

    // Buscar un elemento en el map
    i = valores.find(2);

    if (i != valores.end()) {
        cout << "\nEl elemento " << i->first << " ha sido encontrado" << endl;
    } else {
        cout << "\nEl elemento no ha sido encontrado" << endl;
    }

    valores.erase(1);

    for (i = valores.begin(); i != valores.end(); i++) {
        cout << "Clave: " << i->first << " | Valor: " << i->second << endl;
    }
    cout << endl;

    return 0;
}