/*
 * 13. Hacer un programa que realice la serie Fibonacci -> 1 1 2 3 5 8 13 ... n.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int n, x = 0, y = 1, z = 1;
    
    cout << "Digite el número de elementos: ";
    cin >> n;
    
    cout << z << " ";
    
    for (int i = 1; i <= n; i++) {
        z = x + y;
        cout << z << " ";
        x = y;
        y = z;
    }
    
    cout << "\n";
    system("pause");
    
    return 0;
}
