/*
 * 4. Escriba un programa que tome cada 4 horas la temperatura exterior,
 * leyéndola durante un periodo de 24 horas. Es decir, debe leer 6
 * temperaturas. Calcule la temperatura media del día, la temperatura más
 * alta y la más baja.
*/

#include <iostream>

using namespace std;

int main() {

    float temperatura, mayor=0, menor=999;
    float suma_total=0, promedio=0;
    
    for (int i = 0; i <= 24; i += 4) {
        cout << "Digite la temperatura de la hora " << i << ": ";
        cin >> temperatura;
        
        suma_total += temperatura;
        
        if (temperatura > mayor) {
            mayor = temperatura;
        }
        
        if (temperatura < menor) {
            menor = temperatura;
        }
    }
    
    promedio = suma_total / 6;
    
    cout << "\nTemperatura promedio: " << promedio << endl;
    cout << "\nTemperatura más alta: " << mayor << endl;
    cout << "\nTemperatura más baja: " << menor << endl;
    
    return 0;
}
