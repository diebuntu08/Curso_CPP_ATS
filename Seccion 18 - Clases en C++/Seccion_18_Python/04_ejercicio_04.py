
class Vehiculo:
    
    def __init__(self, marca="null", modelo="null", precio=0.0):
        self.marca = marca
        self.modelo = modelo
        self.precio = precio
    
    def get_precio(self):
        return self.precio
    
    def mostrar_datos(self):
        print("Marca:", self.marca)
        print("Modelo:", self.modelo)
        print("Precio:", self.precio)

    @staticmethod
    def indice_mas_barato(coches: list, n: int):
        indice: int = 0
        precio: float = coches[0].get_precio()
        
        for i in range(1, n):
            if coches[i].get_precio() < precio:
                precio = coches[i].get_precio()
                indice = i
        
        return indice

def main():
    
    coches = []
    numVehiculos = int(input("Digite el número de vehículos: "))
    
    for i in range(numVehiculos):
        print("\nDigite los datos del vehículo {}:".format(i + 1))
        marca = input("Marca: ")
        modelo = input("Modelo: ")
        precio = float(input("Precio: "))
        
        coches.append(Vehiculo(marca=marca, modelo=modelo, precio=precio))
    
    cocheBarato = Vehiculo.indice_mas_barato(coches, numVehiculos)
    
    print("\nEl vehículo más barato es:")
    coches[cocheBarato].mostrar_datos()

if __name__ == "__main__":
    main()