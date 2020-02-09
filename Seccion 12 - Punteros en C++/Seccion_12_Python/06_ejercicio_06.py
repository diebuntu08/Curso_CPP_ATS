
nElementos: int
elementos: list = []

def pedir_datos():
    global nElementos, elementos
    
    nElementos = int(input('Digite el número de elementos: '))
    
    for i in range(nElementos):
        val = int(input('Digite un número[{}]: '.format(i)))
        elementos.append(val)

def buscar_elemento():
    dato: int
    i: int
    band: bool = False
    
    dato = int(input('Digite un número a buscar: '))
    
    i = 0
    while i < nElementos and band == False:
        if elementos[i] == dato:
            band = True
        
        i += 1
        
    if band == False:
        print('\nEl numero no se encuentra en el arreglo.')
    else:
        print('\nEl número sí se encuentra en el arreglo, posición: {}'.format(i - 1))

def main():
    
    pedir_datos()
    
    buscar_elemento()

if __name__ == '__main__':
    main()