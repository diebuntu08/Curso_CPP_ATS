
class Arbol:
    
    def __init__(self):
        self.izq = None
        self.der = None
        self.dato = None
        
# Función para crear un nuevo nodo
def crear_nodo(n: int):
    nuevo_nodo = Arbol()
    
    nuevo_nodo.dato = n
    nuevo_nodo.izq = Arbol()
    nuevo_nodo.der = Arbol()
    
    return nuevo_nodo

# Función para insertar elementos al arbol
def insertar_nodo(arbol: Arbol, n: int):
    if arbol.dato == None: # Si el árbol está vacío
        arbol = crear_nodo(n)
    else: # Si el árbol tiene un nodo o más
        valor_raiz = arbol.dato # Obtenemos el valor raiz
        
        if n < valor_raiz:
            insertar_nodo(arbol.izq, n) # Si el elemento es menor que la raiz
        else:
            insertar_nodo(arbol.der, n) # Si el elemento es mayor que la raiz
    return arbol

def menu():
    dato: int
    opcion: int = 0
    
    arbol = Arbol()
    
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
    
    