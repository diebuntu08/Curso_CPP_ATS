
import 'dart:io';

class Etapa {
    int horas;
    int minutos;
    int segundos;
    
    Etapa({this.horas = 0, this.minutos = 0, this.segundos = 0});
}

void main() {
    
    int n_etapas, horasT = 0, minutosT = 0, segundosT = 0;
    int H, M, S;
    
    stdout.writeln('Digite el número de etapas: ');
    n_etapas = int.parse(stdin.readLineSync());
    
    List<Etapa> etapas = new List(n_etapas);
    
    for (int i = 0; i < n_etapas; i++) {
        print('\nEtapa ${i + 1}: \n');
        stdout.writeln('Horas: ');
        H = int.parse(stdin.readLineSync());
        stdout.writeln('Minutos: ');
        M = int.parse(stdin.readLineSync());
        stdout.writeln('Segundos: ');
        S = int.parse(stdin.readLineSync());
        
        etapas[i] = new Etapa(horas: H, minutos: M, segundos: S);
        
        horasT += etapas[i].horas;
        minutosT += etapas[i].minutos;
        
        if (minutosT >= 60) {
            minutosT -= 60;
            horasT++;
        }
        
        segundosT += etapas[i].segundos;
        
        if (segundosT >= 60) {
            segundosT -= 60;
            minutosT++;
        }
    }
    
    print('Tiempo total empleado: $horasT:$minutosT:$segundosT');
}
