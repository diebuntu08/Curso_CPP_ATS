
horas = 0
minutos = 0
segundos = 0

def tiempo(total_seg):
    global horas, minutos, segundos
    
    horas = int(total_seg / 3600)
    total_seg %= 3600
    minutos = int(total_seg / 60)
    segundos = total_seg % 60

total_seg = int(input('Digite el número de segundos totales: '))

tiempo(total_seg)

print('El tiempo equivalente a la cantidad {} de segundos es: {:02d}:{:02d}:{:02d}'.format(total_seg, horas, minutos, segundos))