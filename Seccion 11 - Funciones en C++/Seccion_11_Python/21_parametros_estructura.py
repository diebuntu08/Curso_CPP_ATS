
class Persona:
    nombre = ''
    edad = 0
    
    def __init__(self):
        pass

p1 = Persona()

def pedir_datos():
    global p1
    
    p1.nombre = input('Digite su nombre: ')
    p1.edad = int(input('Digite su edad: '))

def mostrar_datos(persona):
    print('\n\nNombre: {}'.format(persona.nombre))
    print('Edad: {}'.format(persona.edad))

pedir_datos()
mostrar_datos(p1)