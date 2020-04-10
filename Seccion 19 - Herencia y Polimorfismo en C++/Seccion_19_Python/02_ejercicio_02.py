
class Alumno:
    
    def __init__(self, nombre_carrera):
        self.nombre_carrera = nombre_carrera
    
    def mostrar_datos(self):
        print(f"Nombre de la carrera: {self.nombre_carrera}")
    
    def set_nombre_carrera(self, nuevo_nombre):
        self.nombre_carrera = nuevo_nombre
    
    def get_nombre_carrera(self):
        return self.nombre_carrera

class Deportista:
    
    def __init__(self, nombre_entrenador):
        self.nombre_entrenador = nombre_entrenador
    
    def mostrar_datos(self):
        print(f"Nombre del entrenador: {self.nombre_entrenador}")
    
    def set_nombre_entrenador(self, nuevo_nombre):
        self.nombre_entrenador = nuevo_nombre
    
    def get_nombre_entrenador(self):
        return self.nombre_entrenador

class BecadoDeporte(Alumno, Deportista):
    
    def __init__(self, nombre_carrera, nombre_entrenador, monto_beca):
        Alumno.__init__(self, nombre_carrera)
        Deportista.__init__(self, nombre_entrenador)
        self.monto_beca = monto_beca
    
    def mostrar_datos(self):
        Alumno.mostrar_datos(self)
        Deportista.mostrar_datos(self)
        print(f"El monto de la beca es: {self.monto_beca}")
    
    def set_monto_beca(self, porcentaje_monto):
        incremento = (self.monto_beca * porcentaje_monto) / 100
        self.monto_beca += incremento
    
    def get_monto_beca(self):
        return self.monto_beca