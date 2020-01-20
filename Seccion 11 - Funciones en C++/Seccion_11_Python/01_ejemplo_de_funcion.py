
def encontrar_max(x, y):
    if x > y:
        num_max = x
    else:
        num_max = y
    
    return num_max

n1 = int(input('Digite el primer número: '))
n2 = int(input('Digite el segundo número: '))

mayor = encontrar_max(n1, n2)

print('El mayor de los dos números es: {}'.format(mayor))