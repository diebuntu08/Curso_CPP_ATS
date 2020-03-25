
class ValueAmountError(Exception):
    
    def __init__(self, error):
        self.error = error
    
    def __str__(self):
        return repr(self.error)

class Cuadrilatero:
    
    def __init__(self, *args):
        if len(args) == 1:
            self.lado1 = self.lado2 = args[0]
        elif len(args) == 2:
            self.lado1, self.lado2 = args
        else:
            raise ValueAmountError("No se admiten más de dos parámetros en esta clase.")
    
    def obtener_perimetro(self):
        return 2 * (self.lado1 + self.lado2)

    def obtener_area(self):
        return self.lado1 * self.lado2

def main():
    
    lado1 = float(input("Digite el lado 1: "))
    lado2 = float(input("Digite el lado 2: "))
    
    if lado1 == lado2:
        c1 = Cuadrilatero(lado1)
    else:
        c1 = Cuadrilatero(lado1, lado2)
    
    print(f"El perímetro del cuadrilátero es: {c1.obtener_perimetro()}")
    print(f"El área del cuadrilátero es: {c1.obtener_area()}")

if __name__ == "__main__":
    main()