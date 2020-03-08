
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
    
    def mostrar_arbol_completo(self, nodo: Nodo, cont: int):
        if nodo == None:
            print("", end="")
        else:
            self.mostrar_arbol_completo(nodo.der, cont+1)
            
            for i in range(cont):
                print("   ", end="")

            print(nodo.dato)
            self.mostrar_arbol_completo(nodo.izq, cont+1)
    
    def get_raiz(self):
        return self.raiz

def menu():
    n: int
    opcion: int = 0
    contador: int = 0
    
    arbol = Arbol()
    
    while opcion != 3:
        print("\n.:MENU:.")
        print("1. Insertar un nuevo nodo.")
        print("2. Mostrar arbol completo.")
        print("3. Salir.")
        opcion = int(input("Opción: "))
        
        if opcion == 1:
            n = int(input("\nDigite un número entero: "))
            nodo = Nodo(dato=n)
            arbol.agregar_nodo(nodo)
        elif opcion == 2:
            print("\nMostrando el árbol completo:")
            arbol.mostrar_arbol_completo(arbol.get_raiz(), contador)

def main():
    menu()

if __name__ == "__main__":
    main()