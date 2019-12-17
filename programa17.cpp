
#include <iostream>

using namespace std;

int main() {

    char letra;
    
    cout << "Digite una letra: ";
    cin >> letra;
    
    switch (letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout << "Es una vocal minúscula"; break;
        default: cout << "NO es una vocal minúscula"; break;
    }
    
    return 0;
}
