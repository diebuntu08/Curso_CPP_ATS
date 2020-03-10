
def lectura():
    
    archivo = open("programacion.txt", "r")
    
    for linea in archivo:
        print(linea, end="")

def main():
    
    lectura()

if __name__ == "__main__":
    main()