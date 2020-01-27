
tam = 0
vector = []

def pedir_datos():
    global vector, tam
    
    tam = int(input('Digite el número de elementos del vector: '))
    
    for i in range(tam):
        valor = int(input('{}. Digite un número: '.format(i + 1)))
        vector.append(valor)

def comprobar_ordenamiento():
    band = False
    
    i = 0
    while band == False and i < tam - 1:
        if vector[i] > vector[i + 1]:
            band = True
        
        i += 1
    
    if band == False:
        print('El arreglo está ordenado crecientemente!')
    else:
        print('El arreglo no está ordenado!')

pedir_datos()

comprobar_ordenamiento()