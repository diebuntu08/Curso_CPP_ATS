
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

def main():
    
    alumno_Juan = Alumno("Informática")
    alumno_Pedro =Alumno("Sistemas")
    
    depor_Luis = Deportista("Popeye")
    
    bd_Ana = BecadoDeporte("Administración", "Luis", 1200)
    bd_Carmen = BecadoDeporte("Contabilidad", "La Roca", 1350)
    
    print("\nMostrando Datos: ")
    print("Alumno Juan:")
    alumno_Juan.mostrar_datos()
    print("Alumno Pedro:")
    alumno_Pedro.mostrar_datos()
    print("Deportista Luis:")
    depor_Luis.mostrar_datos()
    print("Becado Ana:")
    bd_Ana.mostrar_datos()
    print("Becado Carmen:")
    bd_Carmen.mostrar_datos()
    
    nueva_carrera = input("\nDigite la nueva carrera de Juan: ")
    alumno_Juan.set_nombre_carrera(nueva_carrera)
    nueva_carrera = input("Digite la nueva carrera de Ana: ")
    bd_Ana.set_nombre_carrera(nueva_carrera)
    
    print(f"\nLa nueva carrera de Juan es: {alumno_Juan.get_nombre_carrera()}")
    print(f"La nueva carrera de Ana es: {bd_Ana.get_nombre_carrera()}")
    
    nuevo_entrenador = input("\nDigite el nuevo entrenador de Luis: ")
    depor_Luis.set_nombre_entrenador(nuevo_entrenador)
    nuevo_entrenador = input("Digite el nuevo entrenador de Carmen: ")
    bd_Carmen.set_nombre_entrenador(nuevo_entrenador)
    
    print(f"\nEl nuevo entrenador de Luis es: {depor_Luis.get_nombre_entrenador()}")
    print(f"El nuevo entrenador de Carmen es: {bd_Carmen.get_nombre_entrenador()}")
    
    incremento = float(input("\nDigite el incremento de la beca de Ana: "))
    bd_Ana.set_monto_beca(incremento)
    incremento = float(input("Digite el incremento de la beca de Carmen: "))
    bd_Carmen.set_monto_beca(incremento)
    
    print(f"\nLa nueva beca de Ana es: {bd_Ana.get_monto_beca()}")
    print(f"La nueva beca de Carmen es: {bd_Carmen.get_monto_beca()}")

if __name__ == "__main__":
    main()