
class Nodo:
    
    def __init__(self):
        self.izq = None
        self.der = None
        self.dato = None
        
# Función para crear un nuevo nodo
def crear_nodo(n: int):
    nuevo_nodo = Nodo()
    
    nuevo_nodo.dato = n
    nuevo_nodo.izq = Nodo()
    nuevo_nodo.der = Nodo()
    
    return nuevo_nodo

# Función para insertar elementos al arbol
def insertar_nodo(arbol: Nodo, n: int):
    if arbol.dato == None: # Si el árbol está vacío
        arbol = crear_nodo(n)
    else: # Si el árbol tiene un nodo o más
        valor_raiz = arbol.dato # Obtenemos el valor raiz
        
        if n < valor_raiz:
            arbol.izq = insertar_nodo(arbol.izq, n) # Si el elemento es menor que la raiz
        else:
            arbol.der = insertar_nodo(arbol.der, n) # Si el elemento es mayor que la raiz
    return arbol

def menu():
    dato: int
    opcion: int = 0
    
    arbol = Nodo()
    
    while opcion != 2:
        print("\t.:MENU:.")
        print("1. Insertar un nuevo nodo.")
        print("2. Salir.")
        opcion = int(input("Opción: "))
        
        if opcion == 1:
            dato = int(input("\nDigite un número: "))
            arbol = insertar_nodo(arbol, dato)

def main():
    
    menu()

if __name__ == "__main__":
    main()
    
    