
def escribir_frase():
    nombre_archivo: str
    frase: str
    rpt: str = 's'
    
    try:
        nombre_archivo = input("\nDigite el nombre del archivo: ")
        archivo = open(nombre_archivo, "w")
    except FileNotFoundError:
        print("No se pudo abrir el fichero.")
        exit()

    while rpt == 'S' or rpt == 's':
        frase = input("\nDigite una frase: ")
        archivo.write(frase + "\n")
        
        rpt = input("\nDesea escribir otra frase? (s/n): ")
    
    archivo.close()

def main():
    escribir_frase()

if __name__ == "__main__":
    main()
        