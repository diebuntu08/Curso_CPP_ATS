/*
* 3. Realizar un programa que lea un arreglo de estructuras, los datos de N empleados
* de la empresa y que imprima los datos del empleado con mayor y menor salario.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Empleado {
    char nombre[20];
    float salario;
} emp[100];


int main() {

    int n_empleados, posM = 0, posm = 0;
    float mayor = 0, menor = 99999999;

    cout << "Digite el número de empleados: ";
    cin >> n_empleados;

    for (int i = 0; i < n_empleados; i++) {
        cin.ignore();
        cout << i + 1 << ". Digite el nombre del empleado: ";
        cin.getline(emp[i].nombre, 20, '\n');
        cout << i + 1 << ". Digite el salario del empleado: ";
        cin >> emp[i].salario;

        // Determinando empleado de mayor salario
        if (emp[i].salario > mayor) {
            mayor = emp[i].salario;
            posM = i;
        }

        // Determinando empleado de menor salario
        if (emp[i].salario < menor) {
            menor = emp[i].salario;
            posm = i;
        }

        cout << "\n";
    }

    cout << "\n.:Datos del empleado con mayor salario:.\n";
    cout << "Nombre: " << emp[posM].nombre << endl;
    cout << "Salario: " << emp[posM].salario << endl;

    cout << "\n.:Datos del empleado con menor salario:.\n";
    cout << "Nombre: " << emp[posm].nombre << endl;
    cout << "Salario: " << emp[posm].salario << endl;

    system("pause");
    return 0;
}