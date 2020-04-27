// Contenedores asociativos - Multimap

#include <iostream>
#include <iterator>
#include <algorithm>
#include <map> // Para map y multimap

using namespace std;

typedef pair<int, string> par;

int main() {

    multimap<int, string> valores;

    // Insertar valores
    valores.insert(par(3, "Diego"));
    valores.insert(par(1, "Melina"));
    valores.insert(par(5, "Samantha"));
    valores.insert(par(2, "Luis"));

    // Mostrar en pantalla el multimap
    multimap<int, string>::iterator i;

    for (i = valores.begin(); i != valores.end(); i++) {
        cout << "Clave " << i->first << " | Valor: " << i->second << endl;
    }
    cout << endl;

    // Insertamos pares con claves repetidas
    valores.insert(par(1, "Karla"));
    valores.insert(par(5, "Paola"));
    valores.insert(par(5, "Fernando"));

    for (i = valores.begin(); i != valores.end(); i++) {
        cout << "Clave " << i->first << " | Valor: " << i->second << endl;
    }
    cout << endl;

    // Conteo de las claves
    int clave = 1;
    cout << "\nConteo de la clave " << clave << ": " << valores.count(clave) << endl;
    for (i = valores.lower_bound(clave); i != valores.upper_bound(clave); i++) {
        cout << i->second << " | ";
    }
    cout << endl;

    return 0;
}