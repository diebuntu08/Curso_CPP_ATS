
class Etapa:
    horas: int
    mins: int
    segs: int
    
    def __init__(self, horas, minutos, segundos):
        self.horas = horas
        self.mins = minutos
        self.segs = segundos

etapas = []

def pedir_datos():
    global etapas
    
    print('Digite los tiempps emleados: ')
    for i in range(3):
        horas = int(input('Horas: '))
        mins = int(input('Minutos: '))
        segs = int(input('Segundos: '))
        
        etapa = Etapa(horas, mins, segs)
        etapas.append(etapa)
        print()
def calcular_tiempo(etapas: list):
    horasT: int = 0
    minT: int = 0
    segT: int = 0
    
    for etapa in etapas:
        horasT += etapa.horas
        minT += etapa.mins
        if minT >= 60:
            minT -= 60
            horasT += 1
        segT += etapa.segs
        if segT >= 60:
            segT -= 60
            minT += 1
    
    print('\nMostrando el tiempo total:')
    print('Horas: {}'.format(horasT))
    print('Minutos: {}'.format(minT))
    print('Segundos: {}'.format(segT))

def main():
    
    pedir_datos()
    
    calcular_tiempo(etapas)

if __name__ == '__main__':
    main()