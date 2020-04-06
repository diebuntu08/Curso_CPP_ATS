// Clases Abstractas

#include <iostream>
#include <stdlib.h>
#include "Planta.h"
#include "AnimalCarnivoro.h"
#include "AnimalHervivoro.h"

using namespace std;

int main() {

    Planta* planta1 = new Planta();

    planta1->alimentarse();

    AnimalCarnivoro* animalCarnivoro = new AnimalCarnivoro();

    animalCarnivoro->alimentarse();

    AnimalHervivoro* animalHervivoro = new AnimalHervivoro();

    animalHervivoro->alimentarse();


    system("pause");
    return 0;
}