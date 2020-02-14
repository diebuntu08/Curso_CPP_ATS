
nFilas: int
nCols: int
matriz: list = []

def pedir_datos():
    global nFilas, nCols, matriz
    
    nFilas = int(input('Digite el número de filas: '))
    nCols = int(input('Digite el número de columnas: '))
    
    for i in range(nFilas):
        filas: list = []
        for j in range(nCols):
            val = int(input('Digite un número[{}][{}]: '.format(i, j)))
            filas.append(val)
        matriz.append(filas)

def mostrar_matriz():
    print('\nImprimiendo la matriz original:\n')
    for i in range(nFilas):
        for j in range(nCols):
            print('{} '.format(matriz[i][j]), end='')
        print()
    
    print('\nImprimiendo la matriz transpuesta:\n')
    for i in range(nFilas):
        for j in range(nCols):
            print('{} '.format(matriz[j][i]), end='')
        print()

def main():
    
    pedir_datos()
    
    mostrar_matriz()
    
    print(matriz)

if __name__ == "__main__":
    main()