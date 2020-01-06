// Invertir una cadena - Función strrev()

#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

int main() {

    string cad = "Diego";
    
    reverse(cad.begin(), cad.end());
    
    cout << cad << endl;

    system("pause");
    return 0;
}
