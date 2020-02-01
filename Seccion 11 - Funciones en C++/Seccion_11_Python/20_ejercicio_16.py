
nfilas = 0
ncols = 0
m = []

def pedir_datos():
    global nfilas, ncols, m
    
    nfilas = int(input('Digite el número de filas: '))
    ncols = int(input('Digite el número de columnas: '))
    
    for i in range(nfilas):
        fila = []
        for j in range(ncols):
            val = int(input('[{}][{}] Digite un número: '.format(i, j)))
            fila.append(val)
        m.append(fila)

def comprobar_menor_elemento():
    menor = 99999
    
    fila = int(input('\nDigite el número de fila para comprobar menor elemento: '))
    
    for i in range(nfilas):
        for j in range(ncols):
            if i == fila:
                if m[i][j] < menor:
                    menor = m[i][j]
    
    return menor

pedir_datos()

menor_elemento = comprobar_menor_elemento()

print('\nEl menor elemento es: {}'.format(menor_elemento))