
import numpy as np

N = 5
tablero = np.zeros((N, N))
exito = False

# Desplazamientos relativos del caballo
d = np.array([[2,1],[1,2],[-1,2],[-2,1],[-2,-1],[-1,-2],[1,-2],[2,-1]])

def escribir_tablero():
    
    for i in range(N):
        for j in range(N):
            print(f"{tablero[i][j]}|", end="")
        print()
    print()

def salto_caballo(i, x, y):
    global exito
    global tablero
    k = 0
    
    while (k < 8 and not exito):
        
        nx = x + d[k][0]
        ny = y + d[k][1]
        
        # Verificamos si las coordenadas son correctas
        if nx >= 0 and nx < N and ny >= 0 and ny < N and tablero[nx][ny] == 0.0:
            # Guardamos el movimiento
            tablero[nx][ny] = i
            escribir_tablero() # Mostramos el tablero
            
            if i < N * N:
                salto_caballo(i + 1, nx, ny)
                
                if not exito:
                    tablero[nx][ny] = 0
                    
            else:
                exito = True
        
        k += 1      
    
def main():
    
    global tablero
    
    fila = 1
    col = 0
    
    tablero[fila][col] = 1
    
    salto_caballo(2, fila, col)
    
    if exito:
        print("Camino encontrado")
        escribir_tablero()
    else:
        print("Camino no encontrado")

if __name__ == "__main__":
    main()