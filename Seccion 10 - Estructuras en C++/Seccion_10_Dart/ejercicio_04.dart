
import 'dart:io';

class Atleta {
    String nombre;
    String pais;
    int numero_medallas;
    
    Atleta({this.nombre = 'Sin nombre', this.pais = 'Sin pais', this.numero_medallas = 0});
}

void main() {
    
    int n_atletas, mayor = 0, pos;
    
    stdout.writeln('Digite el número de atletas: ');
    n_atletas = int.parse(stdin.readLineSync());
    
    List<Atleta> atletas = new List(n_atletas);
    
    for (int i = 0; i < n_atletas; i++) {
        stdout.writeln('${i + 1}. Digite el nombre del atleta: ');
        String nombre = stdin.readLineSync();
        stdout.writeln('${i + 1}. Digite el país: ');
        String pais = stdin.readLineSync();
        stdout.writeln('${i + 1}. Digite el número de medallas: ');
        int n_medallas = int.parse(stdin.readLineSync());
        print('\n');
        
        var atleta = new Atleta(nombre: nombre, pais: pais, numero_medallas: n_medallas);
        
        atletas[i] = atleta;
    }
    
    for (int i = 0; i < atletas.length; i++) {
        if (atletas[i].numero_medallas > mayor) {
            mayor = atletas[i].numero_medallas;
            pos = i;
        }
    }
    
    // Imprimiendo el atleta con mayor numero de medallas
    print('Nombre: ${atletas[pos].nombre}');
    print('País: ${atletas[pos].pais}');
}
