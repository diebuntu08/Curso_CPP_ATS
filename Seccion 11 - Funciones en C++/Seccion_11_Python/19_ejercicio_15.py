
nfilas = 0
ncols = 0
matriz = []

def pedir_datos():
    global nfilas, ncols, matriz
    
    nfilas = int(input('Digite el número de filas: '))
    ncols = int(input('Digite el número de columnas: '))
    
    for i in range(nfilas):
        fila = []
        for j in range(ncols):
            val = int(input('[{}][{}] Digite un número: '.format(i, j)))
            fila.append(val)
        matriz.append(fila)

def comprobar_simetria(m):
    cont = 0
    
    if nfilas == ncols:
        for i in range(nfilas):
            for j in range(ncols):
                if m[i][j] == m[j][i]:
                    cont += 1
    
    if cont == nfilas * ncols:
        print('\nLa matriz es Simétrica!\n')
    else:
        print('\nLa matriz NO es Simétrica!\n')

pedir_datos()
comprobar_simetria(matriz)
        