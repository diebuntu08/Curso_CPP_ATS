
cien = 0
cincuenta = 0
veinte = 0
diez = 0
cinco = 0
uno = 0

def cambio(valor):
    global cien, cincuenta, veinte, diez, cinco, uno

    cien = int(valor / 100)
    valor %= 100
    cincuenta = int(valor / 50)
    valor %= 50
    veinte = int(valor /20)
    valor %= 20
    diez = int(valor / 10)
    valor %= 10
    cinco = int(valor / 5)
    uno = valor % 5

valor = int(input('Digite la cantidad en dólares: '))

cambio(valor)

print('Cantidad de billetes a entregar como cambio: ')
print('Cien: {}'.format(cien))
print('Cincuenta: {}'.format(cincuenta))
print('Veinte: {}'.format(veinte))
print('Diez: {}'.format(diez))
print('Cinco: {}'.format(cinco))
print('Uno: {}'.format(uno))

