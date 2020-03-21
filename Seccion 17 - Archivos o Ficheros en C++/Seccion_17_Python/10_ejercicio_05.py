
import pickle

class Pulso:
    
    hora: float
    pulso: int
    
    def __init__(self):
        pass

def menu():
    
    opcion: int = 0
    
    while opcion != 4:
        
        print("""\tMENU
    1. Comenzar a digitar pulsaciones.
    2. Añadir más pulsaciones.
    3. Mostrar las pulsaciones registradas.
    4. Salir.""")
        opcion = int(input("Digite una opción: "))
        
        if opcion == 1:
            escribir_pulsacion()
        elif opcion == 2:
            agregar_pulsacion()
        elif opcion == 3:
            mostrar_pulsacion()
        else:
            pass

def escribir_pulsacion():
    
    archivoB = open("pulsaciones.pickle", "wb")
    
    pulso = Pulso()
    
    pulso.hora = float(input("Digite la hora: "))
    pulso.pulso = int(input("Digite las pulsaciones: "))
    
    pickle.dump(pulso, archivoB)
    archivoB.close()

def agregar_pulsacion():
    
    archivoB = open("pulsaciones.pickle", "ab")
    
    pulso = Pulso()
    
    pulso.hora = float(input("Digite la hora: "))
    pulso.pulso = int(input("Digite las pulsaciones: "))
    
    pickle.dump(pulso, archivoB)
    archivoB.close()

def mostrar_pulsacion():
    
    archivoB = open("pulsaciones.pickle", "rb")
    
    datos = []
    try:
        while True:
            datos.append(pickle.load(archivoB))
    except EOFError:
        pass
    
    for obj in datos:
        print("\nHora: {}\nPulsaciones: {}".format(obj.hora, obj.pulso))
    
    archivoB.close()

def main():
    
    menu()

if __name__ == "__main__":
    main()