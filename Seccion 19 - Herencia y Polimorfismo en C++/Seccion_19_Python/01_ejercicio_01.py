
class Mamifero:
    
    def __init__(self, anio_nacimiento, lugar_nacimiento, raza):
        self.anio_nacimiento = anio_nacimiento
        self.lugar_nacimiento = lugar_nacimiento
        self.raza = raza
    
    def imprimir_dieta(self):
        pass
    
    def get_anio_nacimiento(self):
        return self.anio_nacimiento

    def get_lugar_nacimiento(self):
        return self.lugar_nacimiento
    
    def get_raza(self):
        return self.raza

class Felino(Mamifero):
    
    def __init__(self, anio_nacimiento, lugar_nacimiento, raza, nombre_circo):
        super().__init__(anio_nacimiento, lugar_nacimiento, raza)
        self.nombre_circo = nombre_circo
    
    def imprimir_dieta(self):
        return "La dieta del felino es a base de carne.\n"

    def set_nombre_circo(self, nuevo_nombre):
        self.nombre_circo = nuevo_nombre
    
    def get_nombre_circo(self):
        return self.nombre_circo

class GatoDomestico(Felino):
    
    def __init__(self, anio_nacimiento, lugar_nacimiento, raza, nombre_duenio):
        super().__init__(anio_nacimiento, lugar_nacimiento, raza, "")
        self.nombre_duenio = nombre_duenio
    
    def imprimir_dieta(self):
        return "La dieta del gato es con Whiskas\n"

    def set_nombre_duenio(self, nuevo_nombre):
        self.nombre_duenio = nuevo_nombre
    
    def get_nombre_duenio(self):
        return self.nombre_duenio

def main():
    
    minino = GatoDomestico(2015, "Trujillo", "Gato Persa", "Diego")
    estrella_circo = Felino(2014, "La India", "Tigre de Bengala", "Espectacular")
    
    print("\nDietas:")
    print(f"Gato: {minino.imprimir_dieta()}Felino: {estrella_circo.imprimir_dieta()}")
    
    print("\nAños de nacimiento y lugar de nacimiento: ")
    print(f"Gato: {minino.get_anio_nacimiento()} - {minino.get_lugar_nacimiento()}")
    print(f"Felino: {estrella_circo.get_anio_nacimiento()} - {estrella_circo.get_lugar_nacimiento()}")
    
    print("\nCambiar el nombre del dueño del gato:")
    nuevo_nombre = input("Digite el nombre del nuevo dueño: ")
    minino.set_nombre_duenio(nuevo_nombre)
    print(f"El nuevo dueño del Gato es: {minino.get_nombre_duenio()}")
    
    print("\nRaza:")
    print(f"Gato: {minino.get_raza()}\nFelino: {estrella_circo.get_raza()}")
    
    print("\nCambiar el nombre del Circo:")
    nuevo_nombre = input("Digite el nuevo nombre del circo: ")
    estrella_circo.set_nombre_circo(nuevo_nombre)
    print(f"El nuevo nombre del circo es: {estrella_circo.get_nombre_circo()}")

if __name__ == "__main__":
    main()