
class DiaAnio:
    
    _dia: int
    _mes: int
    
    def __init__(self, dia, mes):
        self._dia = dia
        self._mes = mes
    
    def igual(self, d):
        if self._dia == d._dia and self._mes == d._mes:
            return True
        else:
            return False
    
    def visualizar(self):
        print("\nMostrando los datos:")
        print(f"Mes: {self._mes}\nDia: {self._dia}")

def main():
    
    dia = int(input("Introduzca la fecha actual, día: "))
    mes = int(input("Mes: "))
    
    hoy = DiaAnio(dia, mes)
    
    dia = int(input("Introduzca la fecha de su cumpleaños, día: "))
    mes = int(input("Mes: "))
    
    cumple = DiaAnio(dia, mes)
    
    # Mostramos la fecha actual
    hoy.visualizar()
    print()
    # Mostramos la fecha del cumpleaños
    cumple.visualizar()
    
    if hoy.igual(cumple):
        print("\nFeliz cumpleaños!!")
    else:
        print("\nQue tenga un buen día!!")

if __name__ == "__main__":
    main()