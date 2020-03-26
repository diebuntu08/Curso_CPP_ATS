
class Tablero:
    
    def __init__(self, x: int, y: int):
        self.x = x
        self.y = y
    
    def mover_arriba(self, n: int):
        self.y += n
    
    def mover_abajo(self, n: int):
        self.y -= n
    
    def mover_derecha(self, n: int):
        self.x += n
    
    def mover_izquierda(self, n: int):
        self.x -= n
    
    def get_X(self):
        return self.x

    def get_Y(self):
        return self.y

def main():
    
    opcion = 0
    
    print("Digite la posición inicial del objeto:")
    x = int(input("Posición X: "))
    y = int(input("Posición Y: "))
    
    ob1 = Tablero(x, y)
    
    while opcion != 5:
        print("\n\t.:MENU:.")
        print("1. Mover Arriba.")
        print("2. Mover Abajo.")
        print("3. Mover Derecha.")
        print("4. Mover Izquierda.")
        print("5. Salir.")
        opcion = int(input("Opción: "))
        
        if opcion > 0 and opcion <= 4:
            n = int(input("Digite las posiciones a mover: "))
        
        if opcion == 1:
            ob1.mover_arriba(n)
        elif opcion == 2:
            ob1.mover_abajo(n)
        elif opcion == 3:
            ob1.mover_derecha(n)
        elif opcion == 4:
            ob1.mover_izquierda(n)
        elif opcion == 5:
            pass
        else:
            print("Opción inválida.")
            continue
    
        print(f"Posición actual del objeto -> (X, Y): ({ob1.get_X()}, {ob1.get_Y()})")

if __name__ == "__main__":
    main()