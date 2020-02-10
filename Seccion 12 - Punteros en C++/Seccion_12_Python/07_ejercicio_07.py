
nombre_usuario: str = ''

def pedir_nombre():
    global nombre_usuario
    
    nombre_usuario = input('Digite su nombre: ')
    nombre_usuario = nombre_usuario.upper()

def contarVocales(nombre: str) -> int:
    
    cont: int = 0
    i: int = 0
    
    VOCALES: list = ['A', 'E', 'I', 'O', 'U']
    
    while (i < len(nombre)):
        if nombre[i] in VOCALES:
            cont += 1
        
        i += 1
    
    return cont

def main():
    pedir_nombre()
    
    print('\nEl número de vocales en el nombre es: {}'.format(contarVocales(nombre_usuario)))

if __name__ == '__main__':
    main()