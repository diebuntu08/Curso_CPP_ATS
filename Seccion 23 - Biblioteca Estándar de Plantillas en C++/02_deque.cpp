// Contenedor lineal - Deque

#include <iostream>
#include <deque>

using namespace std;

int main() {

    deque<char> letras;

    letras.push_front('C'); // Agregamos elemento por el principio
    letras.push_front('B');
    letras.push_front('A');

    letras.push_back('D'); // Agregamos elemento al final
    letras.push_back('E');
    letras.push_back('F');

    cout << "| ";
    for (int i = 0; i < letras.size(); i++) {
        cout << letras[i] << " | ";
    }

    cout << endl;

    letras.pop_front(); // Elimina un elemento del frente
    letras.pop_back(); // Elimina un elemento del final

    cout << "| ";
    for (int i = 0; i < letras.size(); i++) {
        cout << letras[i] << " | ";
    }

    cout << endl;

    return 0;
}