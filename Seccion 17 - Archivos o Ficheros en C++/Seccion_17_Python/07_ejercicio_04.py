
class Datos:
    
    def __init__(self, nombre, apellidos, telefono):
        self.nombre = nombre
        self.apellidos = apellidos
        self.telefono = telefono

def menu():
    
    opcion: int = 0
    
    while opcion != 4:
        print("\t\t\t\tMENU")
        print("""\t1. Crear (nombre, apellidos, teléfono)
        2. Agregar más contactos (nombre, apellidos, teléfono)
        3. Visualizar contactos existentes
        4. Salir.""")
        opcion = int(input("Opción: "))
        
        if opcion == 1:
            crear_contacto()
        elif opcion == 2:
            agregar_contacto()
        elif opcion == 3:
            visualizar_contactos()
        else:
            exit()

def crear_contacto():
    
    rpt: str = "s"
    
    archivo = open("AgendaTelefonica.txt", "w")
    archivo.write("\tAgenda Telefónica\n\n")
    
    datos = Datos("", "", "")
    
    while rpt == "s" or rpt == "S":
        datos.nombre = input("\nNombre: ")
        datos.apellidos = input("Apellidos: ")
        datos.telefono = input("Telefono: ")
        
        archivo.write("Nombre: {}\n".format(datos.nombre))
        archivo.write("Apellidos: {}\n".format(datos.apellidos))
        archivo.write("Teléfono: {}\n\n".format(datos.telefono))
        
        rpt = input("\nDesea ingresar otro contacto? (s/n): ")
    
    archivo.close()

def agregar_contacto():
    
    rpt: str = "s"
    
    archivo = open("AgendaTelefonica.txt", "a")
    
    datos = Datos("", "", "")
    
    while rpt == "s" or rpt == "S":
        datos.nombre = input("\nNombre: ")
        datos.apellidos = input("Apellidos: ")
        datos.telefono = input("Telefono: ")
        
        archivo.write("Nombre: {}\n".format(datos.nombre))
        archivo.write("Apellidos: {}\n".format(datos.apellidos))
        archivo.write("Teléfono: {}\n\n".format(datos.telefono))
        
        rpt = input("\nDesea agregar otro contacto? (s/n): ")
    
    archivo.close()

def visualizar_contactos():
    
    archivo = open("AgendaTelefonica.txt", "r")
    
    texto = archivo.read()
    print(texto)
    
    archivo.close()

def main():
    
    menu()

if __name__ == "__main__":
    main()
    