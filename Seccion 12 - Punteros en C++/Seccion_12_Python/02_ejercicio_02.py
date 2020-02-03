
def main():
    
    numero: int
    cont: int = 0
    
    numero = int(input('Digite un número: '))
    
    for i in range(1, numero):
        if numero % i == 0:
           cont += 1
    
    if cont > 2:
        print('El número {} no es primo.'.format(numero))
    else:
        print('El número {} es primo.'.format(numero))
        
if __name__ == '__main__':
    main()