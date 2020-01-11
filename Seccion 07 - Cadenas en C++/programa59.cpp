// Copiar el contenido de una cadena a otra - Función strcpy()

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {

    char nombre[] = "Diego";
    char nombre2[20];
    
    strcpy(nombre2, nombre);
    
    cout << nombre2 << endl;

    system("pause");
    return 0;
}
