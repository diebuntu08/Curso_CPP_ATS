
def hanoi(varInicial, varCentral, varFinal, n):
    if n == 1: # Caso base
        print(f"Mover disco {n} de la varilla {varInicial} a la varilla {varFinal}")
    else: # Caso recursivo
        hanoi(varInicial, varFinal, varCentral, n-1)
        print(f"Mover disco {n} de la varilla {varInicial} a la varilla {varFinal}")
        hanoi(varCentral, varInicial, varFinal, n-1)

def main():
    
    hanoi('A', 'B', 'C', 4)

if __name__ == "__main__":
    main()