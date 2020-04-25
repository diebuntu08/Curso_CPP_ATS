
import numpy as np

N = 10
reinas = np.zeros(N)
solucion = False

def mostrar_tablero():
    
    tablero = np.zeros((N, N))
    
    print("Mostrando el arreglo:")
    print("|", end="")
    for i in range(N):
        print(f"{int(reinas[i])}|", end="")
    
    print("\n")
    
    # Ahora asignamos el valor del arreglo hacia el tablero
    for i in range(N):
        for j in range(N):
            tablero[int(reinas[j])][j] = 1

    print("\nMostrando el tablero:")
    for i in range(N):
        print("|", end="")
        for j in range(N):
            print(f"{int(tablero[i][j])}|", end="")
        print()
    print()

def valido(i):
    """
    Comprobar si la reina de la columna i no se amenaza
    con ninguna reina ya puesta
    """

    v = True

    for r in range(i):
        v = v and (reinas[i] != reinas[r]) # Comprobar si la fila está vacía
        v = v and ((reinas[i]-i) != (reinas[r]-r)) # Diagonal 1
        v = v and ((reinas[i]+i) != (reinas[r]+r)) # Diagonal 2

    return v

def poner_reina(i):
    global solucion
    global reinas
    k = 0 # Inicializamos el conteo de movimientos
    
    while not solucion and k < N:
        reinas[i] = k
        k += 1
        
        mostrar_tablero()
        
        if valido(i):
            if i < N - 1:
                poner_reina(i + 1)
                
                # Vuelta atrás
                if not solucion:
                    reinas[i] = 0

            else:
                # Ya agregamos todas las reinas
                solucion = True   

def main():
    
    poner_reina(0)
    
    if solucion:
        print("Existe combinación de reinas!!!")
        mostrar_tablero()
    else:
        print("NO existe combinación de reinas!!!")

if __name__ == "__main__":
    main()