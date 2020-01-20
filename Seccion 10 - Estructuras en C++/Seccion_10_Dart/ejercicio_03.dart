
import 'dart:io';

class Empleado {
    String nombre;
    double salario;
    
    Empleado({this.nombre = 'sin nombre', this.salario = 0});
}

void main() {
    
    stdout.writeln('Digite el número de empleados: ');
    int n_empleados = int.parse(stdin.readLineSync());
    
    List<Empleado> empleados = new List(n_empleados);
    
    for (int i = 0; i < n_empleados; i++) {
        stdout.writeln('${i + 1}. Digite el nombre del empleado: ');
        String nombre = stdin.readLineSync();
        stdout.writeln('${i + 1}. Digite el salario del empleado: ');
        double salario = double.parse(stdin.readLineSync());
        
        var empleado = new Empleado(nombre: nombre, salario: salario);
        
        empleados[i] = empleado;
    }
    
    int posM = 0;
    int posm = 0;
    double menor = 9999999.0, mayor = 0.0;
    
    for (int i = 0; i < n_empleados; i++) {
        if (empleados[i].salario > mayor) {
            mayor = empleados[i].salario;
            posM = i;
        }
        
        if (empleados[i].salario < menor) {
            menor = empleados[i].salario;
            posm = i;
        }
    }
    
    print('\n.:Datos del empleado con mayor salario:.\n');
    print('Nombre: ${empleados[posM].nombre}\n');
    print('Salario: ${empleados[posM].salario}');
    
    print('\n.:Datos del empleado con menor salario:.\n');
    print('Nombre: ${empleados[posm].nombre}\n');
    print('Salario: ${empleados[posm].salario}');
}
