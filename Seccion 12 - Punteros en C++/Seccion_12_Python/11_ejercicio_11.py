
class Alumno:
    nombre: str
    edad: int
    promedio: float
    
    def __init__(self, nombre, edad, promedio):
        self.nombre = nombre
        self.edad = edad
        self.promedio = promedio

alumnos = []

def pedir_datos():
    global alumnos
    
    for i in range(3):
        nombre = input('Digite su nombre: ')
        edad = int(input('Digite su edad: '))
        promedio = float(input('Digite su promedio: '))
        
        alumno = Alumno(nombre, edad, promedio)
        alumnos.append(alumno)
        print()

def mostrar_mejor_promedio(alumnos: list):
    mayor: float = 0.0
    pos: int = 0
    
    for alumno in alumnos:
        if alumno.promedio > mayor:
            mayor = alumno.promedio
            pos = alumnos.index(alumno)
    
    print('\nEl alumno con mejor promedio es:')
    print('Nombre: {}'.format(alumnos[pos].nombre))
    print('Edad: {}'.format(alumnos[pos].edad))
    print('Promedio: {}'.format(alumnos[pos].promedio))

def main():
    
    pedir_datos()
    
    mostrar_mejor_promedio(alumnos)

if __name__ == '__main__':
    main()