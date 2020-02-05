
nElementos: int
elementos = []

def pedir_datos():
    global nElementos, elementos
    
    nElementos = int(input('Digite el número de elementos: '))
    
    for i in range(nElementos):
        elementos.append(int(input('Digite un número: ')))

def ordenar_arreglo():
    global elementos
    aux: int
    
    for i in range(nElementos):
        for j in range(nElementos - 1):
            if elementos[j] > elementos[j+1]:
                aux = elementos[j]
                elementos[j] = elementos[j+1]
                elementos[j+1] = aux

def mostrar_arreglo():
    print('\n\nMostrando arreglo ordenado:\n')
    
    for i in range(nElementos):
        print('{}, '.format(elementos[i]), end='')
    
    print()

def main():
    
    pedir_datos()
    
    ordenar_arreglo()
    
    mostrar_arreglo()

if __name__ == '__main__':
    main()