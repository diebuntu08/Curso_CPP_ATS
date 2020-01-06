/* Cadenas de caracteres
 * Hacer un programa que determine si una palabra es palíndroma.
*/

#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <string.h>

using namespace std;

string convertToString(char* a, int size) {
    string s(a);
    return s;
}

int main() {

    char palabra[20];
    
    cout << "Digite una palabra: ";
    cin.getline(palabra, 20, '\n');
    
    string palabra2 = convertToString(palabra, 20);
    string palabra3 = convertToString(palabra, 20);
    
    reverse(palabra3.begin(), palabra3.end()); // Invirtiendo a palabra2
    
    if (palabra2.compare(palabra3) == 0) {
        cout << palabra << " es un palíndromo.";
    } else {
        cout << palabra << " NO es un palíndromo.";
    }

    //system("pause");
    return 0;
}
