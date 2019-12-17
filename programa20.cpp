
#include <iostream>

using namespace std;

int main() {

    int num1, num2, num3, num4;
    
    cout << "Escribe tres números enteros: ";
    cin >> num1 >> num2 >> num3;
    
    cout << "Escribe un cuarto número para comparar: ";
    cin >> num4;
    
    if (num4 == num1 || num4 == num2 || num4 == num3) {
        cout << "El número coincide con al menos uno de los tres números anteriores." << endl;
    } else {
        cout << "El cuarto número no coincide con los anteriores." << endl;
    }
    
    return 0;
}
