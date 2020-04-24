// Resolviendo el problema de las N-Reinas

#include <iostream>

using namespace std;

// Prototipos de funciones
void ponerReina(int, bool&);
bool valido(int);
void mostrarTablero();

const int N = 8;
int reinas[N];

int main() {

    bool solucion;

    ponerReina(0, solucion);

    if (solucion) {
        cout << "Existe combinación de reinas!!" << endl;
        mostrarTablero();
    } else {
        cout << "NO existe combinación de reinas!!" << endl;
    }

    return 0;
}

void ponerReina(int i, bool &solucion) {
    int k = 0; // Inicializamos el conteo de movimientos
    solucion = false;

    do {
        reinas[i] = k; // Copiamos la reina i  en la fila k
        k++;

        mostrarTablero();

        if (valido(i)) {
            if (i < N - 1) {
                ponerReina(i + 1, solucion);

                // Vuelta atrás
                if (!solucion) {
                    reinas[i] = 0;
                }
            } else {
                // Ya agregamos todas las reinas
                solucion = true;
            }
        }
    } while (!solucion && k < N);
    
}

bool valido(int i) {
    /*
    Comprobar si la reina de la columna i no se amenaza
    con ninguna reina ya puesta
    */
    
    bool v = true;

    for (int r = 0; r < i; r++) {
        v = v && (reinas[i] != reinas[r]); // Comprobar si la fila está vacía
        v = v && ((reinas[i]-i) != (reinas[r]-r)); // Diagonal 1
        v = v && ((reinas[i]+i) != (reinas[r]+r)); // Diagonal 2
    }

    return v;
}

void mostrarTablero() {
    int tablero[N][N];

    // Asignamos los valores del tablero a 0
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            tablero[i][j] = 0;
        }
    }

    cout << "Mostrando arreglo" << endl;
    for (int i = 0; i < N; i++) {
        cout << reinas[i] << "|";
    }

    cout << endl << endl;

    // Ahora asignamos el valor del arreglo hacia el tablero
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            tablero[reinas[j]][j] = 1;
        }
    }

    cout << "\nMostrando el tablero:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "|";
        for (int j = 0; j < N; j++) {
            cout << tablero[i][j] << "|";
        }
        cout << endl;
    }
    cout << endl;
}