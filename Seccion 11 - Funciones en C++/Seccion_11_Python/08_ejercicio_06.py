
def maximo(dato1, dato2, dato3):
    maximo = 0

    if dato1 >= dato2 and dato1 >= dato3:
        maximo = dato1
    else:
        if dato2 >= dato1 and dato2 >= dato3:
            maximo = dato2
        else:
            maximo = dato3
    
    return maximo

dato1, dato2, dato3 = 4, 6, 8

print('El valor máximo es: {}'.format(maximo(dato1, dato2, dato3)))