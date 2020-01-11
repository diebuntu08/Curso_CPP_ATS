/*
 * 14. En una clase de 5 alumnos se han realizado 3 exámenes y se requiere
 * determinar el número de:
 *      a) Alumnos que aprobaron todos los exámenes.
 *      b) Alumnos que aprobaron al menos un examen.
 *      C) Alumnos que aprobaron únicamente el último examen.
 * Realice un programa que permita la lectura de los datos y el cálculo de
 * las estadísticas.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    float examen1, examen2, examen3;
    int aprobados_todos = 0, aprobado_uno = 0, aprobado_ultimo = 0;
    
    for (int i = 1; i <= 5; i++) {
        cout << i << ". Digite la nota del primer examen: "; cin >> examen1;
        cout << i << ". Digite la nota del segundo examen: "; cin >> examen2;
        cout << i << ". Digite la nota del tercer examen: "; cin >> examen3;
        cout << "\n";
        
        if ((examen1 > 10.5) && (examen2 > 10.5) && (examen3 > 10.5)) {
            aprobados_todos++;
        }
        
        if ((examen1 > 10.5) || (examen2 > 10.5) || (examen3 > 10.5)) {
            aprobado_uno++;
        }
        
        if ((examen1 < 10.5) && (examen2 < 10.5) && (examen3 > 10.5)) {
            aprobado_ultimo++;
        }
    }
    
    cout << "\nAlumnos que aprobaron todos los exámenes: " << aprobados_todos << endl;
    cout << "\nAlumnos que aprobaron un examen: " << aprobado_uno << endl;
    cout << "\nAlumnos que aprobaron únicamente el último examen: " << aprobado_ultimo << endl;
    
    return 0;
}
