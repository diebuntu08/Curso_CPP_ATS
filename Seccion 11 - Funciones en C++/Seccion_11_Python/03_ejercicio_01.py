
num1 = 0
num2 = 0

def pedir_datos():
    global num1
    global num2
    num1 = float(input('Digite un número: '))
    num2 = float(input('Digite otro número: '))

def mult(x, y):
    multiplicacion = x * y

    print('La multiplicación es: {}'.format(multiplicacion))

pedir_datos()
mult(num1, num2)