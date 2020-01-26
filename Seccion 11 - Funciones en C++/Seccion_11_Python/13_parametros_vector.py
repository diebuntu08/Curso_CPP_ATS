
TAM = 5
vector = [1, 2, 3, 4, 5]

def cuadrado():
    global vector
    
    for i in range(TAM):
        vector[i] = vector[i] * vector[i]

def muestra():
    for i in range(TAM):
        print(vector[i])

cuadrado()
muestra()