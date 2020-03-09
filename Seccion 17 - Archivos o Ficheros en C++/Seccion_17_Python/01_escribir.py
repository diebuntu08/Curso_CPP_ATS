
def escribir():
    frase: str
    nombre_archivo: str
    
    nombre_archivo = input("Digite el nombre del archivo: ")
    try:
        archivo = open(nombre_archivo, "w")
    except FileNotFoundError:
        print("No se pudo abrir el archivo.")
        exit()
    
    frase = input("Digite el texto que se escribirá en el archivo: ")
    archivo.write(frase + "\n")
    
    archivo.close()

def main():
    
    escribir()

if __name__ == "__main__":
    main()
    