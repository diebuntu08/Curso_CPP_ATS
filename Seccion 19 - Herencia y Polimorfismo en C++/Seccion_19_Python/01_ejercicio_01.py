
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
    
    def __init__(self, anio_nacimiento, lugar_nacimiento, raza, nombre_circo=""):
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
        super().__init__(anio_nacimiento, lugar_nacimiento, raza)
        self.nombre_duenio = nombre_duenio
    
    def imprimir_dieta(self):
        return "La dieta deñ gato es con Whiskas\n"

    def set_nombre_duenio(self, nuevo_nombre):
        self.nombre_duenio = nuevo_nombre
    
    def get_nombre_duenio(self):
        return self.nombre_duenio