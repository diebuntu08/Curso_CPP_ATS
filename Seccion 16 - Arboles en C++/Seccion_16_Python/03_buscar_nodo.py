
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

def mostrar_arbol(arbol: Nodo, cont: int):
    if arbol.dato == None: # Si el arbol está vacío
        return ''
    else: # Si el árbol no está vacío
        mostrar_arbol(arbol.der, cont+1)
        
        for i in range(cont):
            print("   ", end='')
        
        print(arbol.dato)
        mostrar_arbol(arbol.izq, cont+1)

# Función para buscar un elemento en el árbol
def buscar_nodo(arbol: Nodo, n: int):
    if arbol.dato == None:
        return False
    elif arbol.dato == n:
        return True
    elif n < arbol.dato:
        return buscar_nodo(arbol.izq, n)
    else:
        return buscar_nodo(arbol.der, n)

def menu():
    dato: int
    opcion: int = 0
    contador: int = 0
    
    arbol = Nodo()
    
    while opcion != 4:
        print("\t.:MENU:.")
        print("1. Insertar un nuevo nodo.")
        print("2. Mostrar el arbol.")
        print("3. Buscar un elemento en el árbol.")
        print("4. Salir.")
        opcion = int(input("Opción: "))
        
        if opcion == 1:
            dato = int(input("\nDigite un número: "))
            arbol = insertar_nodo(arbol, dato)
        elif opcion == 2:
            print("\nMostrando el árbol completo:\n")
            mostrar_arbol(arbol, contador)
            print()
        elif opcion == 3:
            dato = int(input("\nDigite el elemento a buscar: "))
            if buscar_nodo(arbol, dato):
                print("El elemento {} ha sido encontrado en el árbol.".format(dato))
            else:
                print("El elemento {} no se ha encontrado en el árbol.".format(dato))


def main():
    
    menu()

if __name__ == "__main__":
    main()
    
    