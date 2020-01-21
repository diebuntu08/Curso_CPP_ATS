
def mostrar_ABS(numero):
    if numero < 0:
        numero = numero * -1
    
    print('El valor absoluto del número es: {}'.format(numero))

num1 = -4
num2 = -56.25

mostrar_ABS(num1)
mostrar_ABS(num2)