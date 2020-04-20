
import math

def busqueda_binaria(arreglo, dato, inferior, superior):
    
    if inferior > superior:
        return -1
    else:
        mitad = math.floor((inferior + superior) / 2)
        
        if dato == arreglo[mitad]:
            return mitad
        elif dato > arreglo[mitad]:
            return busqueda_binaria(arreglo, dato, mitad+1, superior)
        else:
            return busqueda_binaria(arreglo, dato, inferior, mitad-1)

def main():
    
    arreglo = [3,4,5,8,9,10]
    dato = 7
    
    retorno = busqueda_binaria(arreglo, dato, 0, 5)
    
    if retorno == -1:
        print("\nEl dato no ha sido encontrado.")
    else:
        print(f"\nEl dato ha sido encontrado en la posición: {retorno}")

if __name__ == "__main__":
    main()