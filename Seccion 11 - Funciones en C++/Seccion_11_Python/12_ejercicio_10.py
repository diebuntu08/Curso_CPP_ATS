
anio = 0
mes = 0
dia = 0

def calc_anio(total_dias):
    global anio, mes, dia
    
    anio = int(total_dias / 365)
    total_dias %= 365
    mes = int(total_dias / 30)
    dia = total_dias % 30

total_dias = int(input('Digite el número total de días: '))

calc_anio(total_dias)

print('Fecha actual: {}/{}/{}'.format(dia + 1, mes + 1, anio + 2000))