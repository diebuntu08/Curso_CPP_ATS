
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
            
            nodo.padre = padre
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
    
    def buscar_nodo(self, nodo: Nodo, n: int):
        if nodo == None:
            return False
        elif nodo.dato == n:
            return True
        elif n < nodo.dato:
            return self.buscar_nodo(nodo.izq, n)
        else:
            return self.buscar_nodo(nodo.der, n)
    
    def pre_orden(self, nodo: Nodo):
        if nodo == None:
            return ""
        else:
            print(nodo, end="")
            self.pre_orden(nodo.izq)
            self.pre_orden(nodo.der)
    
    def in_orden(self, nodo: Nodo):
        if nodo == None:
            return ""
        else:
            self.pre_orden(nodo.izq)
            print(nodo, end="")
            self.pre_orden(nodo.der)
    
    def post_orden(self, nodo: Nodo):
        if nodo == None:
            return ""
        else:
            self.pre_orden(nodo.izq)
            self.pre_orden(nodo.der)
            print(nodo, end="")
    
    def _minimo(self, nodo: Nodo):
        current = nodo
        while current.izq != None:
            current = current.izq
        
        return current

    def eliminar_nodo(self, nodo: Nodo, n: int):
        if self.raiz == None:
            print("No hay elementos en el árbol.")
        else:
            if n < nodo.dato:
                self.eliminar_nodo(nodo.izq, n)
            elif n > nodo.dato:
                self.eliminar_nodo(nodo.der, n)
            else:
                if nodo.izq != None and nodo.der != None:
                    menor = self._minimo(nodo.der)
                    nodo.dato = menor.dato
                    self.eliminar_nodo(nodo.der, menor.dato)
                elif nodo.der != None:
                    menor = self._minimo(nodo.der)
                    nodo.dato = menor.dato
                    self.eliminar_nodo(nodo.der, menor.dato)
                elif nodo.izq != None:
                    nodo.dato = nodo.izq.dato
                    self.eliminar_nodo(nodo.izq, nodo.izq.dato)
                else:
                    if nodo.padre.izq != None:
                        if nodo.padre.izq.dato == nodo.dato:
                            nodo.padre.izq = None
                    if nodo.padre.der != None:
                        if nodo.padre.der.dato == nodo.dato:
                            nodo.padre.der = None

    def get_raiz(self):
        return self.raiz

def menu():
    n: int
    opcion: int = 0
    contador: int = 0
    
    arbol = Arbol()
    
    while opcion != 8:
        print("\n.:MENU:.")
        print("1. Insertar un nuevo nodo.")
        print("2. Mostrar arbol completo.")
        print("3. Buscar un elemento en el árbol.")
        print("4. Recorrer el árbol en PreOrden.")
        print("5. Recorrer el árbol en InOrden.")
        print("6. Recorrer el árbol en PostOrden.")
        print("7. Eliminar un nodo del árbol.")
        print("8. Salir.")
        opcion = int(input("Opción: "))
        
        if opcion == 1:
            n = int(input("\nDigite un número entero: "))
            nodo = Nodo(dato=n)
            arbol.agregar_nodo(nodo)
        elif opcion == 2:
            print("\nMostrando el árbol completo:")
            arbol.mostrar_arbol_completo(arbol.get_raiz(), contador)
        elif opcion == 3:
            elemento = int(input("\nDigite el elemento a buscar: "))
            if arbol.buscar_nodo(arbol.get_raiz(), elemento):
                print("El elemento {} SÍ se encuentra en el árbol.".format(elemento))
            else:
                print("El elemento {} NO se encuentra en el árbol.".format(elemento))
        elif opcion == 4:
            print("\nRecorrido del árbol en PreOrden:")
            arbol.pre_orden(arbol.get_raiz())
        elif opcion == 5:
            print("\nRecorrido del árbol en InOrden:")
            arbol.in_orden(arbol.get_raiz())
        elif opcion == 6:
            print("\nRecorrido del árbol en PostOrden:")
            arbol.post_orden(arbol.get_raiz())
        elif opcion == 7:
            dato = int(input("\nDigite el elemento que desea eliminar: "))
            arbol.eliminar_nodo(arbol.get_raiz(), dato)
            print()

def main():
    menu()

if __name__ == "__main__":
    main()