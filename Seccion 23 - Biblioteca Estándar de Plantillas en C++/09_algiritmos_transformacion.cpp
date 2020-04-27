// Algoritmos - Transformación

#include <iostream>
#include <vector>
#include<iterator>
#include <algorithm>

using namespace std;

// Función para pasar las letras a mayúscula
void mayusculas(char &letra) {
    if (letra >= 'a' && letra <= 'z') {
        letra = letra - ('a' - 'A');
    }
}

// Función unaria para determinar si una letra es una vocal
char vocales(char letra) {
    return (letra == 'A'|| letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') ? letra: '-';
}

int main() {

    vector<char> letras;

    // Generamos letras para el vector
    for (int i = 0; i < 10; i++) {
        letras.push_back('a' + i);
    }

    copy(letras.begin(), letras.end(), ostream_iterator<char> (cout, " | "));

    cout << endl;

    // Desordenamos el vector letras
    random_shuffle(letras.begin(), letras.end());

    copy(letras.begin(), letras.end(), ostream_iterator<char> (cout, " | "));

    cout << endl;

    // Pasamos a mayúsculas las letras del vector
    for_each(letras.begin(), letras.end(), mayusculas);

    copy(letras.begin(), letras.end(), ostream_iterator<char> (cout, " | "));

    cout << endl;

    // Imprimir solo las vocales
    transform(letras.begin(), letras.end(), ostream_iterator<char> (cout, " | "), vocales);

    return 0;
}