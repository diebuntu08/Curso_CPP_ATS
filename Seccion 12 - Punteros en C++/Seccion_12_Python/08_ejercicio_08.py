
palabra_ususario: str = ''

def pedir_cadena():
    global palabra_ususario
    
    palabra_ususario = input('Digite una palabra o frase: ')
    palabra_ususario = palabra_ususario.upper()

def contar_vocal(palabra: str, vocal: str):
    
    cont: int = 0
    
    for letra in palabra:
        if letra == vocal:
            cont += 1
        
    print('Número de veces que aparece la vocal {}: {}'.format(vocal, cont))

def main():
    
    pedir_cadena()
    
    print()
    contar_vocal(palabra_ususario, 'A')
    contar_vocal(palabra_ususario, 'E')
    contar_vocal(palabra_ususario, 'I')
    contar_vocal(palabra_ususario, 'O')
    contar_vocal(palabra_ususario, 'U')
    
if __name__ == '__main__':
    main()