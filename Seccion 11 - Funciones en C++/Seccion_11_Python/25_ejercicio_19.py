
import typing

def suma(n: int):
    if n == 1:
        return 1
    else:
        return n + suma(n - 1)

nElementos: int = 0

while nElementos <= 0:
    nElementos = int(input('Digite el número de elementos: '))
    if nElementos <= 0:
        print('\nEl número de elementos debe ser un entero positivo, no cero!!')

print('\nLa suma es: {}'.format(suma(nElementos)))