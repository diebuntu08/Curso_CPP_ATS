
numero = 0.0

def pedir_datos():
    global numero
    numero = float(input('Digite un número de punto flotante: '))

def parte_fraccionaria(r):
    entero = int(r)

    resultado = r - entero

    return resultado

pedir_datos()
print('La parte fraccionaria del número {} es: {}'.format(numero, parte_fraccionaria(numero)))