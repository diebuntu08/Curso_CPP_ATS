
class Fecha:
    dia = 1
    mes = 1
    anio = 2000
    
    def __init__(self):
        pass

f1 = Fecha()
f2 = Fecha()

def pedir_datos():
    global f1, f2
    
    print('Digite la primera fecha: ')
    f1.dia = int(input('Digite el día: '))
    f1.mes = int(input('Digite el mes: '))
    f1.anio = int(input('Digite el año: '))
    
    print('Digite la segunda fecha: ')
    f2.dia = int(input('Digite el día: '))
    f2.mes = int(input('Digite el mes: '))
    f2.anio = int(input('Digite el año: '))

def mayor(f1, f2):
    if (f1.anio >= f2.anio) and (f1.mes >= f2.mes) and (f1.dia >= f2.dia):
        mayorFecha = f1
    else:
        mayorFecha = f2
    
    return mayorFecha

def muestra(x):
    print('\nLa fecha más reciente es: {}/{}/{}'.format(x.dia, x.mes, x.anio))


pedir_datos()

mayorFecha = mayor(f1, f2)

muestra(mayorFecha)
