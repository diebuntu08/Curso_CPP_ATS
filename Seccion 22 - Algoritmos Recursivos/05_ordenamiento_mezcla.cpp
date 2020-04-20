// Ordenamiento por Mezclas - MergeSort

#include <iostream>

using namespace std;

void mezcla(int a[], int izquierda, int medio, int derecha) {
    int* aux;
    int i, k, z;
    aux = new int[derecha-izquierda+1];
    i = z = izquierda;
    k = medio + 1;

    // Ordenamos los elementos en el arreglo aux[]
    while (i <= medio && k <= derecha) {
        if (a[i] <= a[k]) {
            aux[z++] = a[i++];
        } else {
            aux[z++] = a[k++];
        }
    }

    // Copiamos los elementos de la lista que no quedó vacía
    while (i <= medio) {
        aux[z++] = a[i++];
    }

    while (k <= derecha) {
        aux[z++] = a[k++];
    }

    // Copiamos los elementos del arreglo aux[] hacia a[]
    for (int i = izquierda; i <= derecha; i++) {
        a[i] = aux[i];
    }

    delete aux;
}

void mergeSort(int a[], int primero, int ultimo) {
    int central;

    if (primero < ultimo) {
        central = (primero + ultimo) / 2;
        mergeSort(a, primero, central); // Ordenamos la sublista Izq
        mergeSort(a, central+1, ultimo); // Ordenamos la sublista Der
        mezcla(a, primero, central, ultimo); // Mezclar los elementos
    }
}

int main() {

    int arreglo[] = {5,7,87,1,3,9};

    mergeSort(arreglo, 0, 5);

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < 6; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}