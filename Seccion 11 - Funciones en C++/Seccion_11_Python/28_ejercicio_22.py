
import typing

def escribe_numeros(ini: int, fin: int):
    if ini == fin:
        return ini
    else:
        return escribe_numeros(ini, fin - 1)

def main():
    
    ini: int = 0
    fin: int = 0
    
    ini = int(input('Digite un inicio: '))
    fin = int(input('Digite un final: '))
    
    for i in range(ini, fin + 1):
        print('{}, '.format(escribe_numeros(i, fin)), end='')
    
    print()

if __name__ == '__main__':
    main()