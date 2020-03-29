
class Atleta:
    
    def __init__(self, num=0, nombre="", tiempo=0.0):
        self.num_atleta = num
        self.nombre = nombre
        self.tiempo_carrera = tiempo
    
    def get_tiempo_carrera(self):
        return self.tiempo_carrera
    
    def mostrar_datos(self):
        print("Número de Atleta:", self.num_atleta)
        print("Nombre:", self.nombre)
        print("Tiempo de carrera:", self.tiempo_carrera)
    
    @staticmethod
    def indice_ganador(atletas: list, n: int):
        tiempo: float = atletas[0].get_tiempo_carrera()
        indice: int
        
        for i in range(1, n):
            if atletas[i].get_tiempo_carrera() < tiempo:
                tiempo = atletas[i].get_tiempo_carrera()
                indice = i
        
        return indice

def main():
    
    atletas = []
    num_atletas = int(input("Digite el número de atletas a competir: "))
    
    for i in range(num_atletas):
        print(f"\nDigite los atributos del atleta {num_atletas + 1}")
        num_atleta = int(input("Digite el número del atleta: "))
        nombre = input("Digite el nombre del atleta: ")
        tiempo = float(input("Digite el tiempo de carrera: "))
        
        atletas.append(Atleta(num=num_atleta, nombre=nombre, tiempo=tiempo))
    
    indice_ganador = Atleta.indice_ganador(atletas, num_atletas)
    
    print("\nEl ganador de la carrera es:")
    atletas[indice_ganador].mostrar_datos()

if __name__ == "__main__":
    main()