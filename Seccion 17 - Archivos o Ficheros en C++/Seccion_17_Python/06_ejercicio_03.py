
def agregar():
    
    rpt = "s"
    
    nombre_archivo = input("\nDigite el nombre del archivo o su ubicación: ")
    
    try:
        archivo = open(nombre_archivo, "a")
    except FileNotFoundError:
        print("Archivo no encontrado.")
        exit()
    
    while rpt == "s" or rpt == "S":
        texto = input("\nDigite el texto que desea añadir al archivo: ")
        archivo.write(texto + "\n")
        
        rpt = input("\nDesea añadir otra frase? (s/n): ")
    
    archivo.close()

def main():
    
    agregar()

if __name__ == "__main__":
    main()