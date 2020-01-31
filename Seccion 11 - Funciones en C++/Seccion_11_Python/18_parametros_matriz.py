
import numpy as np

m = np.array([[1, 2, 3], [4, 5, 6]])

def mostrar_matriz(estado=""):
    
    print('\nMostrando matriz {}:\n'.format(estado))
    
    for i in range(m.shape[0]):
        for j in range(m.shape[1]):
            print(m[i][j], end=" ")
        print()

def calcular_cuadrado():
    global m
    
    for i in range(m.shape[0]):
        for j in range(m.shape[1]):
            m[i][j] *= m[i][j]

mostrar_matriz(estado="original")
calcular_cuadrado()
mostrar_matriz(estado="elevada")
