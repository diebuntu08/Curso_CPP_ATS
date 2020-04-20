
import math

def mezcla(a, izquierda, medio, derecha):
    aux = []
    i = izquierda
    k = medio + 1
    
    # Ordenamos los elementos en el arreglo aux
    while i <= medio and k <= derecha:
        if a[i] < a[k]:
            aux.append(a[i])
            i += 1
        else:
            aux.append(a[k])
            k += 1
    
    # Copiamos los elementos de la lista que no quedó vacía
    while i <= medio:
        aux.append(a[i])
        i += 1
    
    while k <= derecha:
        aux.append(a[k])
        k += 1
    
    # Copiamos los elementos del arreglo aux[] hacia a[]
    # Iguale el arreglo original a esta función para reemplazarlo
    return aux

def merge_sort(a, primero, ultimo):
    
    if primero < ultimo:
        central = math.floor((primero + ultimo) / 2)
        merge_sort(a, primero, central)
        merge_sort(a, central+1, ultimo)
        a = mezcla(a, primero, central, ultimo)
    
    return a

def main():
    
    arreglo = [5,7,87,1,3,9]
    
    arreglo = merge_sort(arreglo, 0, 5)
    
    print(f"Arreglo ordenado: {arreglo}")

if __name__ == "__main__":
    main()