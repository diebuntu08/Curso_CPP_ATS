
import math

# Solución recursiva
def suma_recursiva(n):
    if n <= 9:
        return n
    else:
        return suma_recursiva(math.floor(n / 10)) + n % 10

# Solución iterativa
def suma_iterativa(n):
    suma = 0
    
    while n > 9:
        suma += n % 10
        n = math.floor(n / 10)
    
    return suma + n

def main():
    
    numero = int(input("Digite un número: "))
    
    print("\nLa suma de los dígitos del número es: ")
    print(f"Algoritmo recursivo: {suma_recursiva(numero)}")
    print(f"Algoritmo iterativo: {suma_iterativa(numero)}")

if __name__ == "__main__":
    main()