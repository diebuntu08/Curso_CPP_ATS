/*La sentencia while:
 * 
 *      while (expresión lógica) {
 *            conjunto de instrucciones;
 *      }
 * */

#include <iostream>

using namespace std;

int main() {

    int i;
    
    i = 100;
    
    while (i >= 1) {
        cout << i << endl;
        i--;
    }
    
    return 0;
}
