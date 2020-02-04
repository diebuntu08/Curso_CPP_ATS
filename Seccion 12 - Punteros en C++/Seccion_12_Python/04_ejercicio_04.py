
def main():
    
    numeros: list = []
    nElementos: int
    menor: int = 99999
    
    nElementos = int(input('Digite el número de elementos: '))
    
    for i in range(nElementos):
        numeros.append(int(input('Digite un número[{}]: '.format(i))))
    
    for val in numeros:
        if val < menor:
            menor = val
    
    print('El menor elemento de numeros es: {}'.format(menor))
    
if __name__ == '__main__':
    main()