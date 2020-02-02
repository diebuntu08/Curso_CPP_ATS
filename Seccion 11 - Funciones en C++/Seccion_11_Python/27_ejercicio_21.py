
import typing

base: int = 0
exponente: int = 0

def potencia(x: int, y: int) -> int:
    if y == 0:
        return 1
    elif y == 1:
        return x
    else:
        return x * potencia(x, y - 1)

base = int(input('Digite la base: '))
exponente = int(input('Digite el exponente: '))

print('\nLa potencia de {}^{} es: {}'.format(base, exponente, potencia(base, exponente)))