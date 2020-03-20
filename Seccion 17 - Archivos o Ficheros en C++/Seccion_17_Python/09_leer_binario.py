
class Registro:
    
    def __init__(self, nombre='', apellidos=''):
        self.nombre = nombre
        self.apellidos = apellidos
    
    def __str__(self):
        return f"{self.nombre} {self.apellidos}"

def escribir():
    
    archivoB = open("prueba.dat", "wb")
    
    persona = Registro()
    
    print("\tPidiendo datos")
    persona.nombre = input("Digite un nombre: ")
    persona.apellidos = input("Digite un apellido: ")
    
    archivoB.write(str(persona).encode())
    archivoB.close()

def leer():
    
    archivoB = open("prueba.dat", "rb")
    
    persona = Registro()
    
    print("\n\tMostrando datos")
    datos = archivoB.read().decode().split()
    persona.nombre = datos[0]
    persona.apellidos = datos[1]
    print("Nombre: {}\nApellidos: {}".format(persona.nombre, persona.apellidos))

def main():
    
    escribir()
    leer()

if __name__ == "__main__":
    main()