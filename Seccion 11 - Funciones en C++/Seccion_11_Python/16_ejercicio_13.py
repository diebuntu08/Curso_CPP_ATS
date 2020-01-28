
vector = []
tam = 0

def pedir_datos():
    global vector, tam
    
    tam = int(input('Digite el tamaño del vector: '))
    
    for i in range(tam):
        valor = int(input('{}. Digite un número: '.format(i + 1)))
        vector.append(valor)

def cambiar_signo():
    for i in range(tam):
        vector[i] *= -1

def mostrar_vector():
    print('\nMostrando los elementos del vector con signo cambiado:\n')
    
    for i in range(tam):
        print(vector[i])

pedir_datos()
cambiar_signo()
mostrar_vector()