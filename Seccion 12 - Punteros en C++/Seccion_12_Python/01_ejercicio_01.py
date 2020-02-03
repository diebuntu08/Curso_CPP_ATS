
def main():
    
    numero: int
    
    numero = int(input('Digite un número: '))
    
    if numero % 2 == 0:
        print('El número {} es par.'.format(numero))
    else:
        print('El número {} es impar.'.format(numero))

if __name__ == '__main__':
    main()