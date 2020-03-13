
def lectura():
    nombreArchivo: str
    texto: str
    
    nombreArchivo = input("\nDigite el nombre o la ubicación del archivo: ")
    
    try:
        archivo = open(nombreArchivo, "r")
    except FileNotFoundError:
        print("\nNo se pudo abrir el archivo.")
    
    texto = archivo.readlines()
    
    for linea in texto:
        print(linea, end="")
    
    print()

def main():
    
    lectura()

if __name__ == "__main__":
    main()
    
    