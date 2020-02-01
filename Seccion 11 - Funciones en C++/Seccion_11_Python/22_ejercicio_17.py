
class Complejo:
    real = 0.0
    imaginaria = 0.0
    
    def __init__(self):
        pass

z1 = Complejo()
z2 = Complejo()

def pedir_datos():
    global z1, z2
    
    print('Digite los datos para el primer número complejo: ')
    z1.real = float(input('Parte Real: '))
    z1.imaginaria = float(input('Parte Imaginaria: '))
    
    print('Digite los datos para el segundo número complejo: ')
    z2.real = float(input('Parte Real: '))
    z2.imaginaria = float(input('Parte Imaginaria: '))

def suma(z1, z2):
    z = Complejo()
    
    z.real = z1.real + z2.real
    z.imaginaria = z1.imaginaria + z2.imaginaria
    
    return z

def muestra(x):
    print('\n\nEl resultado de la suma es: {} , {}'.format(x.real, x.imaginaria))

pedir_datos()

x = suma(z1, z2)

muestra(x)