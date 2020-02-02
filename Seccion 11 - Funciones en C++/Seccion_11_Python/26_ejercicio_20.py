
import typing

def fibonacci(n: int) -> int:
    if n < 2:
        return n
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)

nElementos = 0

while (nElementos <= 0):
    nElementos = int(input('Digite el número de elementos: '))
    
    if nElementos <= 0:
        print('El número de elementos debe ser un entero positivo, no cero!!')

print('\nSerie Fibonacci para n = {}'.format(nElementos))

for i in range(nElementos):
    print('{}, '.format(fibonacci(i)), end='')

print()