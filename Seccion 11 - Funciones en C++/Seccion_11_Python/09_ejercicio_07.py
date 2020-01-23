
num1 = 10
num2 = 15

def intercambiar():
    global num1
    global num2

    aux = num1
    num1 = num2
    num2 = aux

print('El valor de num1 es: {}'.format(num1))
print('El valor de num2 es: {}'.format(num2))

intercambiar()

print('\nEl nuevo valor de num1 es: {}'.format(num1))
print('El nuevo valor de num2 es: {}'.format(num2))