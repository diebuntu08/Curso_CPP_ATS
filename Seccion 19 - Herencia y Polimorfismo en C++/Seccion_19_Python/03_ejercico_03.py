
class Persona:
    
    def __init__(self, nombre, apellido, edad):
        self.nombre = nombre
        self.apellido = apellido
        self.edad = edad
    
    def viajar(self):
        print("Viajar")
    
    def get_nombre(self):
        return self.nombre
    
    def get_apellido(self):
        return self.apellido
    
    def get_edad(self):
        return self.edad
    
    def partido_futbol(self):
        pass
    
    def entrenamiento(self):
        pass

class Futbolista(Persona):
    
    def __init__(self, nombre, apellido, edad, dorsal, posicion):
        super().__init__(nombre, apellido, edad)
        self.dorsal = dorsal
        self.posicion = posicion
    
    def partido_futbol(self):
        print("Juega el partido de fútbol")
    
    def entrenamiento(self):
        print("Entrena")
    
    def entrevista(self):
        print("Da una entrevista")

class Entrenador(Persona):
    
    def __init__(self, nombre, apellido, edad, estrategia):
        super().__init__(nombre, apellido, edad)
        self.estrategia = estrategia
    
    def partido_futbol(self):
        print("Dirige el equipo en el partido de fútbol")
    
    def entrenamiento(self):
        print("Dirige el entrenamiento")
    
    def planificar_entrenamiento(self):
        print("Planificar el entrenamiento")

class Medico(Persona):
    
    def __init__(self, nombre, apellido, edad, titulacion, anios_experiencia):
        super().__init__(nombre, apellido, edad)
        self.titulacion = titulacion
        self.anios_experiencia = anios_experiencia
    
    def partido_futbol(self):
        print("Da asistencia en caso de lesión en el partido de fútbol")
    
    def entrenamiento(self):
        print("Da asistencia en caso de lesión en el entrenamiento")
    
    def curar_lesion(self):
        print("Curando la lesión")

equipo = []
equipo.append(Futbolista("Gonzalo", "Higuain", 30, 9, "Delantero"))
equipo.append(Futbolista("Paulo", "Dybala", 24, 10, "Delantero"))
equipo.append(Entrenador("Massimiliano", "Allegri", 50, "Defensivo"))
equipo.append(Medico("Alex", "Marroni", 52, "Fisioterapeuta", 20))

def viajar_equipo():
    for persona in equipo:
        print(f"{persona.get_nombre()} {persona.get_apellido()} -> ", end="")
        persona.viajar()

def entrenamiento_equipo():
    for persona in equipo:
        print(f"{persona.get_nombre()} {persona.get_apellido()} -> ", end="")
        persona.entrenamiento()

def partido_futbol():
    for persona in equipo:
        print(f"{persona.get_nombre()} {persona.get_apellido()} -> ", end="")
        persona.partido_futbol()

def planificar_entrenamiento():
    print(f"{equipo[2].get_nombre()} {equipo[2].get_apellido()} -> ", end="")
    equipo[2].planificar_entrenamiento()

def entrevista():
    for persona in equipo[:2]:
        print(f"{persona.get_nombre()} {persona.get_apellido()} -> ", end="")
        persona.entrevista()

def curar_lesion():
    print(f"{equipo[3].get_nombre()} {equipo[3].get_apellido()} -> ", end="")
    equipo[3].curar_lesion()

def menu():
    
    opcion = 0
    
    while opcion != 7:
        print("\t.:MENU:.")
        print("1. Viaje en equipo")
        print("2. Entrenamiento")
        print("3. Partido de fútbol")
        print("4. Planificar entrenamiento")
        print("5. Entrevista")
        print("6. Curar lesión")
        print("7. Salir")
        opcion = int(input("Opción: "))
        print()
        
        if opcion == 1:
            viajar_equipo()
        elif opcion == 2:
            entrenamiento_equipo()
        elif opcion == 3:
            partido_futbol()
        elif opcion == 4:
            planificar_entrenamiento()
        elif opcion == 5:
            entrevista()
        elif opcion == 6:
            curar_lesion()
        elif opcion == 7:
            break
        else:
            print("Opción inválida")
        print()

def main():
    
    menu()

if __name__ == "__main__":
    main()