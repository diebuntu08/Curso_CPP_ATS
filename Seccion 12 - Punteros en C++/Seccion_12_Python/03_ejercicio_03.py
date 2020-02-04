
def main():
    numeros: list = []
    
    for i in range(10):
        valor = int(input('Digite un número: '))
        numeros.append(valor)
        
    for val in numeros:
        if val % 2 == 0:
            print('El número {} es par.'.format(val))

if __name__ == '__main__':
    main()



