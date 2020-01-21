
numero = 1
exponente = 1

def pedir_datos():
    global numero, exponente
    numero = int(input('Digite el número: '))
    exponente = int(input('Digite el exponente: '))

def funpot(x, y):
    resultado = 1

    for i in range(y):
        resultado *= x;
    
    print('El resultado de {} elevado a {} es: {}'.format(x, y, resultado))

pedir_datos()
funpot(numero, exponente)