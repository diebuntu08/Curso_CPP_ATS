
def funcionA(numero):
    if (numero > 0):
        funcionB(numero)
    
    print(f"{numero} ", end="")

def funcionB(numero):
    funcionA(numero - 1)

def main():
    
    print("Números: ", end="")
    funcionA(100)
    print()

if __name__ == "__main__":
    main()