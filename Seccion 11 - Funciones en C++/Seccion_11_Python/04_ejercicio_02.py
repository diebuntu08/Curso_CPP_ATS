
numero = 0

def pedir_datos():
    global numero
    numero = float(input('Digite un número: '))

def al_cuadrado(n):
    elevacion = n * n

    print('El número {} al cuadrado es: {}'.format(n, elevacion))

pedir_datos()
al_cuadrado(numero)