
class Persona:

    def __init__(self, nombre, discapacidad):
        self.nombre = nombre
        self.discapacidad = discapacidad

n_personas = int(input('Digite el número de personas: '))

personas = []
personasConD = []
personasSinD = []

for i in range(n_personas):
    nombre = input('{}. Digite el nombre de la persona: '.format(i+1))
    disc = input('{}. La persona tiene discapacidad? (S/N): '.format(i+1))

    if disc.lower() == 's':
        personas.append(Persona(nombre, True))
        personasConD.append(Persona(nombre, True))
    else:
        personas.append(Persona(nombre, False))
        personasSinD.append(Persona(nombre, False))

print('\nMostrar personas sin discapacidad:\n')
for persona in personasSinD:
    print(persona.nombre)

print('\nMostrar personas con discapacidad:\n')
for persona in personasConD:
    print(persona.nombre)