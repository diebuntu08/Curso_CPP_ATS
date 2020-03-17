
def agregar():
    
    try:
        archivo = open("programacion.txt", "a")
    except FileNotFoundError:
        print("No se pudo abrir el archivo.")
        exit()

    texto = input("\nDigite el texto que desea agregar al archivo: ")
    archivo.write("\n" + texto)
    
    archivo.close()

def main():
    
    agregar()

if __name__ == "__main__":
    main()