
vector = []
tam = 0

def pedir_datos():
    global vector, tam
    
    tam = int(input('Digite el tamaño del vector: '))
    
    for i in range(tam):
        valor = int(input('{}. Digite un número: '.format(i + 1)))
        vector.append(valor)

def impares():
    vec_impares = []
    
    for valor in vector:
        if valor % 2 != 0:
            vec_impares.append(valor)
    
    print('\nImprimiendo los elementos impares del vector:\n')
    print(vec_impares)

pedir_datos()
impares()