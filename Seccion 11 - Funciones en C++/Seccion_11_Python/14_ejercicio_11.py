
vector = []

def pedir_datos():
    global vector
    
    tam = int(input('Digite el número de elementos del vector: '))
    
    for i in range(tam):
        valor = int(input('{}. Digite un número: '.format(i + 1)))
        
        vector.append(valor)

def calcular_suma():
    
    suma = 0
    
    for valor in vector:
        suma += valor
    
    return suma

pedir_datos()

print("\nLa suma de los elementos del vector es: {}".format(calcular_suma()))