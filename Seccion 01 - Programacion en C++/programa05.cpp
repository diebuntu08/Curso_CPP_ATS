// Entrada y salida de datos pedidos al usuario

#include <iostream>

using namespace std;

int main() {

    int edad;
    char sexo[10];
    float altura;

    cout << "Digite su edad: "; cin >> edad;
    cout << "Digite su sexo: "; cin >> sexo;
    cout << "Digite su altura en metros: "; cin >> altura;

    cout << "\nEdad: " << edad << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Altura en m: " << altura << endl;
    
    //**************************************
    
    float precio, iva, precio_final;
    
    cout << "Digite el precio del producto: $"; cin >> precio;
    
    iva = precio * 0.21;
    precio_final = precio + iva;
    
    cout << "\nEl precio final del producto es: $" << precio_final << endl;

    return 0;
}
