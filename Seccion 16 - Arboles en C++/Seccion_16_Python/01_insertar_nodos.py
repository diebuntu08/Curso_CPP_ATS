
class Nodo:
    
    def __init__(self, dato=None, izq=None, der=None):
        self.dato = dato
        self.izq = izq
        self.der = der
        self.padre = None
    
    def __str__(self):
        return "{} -> ".format(self.dato)

class Arbol:
    
    def __init__(self):
        self.raiz = None
    
    def agregar_nodo(self, nodo: Nodo):
        if self.raiz == None:
            self.raiz = nodo
        else:
            aux = self.raiz
            padre = None
            
            while aux != None:
                padre = aux
                if nodo.dato >= aux.dato:
                    aux = aux.der
                else:
                    aux = aux.izq
            
            if nodo.dato >= padre.dato:
                padre.der = nodo
            else:
                padre.izq = nodo

def menu():
    n: int
    opcion: int = 0
    
    arbol = Arbol()
    
    while opcion != 2:
        print("\n.:MENU:.")
        print("1. Insertar un nuevo nodo.")
        print("2. Salir.")
        opcion = int(input("Opción: "))
        
        if opcion == 1:
            n = int(input("\nDigite un número entero: "))
            nodo = Nodo(dato=n)
            arbol.agregar_nodo(nodo)

def main():
    menu()

if __name__ == "__main__":
    main()