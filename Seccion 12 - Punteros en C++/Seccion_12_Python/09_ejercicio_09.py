
nFilas: int = 0
nCols: int = 0
matriz1: list = []
matriz2: list = []

def pedir_datos():
    global matriz1, matriz2, nFilas, nCols
    
    nFilas = int(input('Digite el número de filas: '))
    nCols = int(input('Digite el número de columnas: '))
    
    print('\nDigite los elementos de la primera matriz:\n')
    for i in range(nFilas):
        fila: list = []
        for j in range(nCols):
            val = int(input('Digite un número[{}][{}]: '.format(i, j)))
            fila.append(val)
        matriz1.append(fila)
    
    print('\nDigite los elementos de la segunda matriz:\n')
    for i in range(nFilas):
        fila: list = []
        for j in range(nCols):
            val = int(input('Digite un número[{}][{}]: '.format(i, j)))
            fila.append(val)
        matriz2.append(fila)

def sumar_matrices():
    global matriz1
    
    for i in range(nFilas):
        for j in range(nCols):
            matriz1[i][j] += matriz2[i][j]

def mostrar_matriz():
    print("\nLa matriz resultante es:\n")
    for i in range(nFilas):
        for j in range(nCols):
            print("{} ".format(matriz1[i][j]),end='')
        print()

def main():
    
    pedir_datos()
    
    sumar_matrices()
    
    mostrar_matriz()

if __name__ == '__main__':
    main()